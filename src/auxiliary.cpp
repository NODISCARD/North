#include "headers.h"
using namespace std;

void err_sys(char* text) {
    perror(text);
    exit(1);
}