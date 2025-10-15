#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Header/animation.h"


int main() {
    int note;
    printf("Geben Sie Ihre Note ein: ");
    scanf("%d", &note);
    if (note < 1 || note > 6) {
        printf("Ungültige Note. Bitte geben Sie eine Note zwischen 1 und 6 ein.\n");
        return 1;
    }
    float gewichtung;
    printf("Geben Sie die Gewichtung der Note ein: ");
    scanf("%f", &gewichtung);
    if (gewichtung < -0.25 || gewichtung > 2) {
        printf("Ungültige Gewichtung. Bitte geben Sie eine Gewichtung zwischen -0.25 und 2 ein.\n");
        return 1;
    }
    float endnote = note * gewichtung;
    printf("Die gewichtete Note beträgt: %.2f\n", endnote);
    return 0;
}