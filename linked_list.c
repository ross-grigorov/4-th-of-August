
#include "linked_list.h"



void print_ll(Node *head) {
    if(!head) {
        printf("Empty linked list\n");
        return;
    }
    Node *curNode = head;
    while(curNode) {
        printf("addr: %p,  data: %ld,   next: %p\n",
            curNode, curNode->data, curNode->next);
        curNode = curNode->next;
    }
}

void push_back(Node **head, long new_data) {
    Node *new_node = malloc(sizeof(Node));
    if(!new_node) {
        perror("Push_back: Could not malloc\n");
        exit(-1);
    }
    new_node -> data = new_data;
    new_node -> next = NULL;


    if(*head == NULL) {
        *head = new_node;
        return;
    }

    Node *last_node = *head;
    while(last_node->next != NULL) {
        last_node = last_node->next;
    }
    last_node -> next = new_node;
}

void pop_front(Node **head_pp) {

    if(!(*head_pp)) {
        perror("Pop_front: Linked list is empty\n");
        return;
    }
    Node *deleted_node = *head_pp;
    *head_pp = (*head_pp)->next;
    free(deleted_node);
}

void pop_back(Node **head_pp) {
    if(*head_pp==NULL)
    {
        perror("Linked list is empty");
        exit(0);
    }
    Node *second_to_last_node=NULL, *last_node;
    last_node=*head_pp;
    while(last_node->next!=NULL)
    {
        second_to_last_node=last_node;
        last_node=last_node->next;
    }
    if(last_node!=*head_pp)
    {
        second_to_last_node->next = NULL;
    }
    else
    {
        *head_pp = NULL;
    }
    free(last_node);
}

void reverse(Node **head_pp);


