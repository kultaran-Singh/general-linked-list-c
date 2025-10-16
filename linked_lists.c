#include<stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "linked_lists.h"

typedef struct Node{
    void* element;
    struct Node* next;
}node;

typedef struct List{
    struct Node* head;
    size_t size;
}list;

list* list_create(){
    list* l;
    l = (list*)malloc(sizeof(list));
    l->head == NULL;
    l->size == 0;
    return l;
}

void list_push_back(list* l, void* object){
    
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL){
        printf("MEMORY ALLOCATION FAILED.");
        return;
    }

    new_node->element = object;
    new_node->next = NULL;

    if(l->head == NULL){
        l->head = new_node;
        return;
    }
    node* current = l-> head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = new_node;
    return;

}

void list_print(list* l){
    if(l->head == NULL){
        printf("List is empty! \n");
        return;
    }
    node* current = l->head;
    while(current != NULL){
        printf("%d -->", current->element);
        current = current->next;
    }
    printf("\n");
    return;
    
}

void list_push_front(list* l, void* object){

    node* current = l->head;
    if(current == NULL){
        current->element = object;
        return;
    }
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = current;
    new_node->element = object;
    l->head = new_node;

}