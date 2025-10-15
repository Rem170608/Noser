#include <stdio.h>
#include "Header/Aufgabe-8.2.1.h"

int main() {
    int dez[100];


    printf("Input your desired number: ");
    scanf("%d", &dez[0]); 

    printf("You entered: %d\n", dez[0]);

    for (int i = 0; i < 1; i++) {
        int n = dez[i];
        int binary[32];
        int index = 0;

        if (n == 0) {
            printf("Error system over load......\n");
            for (int j = 0; j < 32; j++) {
                printf("0");
            }
            continue;
        }

        while (n > 0) {
            binary[index] = n % 2;
            n = n / 2;
            index++;
        }

        printf("Binary of %d is: ", dez[i]);
        int count = 0;

        for (int j = index - 1; j >= 0; j--) {
            printf("%d", binary[j]);
            count++;
            if (count % 4 == 0 && j != 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
