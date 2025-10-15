#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int difficulty_guesses = 0;

    printf("Difficulty scale:\n");
    printf("\x1b[32m■■■■■■■■■■■■■■\x1b[0m""\x1b[33m■■■■■■■■■■■■■■\x1b[0m""\x1b[31m■■■■■■■■■■■■■■■■■■\x1b[0m\n");
    printf("15 - Easy\t   ");
    printf("7 - Medium\t   ");
    printf("1 - Hard\t\n");
    printf("Choose your amount of guesses 1-15:");
    scanf("%d", &difficulty_guesses);
    if (difficulty_guesses < 1 || difficulty_guesses > 15) {
        printf("Invalid number of guesses. Please choose a number between 1 and 15.\n");
        return 1;
    }
    srand(time(0));
    int random_number = rand() % 100 + 1;
    int guess = 0;
    printf("Guess the Number from 1 to 100: \n", random_number);
    for (int i = 0; i < difficulty_guesses; i++) {
        scanf("%d", &guess);
        printf("You guessed: %d\n", guess);
        if (guess > random_number) {
            printf("Your guess is too high.\n%d guesses left\n", difficulty_guesses-1-i);
        } else if (guess < random_number) {
            printf("Your guess is too low.\n%d guesses left\n", difficulty_guesses-1-i);
        } else {
            printf("Congratulations! You guessed the number correctly it was %d.\n", random_number);
            quick_exit(0);
        }
    }
    printf("Well you are all out of guesses, I guess %d isnt your lucky number\n", random_number);
    return 0;
}