/*
*Algorithme afficher les nombres pairs entre 1 à n*
VARIABLES
	var i,n:entier
DEBUT
	AFFICHE("Entrez n:")
	LIRE n
	POUR(i<-2,i<=n,i+=2)
		AFFICHE(i)
	FIN POUR
FIN
*/
#include<stdio.h>
#include<math.h>
int entrez(int i);
void compter(int k);

int entrez(int i)
{
	printf("Entrez n : ");
	scanf("%d",&i);
	return i;
}

void compter(int k)
{
	int i;
	for(i=2;i<=k;i+=2)
	{
		printf("\t%d\n",i);
	}
}

int main()
{
	int i,n;
	n=entrez(n);
	compter(n);
	return 0;
}
