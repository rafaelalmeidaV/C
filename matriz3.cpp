#include <stdio.h>

int main(){
	
	int l, c;
	float  nota1[5][5],media;
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			printf("digite a %d a nota do aluno %d: ", c+1, l+1);
			scanf("%f", &nota1[l][c]);		
			
		}
		
	}
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			media = media + nota1[l][c];
			
		}
		printf("a medida do %d o aluno %.1f\n", l+1,media/5);
		media = 0;
	}
	
	
	
}
