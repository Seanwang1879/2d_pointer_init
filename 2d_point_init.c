#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE  100

void main()
{
	int i;
	char **str;

	str = (char**)malloc(sizeof(char *)*STR_SIZE);
	for(i=0; i<STR_SIZE; i++){
		str[i] = (char*)malloc(sizeof(char)*STR_SIZE);    //*(str+i)
	}
	
	for(i=0; i<STR_SIZE; i++){
		free(str[i]);
	}
	free(str);
}