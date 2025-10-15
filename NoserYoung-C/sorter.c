#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "header/sort.h"
#include "Header/animation.h"

//sorter: https://www.geeksforgeeks.org/c/c-bubble-sort/

int main() {
    int a = 0;
    int b = 0;
    int get_num;
    int start = 0;
    int end = a - 1;
    int sorting_t = 0;
    int counter = 0;
    int time1, time2;

    printf("Enter the number of elements: ");
    scanf("%d", &a); 
    int rand_num[a];
    if (a <= 0) {
        printf("\x1b[31mError \x1b[0m");
        printf("Number of elements must be greater than 0\n");
        return 1;
    }    
    time1 = GetTickCount();
    b = a;
    while (1 <= b) {
        b = b / 2;
        counter++;
    }
    time2 = GetTickCount();

    printf("time to calculate: %d s %d ms\n", (time2 - time1) / 1000, (time2 - time1));

    switch (counter)
    {
    case 0:
        printf("\x1b[31mError \x1b[0m");
        printf("Sorting time too low\n");
        break;
    case 1 ... 10:
        printf("\x1b[33mWarning \x1b[0m");
        printf("Sorting time low\n");
        sorting_t = 10;
        break;
    case 11 ... 20:
        printf("\x1b[32mInfo \x1b[0m");
        printf("Sorting time optimal\n");
        sorting_t = 30;
        break;
    case 21 ... 50:
        printf("\x1b[33mWarning \x1b[0m");
        printf("Sorting time high\n");
        sorting_t = 40;
        break;
    default:
        break;
    }   

    srand(rand() + time(0) + GetCurrentProcessId());
    printf("Sorting time %d\n", sorting_t);
    for (int c = 0; c < a; c++)
    {
        rand_num[c] = rand() % a + 1;
    }
    sorting_animation(sorting_t);
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (rand_num[j] > rand_num[j + 1])
                swap(rand_num, j, j + 1);
        }
    }
    for (int i = 0; i < a; i++)
        printf("%d ", rand_num[i]);
    printf("\nEnter a number to search: \n");
    scanf("%d", &get_num);
    int result = binarySearch(rand_num, 0, a - 1, get_num);
    if (result == -1)
        printf("%d not found\n", get_num);
    else
        printf("Found %d at index %d\n", get_num, result);
    return 0;
}