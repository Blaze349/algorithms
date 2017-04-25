#include <stdio.h>

void swap(int *a, int *b) {
    //get a to be equal to a + c
    *a += *b;
    //b is now equal to a
    *b = *a - *b;
    //a is now equal to first b
    *a = *a - *b;
}

int main(int argc, char** argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    printf("A is %d and B is %d\n", a, b);
    printf("Now swapping....\n\n");
    
    swap(&a, &b);
    
    printf("A is %d and B is %d\n", a, b);
    printf("Swapped\n\n");
    
    return 0;
}