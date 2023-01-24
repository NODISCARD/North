// This file contains the entry point of North.
#include "headers.h"
#include "auxiliary.h"
using namespace std;
void* WaitForConnect (void *arg);
int Connect (); 

int main (int argc, char **argv) {
    cout << "Welcome using North" << endl;
    pthread_t t_WaitForConnect, t_Connect;
    pthread_create(&t_WaitForConnect, NULL, WaitForConnect, NULL);


    return 0;
}

void* WaitForConnect (void *arg) {
    return 0;
}

int Connect () {
    return 0;
}