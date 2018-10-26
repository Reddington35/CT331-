#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

typedef struct listElementStruct{
  char* data;
  size_t size;
  struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size){
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL){
    //malloc has had an error
    return NULL; //return NULL to indicate an error.
  }
  char* dataPointer = malloc(sizeof(char)*size);
  if(dataPointer == NULL){
    //malloc has had an error
    free(e); //release the previously allocated memory
    return NULL; //return NULL to indicate an error.
  }
  strcpy(dataPointer, data);
  e->data = dataPointer;
  e->size = size;
  e->next = NULL;
  return e;
}

//Prints out each element in the list
void traverse(listElement* start){
  listElement* current = start;
  while(current != NULL){
    printf("%s\n", current->data);
    current = current->next;
  }
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, char* data, size_t size){
  listElement* newEl = createEl(data, size);
  listElement* next = el->next;
  newEl->next = next;
  el->next = newEl;
  return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after){
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}

// method to get length of Linked List which returns an int 
int length(listElement* head) {
	int length = 0; // initialises the int variable to 0
	listElement* current = head; // sets the current element to head
	while (current != NULL) { // while current element is not empty
		current = current->next; // points to the next item in the list
		length++; // increments the int value labeled length
	}
	//printf("%d", length);
	return length;
}
// method to push an item to the top of the list
void push(listElement** list, char* data, size_t size) {
	listElement* head = createEl(data, size); // head creates a new element
	head->next = *list; // head points to the next item
	*list = head; // item is pushed to head of list
}

// method to pop an item from the list
listElement* pop(listElement** list) {
	listElement* head = *list;
	*list = head->next;
	//free(head);
	return head;
}

// method to enqueue
void enqueue(listElement** list, char* data, size_t size) {
	listElement* head = createEl(data, size);
	head->next = *list;
	*list = head;
}
// method to dequeue
listElement* dequeue(listElement* list) {
	listElement* current = list;
	while (current->next->next != NULL) {
		current = current->next;
	}
	list = current->next;
	current->next = NULL;
	return current;
}

