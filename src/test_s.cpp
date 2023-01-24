#include "./headers.h"
using namespace std;

int main (void) {
    cout << "Welcome using north" << endl;
    int listenfd, connfd;
    struct sockaddr_in servaddr;
    
    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Socket error");
        exit(1);
    }
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(8080);

    bind(listenfd, (struct sockaddr*) &servaddr, sizeof(servaddr));
    listen(listenfd, LISTENQ);
    while(1) {
        connfd = accept(listenfd, (struct sockaddr*)nullptr, nullptr);
        write(connfd, "Server returns an info", string("Server returns an info").length());
        close(connfd);
    }



    return 0;
}