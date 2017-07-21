namespace linkedList {

    struct Node {
        int data;
        struct Node* next;
    }

    typedef struct Node Node;
    
    void insert(Node* node, Node* newNode) {
        newNode->next = node->next;
        node->next = newNode; 
    }
    
    void delete(Node* node, Node* previousNode) {
        previousNode->next = node->next;
        node->next = null;
        delete(node); 
    }

    

}
