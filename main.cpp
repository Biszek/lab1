#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n,m;
	
	scanf("%d%d",&n,&m);
	srand(m);
	
	drawCharSquare(charSquare(n), n);	

}

char **charSquare(int n)
{
	char **square;
	
	square = (char**) malloc(n*sizeof(char*));
	
	for(int i=0;i<n;i++)
	square[i] = (char*) malloc(n*sizeof(char));
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		square[i][j]=char((rand()%26)+97);	

	return square;

}

void drawCharSquare(char **square, int n)
{
	for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		printf("%c",square[i][j]);
		printf("\n");
		}

	for(int i=0;i<n;i++)
	free(square[i]);

	free(square);

}
