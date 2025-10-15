#define SIZE 100 
#include <stdio.h>

void initArray (int *arr);

int main (void) 
{ 
    int numbers [SIZE]; 
    initArray (numbers); 
} 

void initArray (int *arr) 
{
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 0;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

}