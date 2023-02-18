#include <stdio.h>

int main(){
	
	int l, c;
	int nota1[4][3], soma1, soma2;
	
	for(l=0;l<4;l++){
		for(c=0;c<3;c++){
			printf("digite um numero ");
			scanf("%d", &nota1[l][c]);	
		}
		
	}
	
	for(l=0;l<4;l++){
		for(c=0;c<3;c++){
			printf("%d ", nota1[l][c]);
		}
		printf("\n");
	}
	
	for(l=0;l<4;l++){
		for(c=0;c<3;c++){
			soma2 = soma2 + nota1[l][c];			
			
		}
		printf("a soma da %d linha eh: %d ", l+1, soma2);
		soma2=0;
		printf("\n");
	}
	
	for(c=0;c<4;c++){
		for(l=0;l<3;l++){
			soma1 = soma1 + nota1[l][c];			
			
		}
		printf("a soma da %d coluna eh: %d ", c+1, soma1);
		soma1=0;
		printf("\n");
	}
	
	
	
	
	
}
