#include <stdio.h>
#include <linked_list.h>

//Simple function to demonstrate the list_for_each function
void print_integer(void* data){
    int* num = (int*)data;
    printf("%d\n", *num);
}

int main(){

    //Creating the list
    list* l = list_create();
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    
    list_push_back(l,&a);
    list_push_back(l,&b);
    list_push_back(l,&c);
    list_push_back(l,&d);
    list_push_back(l,&e);
    
    //Deletes the element at index 3
    list_pop_at_index(l, 3);
    //Prints the list
    list_for_each(l, print_integer);
    //Deleting the list
    list_delete(l, NULL);
    
    return 0;

}