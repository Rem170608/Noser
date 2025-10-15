#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int binarySearch(int arr[], int low, int high, int get_num) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == get_num)
            return mid;
        if (arr[mid] > get_num)
            return binarySearch(arr, low, mid - 1, get_num);
        return binarySearch(arr, mid + 1, high, get_num);
    }
    return -1;
}
