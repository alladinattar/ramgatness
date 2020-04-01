#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int n = stoi(argv[1]);  
    int number = stoi(argv[2]);
    int i = 0;
    unsigned char *pointer = (unsigned char*)malloc(n);
    if (pointer==NULL) {
    exit(1);
    }
    if (number == 1) {
    while(i<n){
        pointer[i] = 255;
        i++;
    }
    } else {
        while(i<n){
        pointer[i] = 0;
        i++;
    }
    }
    return 0;
}

