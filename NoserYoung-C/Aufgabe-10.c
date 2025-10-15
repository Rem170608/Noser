#include <stdio.h>

int main() {
    int a; 
    int *pt;
    

    a = 10; pt = &a;

    printf ("a : %d\n", a);
    printf ("pt %p\n", pt);
    printf ("pt++ : %d\n", pt++);
    printf("*pt : %d\n", *pt);
    printf("*pt++ : %d\n", *pt++);
    printf("*(pt++) : %d\n", *(pt++));
    printf("(*pt)++ : %d\n", (*pt)++);
    printf ("&pt : %p\n", &pt);
    printf ("&a: %p\n", &a);
    printf ("&*pt: %p\n", &*pt);
    return 0;


}

