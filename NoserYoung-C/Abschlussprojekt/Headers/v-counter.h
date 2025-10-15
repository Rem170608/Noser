#ifndef VERSION_COUNTER_H
#define VERSION_COUNTER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Only run once per execution
static inline void print_and_increment_version(const char *filename) {
    static int already_ran = 0;
    if (already_ran) {
        return;
    }
    already_ran = 1;

    int major = 0, minor = 0, patch = 0;
    FILE *f = fopen(filename, "r+");

    if (f == NULL) {

        f = fopen(filename, "w+");
        if (f == NULL) {
            perror("Error opening file");
            return;
        }
        fprintf(f, "0 0 0");
        rewind(f);
    }

    // Read current version
    fscanf(f, "%d %d %d", &major, &minor, &patch);


    patch++;
    if (patch > 9) {
        patch = 0;
        minor++;
    }
    if (minor > 99) {
        minor = 0;
        major++;
    }


    if (major > 9) {
        major = 9;
        minor = 99;
        patch = 9;
    }


    srand((unsigned) time(NULL));
    int color = 30 + rand() % 8;

    // Print coloured version
    printf("\033[%dmV %d.%02d.%d\033[0m\n", color, major, minor, patch);


    rewind(f);
    fprintf(f, "%d %d %d", major, minor, patch);
    fclose(f);
}

#endif // VERSION_COUNTER_H
