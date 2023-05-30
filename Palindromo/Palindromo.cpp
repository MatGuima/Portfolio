#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char p[30];
	int tam, i, iguais = 0;
		
	printf("Digite a sua palavra: \n");
	scanf("%s", p);
	
	tam = strlen (p);
	
	for (i = 0; i < strlen(p); i++)
	{
		char c = p[tam - 1];
		tam--;
			if(p[i] == c)	
				iguais++;
	}
	
	if(strlen(p) == iguais)
		printf("\nEh palindromo\n");
	else
		printf("\nNao eh palindromo\n");
	
	return 0;
}
