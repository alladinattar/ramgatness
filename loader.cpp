#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack> 
#include <thread> 
#include <vector>
#include <unistd.h>
using namespace std;

void Stack(int n, int number, int time) {
    //try{
    int i = 0;//unsigned long int занимает 4 байта
    stack <unsigned long int> steck;//создаем стек из чисел
    if (number == 1) {//если в аргументе функции number = 1
    while(i<n){//пока i<n заполняем стек  по 4 байта
        steck.push(4294967295);
        i++;
    }
    printf("stack complete\n");
    } else {// если нет то заполняем стек нулями
        
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
    if (number == 1) {// выделяем память под динамический массив целых чисел размером n
    unsigned long int *pointer = (unsigned long int*) calloc(n,sizeof(unsigned long int));
    if (pointer==NULL) {
        printf("Error: can't allocate memory");
        exit(1);
    }
    while(i<n){// заполняем массив
        pointer[i] = 3;
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
    int thrcount_heap = stoi(argv[4]);
    int thrcount_stack = stoi(argv[5]);

    vector <thread> ths_heap;
    vector <thread> ths_stack;

    for (int i = 0; i < thrcount_heap; ++i)
        ths_heap.push_back(thread (Heap, n, number, timeToSleep));
    for (auto & th : ths_heap)
        th.join();

    for (int i = 0; i < thrcount_stack; ++i)
        ths_stack.push_back(thread (Stack, n, number, timeToSleep));
    for (auto & th : ths_stack)
        th.join();
    

    return 0;
}
