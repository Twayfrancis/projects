#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {
    int n, i, x;
    struct Node* head = NULL;
    struct Node* current = NULL;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            current = head;
        }
        else {
            current->next = newNode;
            current = current->next;
        }
    }
    
    printf("Elements of the linked list: ");
    printLinkedList(head);
    
    return 0;
}
