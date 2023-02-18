#include <stdio.h>

int main(){
	
	
	int i;
	char email[50], email2[50];
	printf("\n digite o email ");
	gets(email);
	
	while (email[i]!='\0'){
		email2[i]=email[i];
		i++;
	}
	
	email2[i]='\0';
	printf("%s ", email2, i);
	return 0;
	
	
	
}
