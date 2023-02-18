#include <stdio.h>



int main(){
	
	int lin, col, num;
	int A[4][4],B[4][4];
	
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			printf("digite numero\n");
			scanf("%d", &A[lin][col]);
		}
	}
	
	printf("digite um numero");
	scanf("%d", &num);
	
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			B[lin][col] = A[lin][col] * num;
		}
	}
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			printf("%4d", B[lin][col]); 
		}
		printf("\n");
	}
}
