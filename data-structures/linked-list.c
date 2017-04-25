#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
}

node* createNode(int data, node* next) {
    node* newNode = malloc(sizeof(node*));
    
    if (newNode == NULL) {
        exit(1);
    }
    
    newNode->data = data;
    newNode->next = next;
    
    return newNode;
}

void insertAtLL() {
    
}

void deleteLL() {
    
}

void searchLL() {
    
}

void displayLL() {
    
}

void deleteAtLL() {
    
}

int main(void {
    node* head = createNode(NULL, NULL);
}                               