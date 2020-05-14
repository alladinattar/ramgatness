#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack> 
#include <thread> 
#include <unistd.h>
using namespace std;

void Stack(int n, int number) {
    try{
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
    sleep(2);
    } catch(void *) {}
}

void Heap(int n, int number) {
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
    sleep(2);
    
    } catch(void *) {}
}

int main(int argc, char *argv[])
{
    int n = stoi(argv[1]);  
    int number = stoi(argv[2]);

    thread th1(Heap, n/10, number);
    thread th2(Heap, n/10, number);
    thread th3(Heap, n/10, number);
    thread th4(Heap, n/10, number);
    thread th5(Heap, n/10, number);
    thread th6(Heap, n/10, number);
    thread th7(Heap, n/10, number);
    thread th8(Heap, n/10, number);
    thread th9(Heap, n/10, number);
    thread th10(Heap, n/10, number);
    thread th20(Heap, n/10, number);
    thread th21(Heap, n/10, number);
    thread th22(Heap, n/10, number);
    thread th23(Heap, n/10, number);
    thread th24(Heap, n/10, number);
    thread th25(Heap, n/10, number);
    thread th26(Heap, n/10, number);
    thread th27(Heap, n/10, number);
    thread th28(Heap, n/10, number);
    thread th29(Heap, n/10, number);
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
