#include <stdio.h>

int main(int arg, char* argc[]) {
	int numb;
	int* pointer;
	long tall;
	double * decimal;
	char** charachter;
	printf("The size of an int is %d \n", sizeof(numb));
	printf("The size of an int pointer is %d \n", sizeof(pointer));
	printf("The size of an long is %d \n", sizeof(tall));
	printf("The size of a double pointer is %d \n", sizeof(decimal));
	printf("The size of a pointer to pointer char is %d \n", sizeof(charachter));

	printf("Hello assignment1.\n");
	system("pause");
	return 0;
}
