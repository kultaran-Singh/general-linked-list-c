#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

typedef struct Node node;
typedef struct List list;

//Creation Of List
list* list_create();

//Insertion Functions
void list_push_back(list* l, void* object);
void list_push_front(list* l, void* object);
void list_push_at_index(list* l, void* object, int index);

//Deletion Functions
void* list_pop_back(list* l);
void* list_pop_front(list* l);
void* list_pop_at_index(list* l, int index);

//Helper Functions
size_t get_list_size(list* l);
void list_print(list* l);

#endif
