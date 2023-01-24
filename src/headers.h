#ifndef _H_HEADERS
#define _H_HEADERS

// C/C++ STL.
#include <iostream>
#include <string>
#include <string.h>

// UNIX libraries.
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>

// Other libs.
#include <ncurses.h>

// Necessary macros.
#define MAXLINE 4096
#define BUFFSIZE 8192
#define LISTENQ 1024

#endif