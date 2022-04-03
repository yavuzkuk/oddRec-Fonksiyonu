#include <stdio.h>
#include <stdlib.h>
int oddRec(int *tut ,int size)
{
	static int i=0;
	static int tek=0;
	static int cift=0;
	
	if(*(tut)%2==1)
	{
		i++;
		tek++;
	}
	
	else
	{
		i++;
		cift++;
	}
	if(i==size)
	{
		return tek;
	}
	oddRec(tut+1,size);
	
}

int main(int argc, char *argv[]) 
{
	int dizi[3]={21,12,33};
	
	printf("%d tane tek sayi vardir ",oddRec(&dizi,3));
	
	
	
	return 0;
}
