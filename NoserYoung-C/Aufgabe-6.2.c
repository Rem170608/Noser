#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char choice[2];
    char mode[2]; 
    char moded[2];
    printf("Version 2.8\n");
    printf("Word games or Diagrams?\n");
    printf("Enter 'W' for Word games or 'D' for Diagrams: ");
    scanf("%1s", choice);
    if (choice[0] == 'W' || choice[0] == 'w') {
        char word[100];
        printf("Enter a word: ");
        scanf("%99s", word);
          int wlen = strlen(word);
    for(int i = 0; i < wlen; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32;
        }
    }
    printf("\x1b[31mR = Reversed\x1b[33m/S = Square\x1b[32m/P = Palindrome\x1b[0m\n");
    printf("Mode selecter (R/S/P): "); 
    scanf("%3s", mode); 

    if (mode[0] == 'S' || mode[0] == 's') // Square
    {
        printf("Square mode activated.\n");
        printf("You entered: %s\n", word);

        printf("%s\n", word);

        for(int i = 1; i < wlen - 1; i++) {
            printf("%c", word[i]); 
            for(int j = 1; j < wlen - 1; j++) {
                printf(" "); 
            }
            printf("%c\n", word[wlen - i - 1]); 
        }

        for(int k = wlen - 1; k >= 0; k--) {
            printf("%c", word[k]);
        }
    }
    else if (mode[0] == 'R' || mode[0] == 'r') //Reversed
    {
        printf("You entered: %s\n", word);
        for(int k = wlen - 1; k >= 0; k--) {
            printf("%c", word[k]);
        }
    } 
    else if (mode[0] == 'P' || mode[0] == 'p') //Palindrome
    {
        printf("You entered: %s\n", word);
        char reversed[100];
        for(int k = 0; k < wlen; k++) {
            reversed[k] = word[wlen - k - 1];
        }
        reversed[wlen] = '\0';
        printf("%s", reversed);
        printf(" ");
        if (strcmp(word, reversed) == 0) {
            printf("is a palindrome.\n");
        } else {
            printf("is not a palindrome.\n");
        }
    }
    else
    {
        printf("\n");
        printf("Invalid mode selected.\n");
    }
    return 0;
    }
    if (choice[0] == 'D' || choice[0] == 'd') 
    {
        printf("\x1b[31mvB = Bargraph\x1b[33m/l = line\x1b[0m\n");
        printf("Mode selecter (B/l): "); 
        scanf("%3s", moded); 

        if (moded[0] == 'B' || moded[0] == 'b') 
    {
        printf("Tall mode activated.\n");
        char data[100]; 
        printf("Enter Data \x1b[31m(with spaces for separation)\x1b[0m: "); 
        for(int i = 1; i < wlen - 1; i++) {
            printf("%c", word[i]); 
            for(int j = 1; j < wlen - 1; j++) {
                printf(" "); 
            }
            printf("%c\n", word[wlen - i - 1]); 
        }
    }
    else if (moded[0] == 'L' || moded [0] == 'l') 
    {
        printf("Line mode activated.\n");
            char data[100]; 
        printf("Enter Data \x1b[31m(with spaces for separation)\x1b[0m: ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        fgets(data, sizeof(data), stdin);
        size_t len = strlen(data);
        if (len > 0 && data[len - 1] == '\n') {
            data[len - 1] = '\0';
        }
        const char* delim = " "; 
        char* tok = strtok(data, delim);
        while (tok != NULL) {
            int num = atoi(tok);   
            if (num > 0) {
                for (int i = 0; i < num; i++) {
                    printf("\x1b[31m■\x1b[0m");
                }
            }
            printf("\n"); 
            tok = strtok(NULL, delim); 
        }
    }
    }
    else
    {
        printf("Invalid choice.\n");   
    }
    
    return 0;
}