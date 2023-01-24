#include "headers.h"
#include "auxiliary.h"
using namespace std;

int main (int argc, char **argv) {
    cout << "Welcome using North" << endl;
    cout << "Please enter a host running North \n" <<
    "or wait for a connect to chat:" << ends;
    int sockfd, n;
    char recvinfo[MAXLINE + 1];
    struct sockaddr_in servaddr;
    
    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) err_sys("Socket error");
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(8080);
    if(inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0) err_sys("failed");

    if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0) err_sys("connect error");

    while((n = read(sockfd, recvinfo, MAXLINE)) > 0) {
        recvinfo[n] = 0;
        fputs(recvinfo, stdout);
    }

    if (n < 0) err_sys("read error");
    cout << endl;
    return 0;
}