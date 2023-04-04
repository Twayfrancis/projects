#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* current = NULL;

    for (int i = 1; i <= 11; i++) {
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node->data = i;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            current = new_node;
        }
        else {
            current->next = new_node;
            current = new_node;
        }

        printf("Node %d: data = %d, address = %p\n", i, new_node->data, new_node);
    }

    return 0;
}
