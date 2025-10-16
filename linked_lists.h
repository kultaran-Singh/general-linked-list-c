#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

typedef struct Node node;
typedef struct List list;

list* list_create();
void list_push_back(list* l, void* object);

void list_push_front(list* l, void* object);
void list_push_at_index(list* l, void* object, int index);


#endif
