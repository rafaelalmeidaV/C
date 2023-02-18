#include <stdio.h>

int main(){
	
	int i;
	char email[50], alias[50];
	printf("\n digite o email");
	gets(email);
	
	while (email[i] != '\0' && email[i] != '@')
	{
		alias[i] = email[i];
		i++;
	}
	alias[i]='\0';
	printf("alias = %s \n", alias);
	return 0;
	
	
	
}
