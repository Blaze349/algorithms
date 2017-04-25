#include <stdio.h>
#include <stdlib.h>


// This search is inefficient. It is O(n)
int lSearch(int array[], val) {
    arrLength = sizeof(array)/sizeof(array[0]);
    for (int i=0; i < arrayLength; i++) {
        if (array[i] == val) {
            return i;
        }
    }
    
    return -1;
}