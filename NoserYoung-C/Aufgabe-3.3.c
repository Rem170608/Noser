#include <stdio.h>
int i = 390;
float f = 42.7f;
double d = 3.14159;
long double ld = 2.725;
char c = 'c';
signed char sc = 'g';

int main() {
    printf("Spicherbedarf int: %d Byte(s)\n", sizeof(int));
    printf("Spicherbedarf float: %d Byte(s)\n", sizeof(float));
    printf("Spicherbedarf double: %d Byte(s)\n", sizeof(double));
    printf("Spicherbedarf long double: %d Byte(s)\n", sizeof(long double));
    printf("Spicherbedarf char: %d Byte(s)\n", sizeof(char));
    printf("Spicherbedarf signed char: %d Byte(s)\n", sizeof(signed char));
    printf("Werte der Variablen:\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("Variale\t\tZeichen\t\t\tdez\t\t\thex\t\t\tokt\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("i\t\t\t\t\t%d\t\t\t%#x\t\t\t%o\n", i, i, i);
    printf("f\t\t\t\t\t%d\t\t%#x\t\t%o\n",f, *(unsigned int*)&f, *(unsigned int*)&f);
    printf("d\t\t\t\t\t%d\t\t%#x\t\t%o\n", d, *(unsigned long*)&d, *(unsigned long*)&d);
    printf("ld\t\t\t\t\t%d\t\t\t%#x\t\t%o\n", ld, *(unsigned long*)&ld, *(unsigned long*)&ld);
    printf("c\t\t%c\t\t\t%d\t\t\t%#x\t\t\t%o\n", c, c, c);
    printf("sc\t\t%c\t\t\t%d\t\t\t%#x\t\t\t%o\n", sc, sc, sc);
}