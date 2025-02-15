#include <stdio.h>

int crash(int *x) {
    printf("I'm going to print x!\n");
    printf("The value of *x is %p\n", *x);
}

int main(int argc, char **argv) {
    int x = 0;
    printf("We're going to crash!\n");
    crash(&x);
    printf("Back after the crash?\n");
}
