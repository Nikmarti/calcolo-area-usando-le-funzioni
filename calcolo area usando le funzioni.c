#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, b, area;
	void stampa(int area);
	
	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("Inserisci b: ");
	scanf("%d", &b);
	
	area=a*b;
	
	stampa(area);
}

void stampa(int area)
{
	printf("L'area e': %d", area);
}
