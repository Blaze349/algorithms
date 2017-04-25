#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//This search is efficent. It is O(log n) 
//This means that the function is a constant times how many times a number can be divided by 2.
//It is also more lines of code than lsearch. It shows the line number is not a good indicator of efficiency.


int bSearch(int min, int max, int array[], int val) {
    
    if (max < min) {
        return -1;
    }
    
    int mid = floor((max + min) / 2);
    if (array[mid] == val) {
        return mid;
    }
    if (array[mid] < val) {
        return bSearch(mid+1, max, array, val);
    }
    
    if (array[mid] > val) {
        return bSearch(min, mid+1, array, val);
    }
    
    
    
}

int main(int argc, char** argv) {
    int val = atoi(argv[1]);
    
    int arr[50];
    
    for (int i = 0; i <= 49; i++) {
        
        arr[i] = i;
        printf("%d\n", i);
    }
    
    int pos = bSearch(0, 49, arr, val);
    
    if (pos == -1) {
        printf("Your value could not be found\n");
    } else {
        printf("You value is at position: %d\n", pos);
    }
}