#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//This search is efficent. It is O(log n) 
//This means that the function is a constant times how many times a number can be divided by 2.
//It is also more lines of code than lsearch. It shows the line number is not a good indicator of efficiency.


int bSearch(int min, int max, int array[], int val) {
    //find mid
    int mid = floor((max + min) / 2);
    
    if (array[mid] == val) {
        return mid;
    }
    
    if (max < min) {
        return -1;
    }
    
    if (array[mid] < val) {
        return bSearch(min, mid, array, val);
    }
    
    if (array[mid] > val) {
        return bSearch(mid, max, array, val);
    }
    
    
}

int main(int argc, char** argv) {
    int val = atoi(argv[1]);
    
    int arr[50];
    
    for (int i = 0; i < 50; i++) {
        printf("%d\n", i);
        arr[i] = i;
    }
    
    int pos = bSearch(0, 49, arr, val);
    
    if (pos == -1) {
        printf("Your value could not be found");
    } else {
        printf("You value is at position: %d", pos);
    }
}