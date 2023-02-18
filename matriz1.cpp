#include <stdio.h>



int main(){
	
	int lin=0,col=0;
	int numero[3][4],numeroB[3][4], numeroC[3][4];	 
	
	for(lin=0;lin<3;lin++){
		for(col=0;col<4;col++){
			printf("digite numero\n");
			scanf("%d", &numero[lin][col]);
		}
	}
	
	
	
	for(lin=0;lin<3;lin++){
		for(col=0;col<4;col++){
			printf("digite numero\n");
			scanf("%d", &numeroB[lin][col]);
		}
	}
	
	
	
	for(lin=0;lin<3;lin++){
		for(col=0;col<4;col++){
			numeroC[lin][col] = numero[lin][col]+numeroB[lin][col]; 
			
		}
	}
	
	for(lin=0;lin<3;lin++){
		for(col=0;col<4;col++){
			printf("%4d", numeroC[lin][col]); 
		}
		printf("\n");
	}
	
	
	
	
}
