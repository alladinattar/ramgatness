#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack> 
#include <thread> 
#include <unistd.h>
using namespace std;

void Stack(int n, int number, int time) {
    //try{
    int i = 0;
    stack <unsigned long int> steck;
    if (number == 1) {
    while(i<n){
        steck.push(4294967295);
        i++;
    }
    printf("stack complete\n");
    } else {
        
       while(i<n){
        steck.push(0);
        i++;
    }
     printf("stack complete\n");
    }
    sleep(time);
    //} catch(void *) {}
}

void Heap(int n, int number, int time) {
    try{
    int i = 0;    
    if (number == 1) {
    unsigned long int *pointer = (unsigned long int*) calloc(n,sizeof(unsigned long int));
    if (pointer==NULL) {
        printf("Error: can't allocate memory");
        exit(1);
    }
    while(i<n){
        pointer[i] = 4294967295;
        i++;
    }
     printf("heap complete\n");
    } else {
        
        unsigned long int *pointer = (unsigned long int*) calloc(n,sizeof(unsigned long int));
        printf("heap complete\n");
    if (pointer==NULL) {
        printf("Error: can't allocate memory");
        exit(1);
    }
    }
    sleep(time);
    
    } catch(void *) {}
}

int main(int argc, char *argv[])
{
    int n = stoi(argv[1]);  
    int number = stoi(argv[2]);
    int timeToSleep = stoi(argv[3]);

    thread th1(Stack, n/10, number, timeToSleep);
    thread th2(Stack, n/10, number, timeToSleep);
    thread th3(Stack, n/10, number, timeToSleep);
    thread th4(Stack, n/10, number, timeToSleep);
    thread th5(Stack, n/10, number, timeToSleep);
    thread th6(Stack, n/10, number, timeToSleep);
    thread th7(Stack, n/10, number, timeToSleep);
    thread th8(Heap, n/10, number, timeToSleep);
    thread th9(Heap, n/10, number, timeToSleep);
    thread th10(Heap, n/10, number, timeToSleep);
    thread th20(Heap, n/10, number, timeToSleep);
    thread th21(Heap, n/10, number, timeToSleep);
    thread th22(Heap, n/10, number, timeToSleep);
    thread th23(Heap, n/10, number, timeToSleep);
    thread th24(Heap, n/10, number, timeToSleep);
    thread th25(Heap, n/10, number, timeToSleep);
    thread th26(Heap, n/10, number, timeToSleep);
    thread th27(Heap, n/10, number, timeToSleep);
    thread th28(Heap, n/10, number, timeToSleep);
    thread th29(Heap, n/10, number, timeToSleep);
    th1.join(); 
    th2.join(); 
    th3.join(); 
    th4.join(); 
    th5.join(); 
    th6.join(); 
    th7.join(); 
    th8.join(); 
    th9.join(); 
    th10.join(); 
    th20.join(); 
    th21.join(); 
    th22.join(); 
    th23.join(); 
    th24.join(); 
    th25.join(); 
    th26.join(); 
    th27.join(); 
    th28.join(); 
    th29.join(); 

    return 0;
}
