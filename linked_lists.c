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
        l->size++;
        return;
    }
    node* current = l-> head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = new_node;
    l->size++;
    return;

}



void list_push_front(list* l, void* object){

    node* current = l->head;
    if(current == NULL){
        current->element = object;
        l->size++;
        return;
    }
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = current;
    new_node->element = object;
    l->head = new_node;
    l->size++;

}

void list_push_at_index(list* l, void* object, int index){

    if(index > l->size){
        printf("ERROR: Index out of bounds.");
        return;
    }
    else if(index == 0){
        list_push_front(l, object);
        return;
    }
    else if(index == l->size){
        list_push_back(l, object);
        return;
    }
    int current_index = 0;
    node* current_node = l->head;
    while(current_index < index - 1){
        current_node = current_node->next;
        current_index++;
    }
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = current_node->next;
    new_node->element = object;
    current_node->next = new_node;
    
    l->size++;
    return;
}