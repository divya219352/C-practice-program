//C Program to Create a Copy of a Singly Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Recursive function to create a copy of the linked list
struct Node* copyList(struct Node* head) {
    // Base case: if the current node is NULL, return NULL (end of the list)
    if (head == NULL) {
        return NULL;
    }
    
    // Create a new node with the same data as the current node
    struct Node* newNode = createNode(head->data);
    
    // Recursively copy the rest of the list
    newNode->next = copyList(head->next);
    
    // Return the newly created node
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    // Creating the original linked list
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    printf("Original Linked List:\n");
    printList(head);

    // Creating a copy of the linked list using recursion
    struct Node* copiedHead = copyList(head);
    
    printf("\nCopied Linked List:\n");
    printList(copiedHead);

    return 0;
}
