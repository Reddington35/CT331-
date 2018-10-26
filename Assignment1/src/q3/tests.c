#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");
  int numb = 66;
  char c = "w";
  double dec = 25.66;
  char string = "pool";

  //Test insert after
  listElement* el2 = createEl(&numb,30,&printInt);
 
  //insertAfter(el2, "String 3", 30,& printChar);
  printf("Initial list\n\n");
  traverse(el2);
  printf("\n");

  listElement* el3 = createEl(&dec, 30, &printDouble);
  traverse(el3);
  printf("\n");

  listElement* el4 = createEl(&c, 30, &printChar);
  traverse(el4);
  printf("\n");
  system("pause");


}
