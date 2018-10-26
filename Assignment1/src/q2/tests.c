#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("String 1", 30);
  //Test create and traverse
  

  //Test insert after
  listElement* l2 = insertAfter(l, "String 2", 30);
  insertAfter(l2, "String 3", 30);
  printf("Initial list\n\n");
  traverse(l);
  printf("\n");

  // Test delete after

 // traverse(l);
  printf("\n");
  // length of List
  printf("Length of list is :  %d\n", length(l));
  // test push element onto the list
  printf("pushing element\n\n");
  push(&l, "String 4", 30);
  traverse(l);
  printf("\n\nLength of list after push :  %d \n", length(l));

  printf("poping element\n");
  //pop(l);
  listElement* poped = pop(&l);
  traverse(l);
  printf("\n\nLength of list after pop :  %d \n", length(l));
 
  printf("enqueing element\n\n");
  enqueue(&l, "String 5", 30);
  traverse(l);
  printf("\n\n");

  printf("Length of list after enqueue :  %d\n", length(l));

  printf("dequeuing element \n\n");
  dequeue(l);
  traverse(l);
  printf("Length of list after dequeue :  %d\n", length(l));
  printf("\nTests complete.\n");
}
