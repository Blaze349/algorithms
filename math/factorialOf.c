#include <stdio.h>
#include <stdlib.h>

long factorialOf(int num) {
    //if num is equal to one
    if (num < 1) {
        //wil change later to include the factorial of 0
        return 0;
    }
    if (num == 1 || num == 0) {
        return 1;
    } else {
        return num * factorialOf(num-1);
    }
}

int main(int argc, char **argv) {
    char * num = argv[1];
    printf("%ld", factorialOf(atoi(num)));
}