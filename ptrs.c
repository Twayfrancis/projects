#include <stdlib.h>
#include <stdio.h>
int main(){
	int *pointer_to_year = NULL; (int *)malloc(sizeof(int)); // memory created for ptr 
	free(pointer_to_year); // memory released
			       // pointer_to_year is pointing to adeleted memory location now
	pointer_to_year = NULL; // no more dangling pointer
	}
