#include <stdlib.h>
#include <stdio.h>

#define MEMSIZE 10

void randomFunction(char *in){
	in[5] = 'c';
}

int main(int argc, char *argv[]){ 
	//My first buggy program
	printf("Entering main\n");
	int *array;
	char *string = NULL;
	int alpha, beta; 
	array = (int*)malloc(MEMSIZE*sizeof(int));
	randomFunction(string);
	array[5] = array[2]+10;
	alpha = MEMSIZE + 20;
	beta = alpha + MEMSIZE + 30;
 }
