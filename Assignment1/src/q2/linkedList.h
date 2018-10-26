#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size);

//Delete the element after the given el
void deleteAfter(listElement* after);

// gets the length of the list
int length(listElement* head);

// push an item onto the top of the stack
void push(listElement** list, char* data, size_t size);

// pops an item from the stack
listElement* pop(listElement** list);

// enqueue an item to the start of the list
void enqueue(listElement** list, char* data, size_t size);
// take an item from the tail
listElement* dequeue(listElement* list);

#endif
