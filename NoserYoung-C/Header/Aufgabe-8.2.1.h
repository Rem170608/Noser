void removeSpaces(int *arr, int *size) {
    int i, j = 0;
    for (i = 0; i < *size; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    *size = j;
}