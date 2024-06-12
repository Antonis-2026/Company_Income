#include <stdio.h>					//BIBLIOTHIKES
#include <stdlib.h>

#define N 10					//STATHERES GIA TOYS PINAKES
#define M 31

void read_names(char A[][M]);						//DHLWSH SYNARTHSEWN VOID
void read_plithos(int B[] ,char A[][M]);
void read_esoda(float C[], char A[][M]);
void ektyposi(char A[][M],int B[],float C[]);
void search(char A[][M],int B[]);
void search2(char A[][M],float C[]);

int main(){									//ARXH BASIKOY PROGRAMMATOS
int plithos[N];
float esoda[N];									
char etairies[N][M]; 			 			//DHLWSH PINAKWN INT FLOAT KAI STRING

read_names(etairies);						//KLHSH TWN ANTISTOIXWN SYNARTHSEWN

read_plithos(plithos,etairies);				

read_esoda(esoda,etairies);

ektyposi(etairies,plithos,esoda);

search(etairies,plithos);

search2(etairies,esoda);


return 0;	
}											//TELOS BASIKOY PROGRAMMATOS

void read_names(char A[][M])	//ORISMOS SYNARTHSHS READ_NAMES OPOY THA DIAVAZEI KAI THA APOTHIKEYEI TA ONOMATA TWN ETAIREIWN
{
	int j=0;
	for(j=0;j<N;j++)
	{
		do
		{
			printf("DWSE TO ONOMA THS ETAIREIAS %d \n",j+1);
			gets(A[j]);	
			if((A[j][0]>= 00 && A[j][0]<=64)||(A[j][0]>=91 && A[j][0]<=96)||(A[j][0]>=123))
			{
				
				printf(" !!ERROR!! TO ONOMA THS ETAIREIAS PREPEI NA JEKINAEI ME GRAMMA PROSPATHISE JANA \n");
			}

		}
		while((A[j][0]>= 00 && A[j][0]<=64)||(A[j][0]>=91 && A[j][0]<=96)||(A[j][0]>=123));
	}
} 

void read_plithos(int B[],char A[][M])		//ORISMOS SYNARTHSHS READ_PLITHOS OPOY THA DIAVAZEI KAI THA APOTIKEYEI TO PLITHOS TWN YPALLHLWN THS KATHE ETAIREIAS
{
	int i=0,j=0;
	for(i=0;i<N;i++)
	{
		do
		{
			printf("DWSE TO PLITHOS TWN YPALLHLWN THS ETAIREIAS %s \n",A[i]);
			scanf(" %d",&B[i]);
			if(B[i]<=0)
				printf(" !! ERROR !! DWSE THETIKH TIMH \n");
		}
		while(B[i]<=0);
	}
	
}


void read_esoda(float C[], char A[][M])		//ORISMOS SYNARTHSHS  READ_ESODA OPOY THA DIAVAZEI KAI THA APOTHIKEYEI TA ESODA THS KATHE ETAIREIAS
{
	int i=0,j=0;
	for(j=0;j<N;j++)
	{
		printf("DWSE TA ESODA TOY 2021 THS ETAIREIAS %s \n ",A[j]);
		scanf(" %f", &C[j]);
	}
}

void ektyposi(char A[][M],int B[],float C[])	//ORISMOS SYNARTHSHS EKTYPOSI OPOY THA TYPWNEI OLA TA STOIXEIA TWN ETAIREIWN
{
	int i=0;

	for(i=0;i<N;i++)
		printf(" \n H ETAIREIA %s EXEI %d YPALLHLOYS KAI TA ESODA THS TO 2021 HTAN %.3f \n ",A[i],B[i],C[i]);		
}
void search(char A[][M],int B[]) //ORISMOS SYNARTHSHS SEARCH OPOY PSAXNEI POIA ETAIREIA EXEI TOYS PERISSOTEROYS YPALLHLOYS KAI TYPWNEI TO APOTELESSMA
{
	int j=0;
	int flag=0,max=0;
	for(j=0;j<N;j++)
	{
		if( B[j] > max)
		{
			max = B[j];
			flag = j;
		}
	}
	printf(" \n H ETAIREIA ME TOYS PERISSOTEROYS YPALLHLOYS EINAI H %s KAI OI YPALHLOI EINAI %d \n",A[flag],max);
}
void search2(char A[][M],float C[]) //ORISMOS SYNARTHSHS SEARCH2 OPOY PSAXNEI POIA ETAIREIA EXEI TA PERISSOTERA ESODA KAI TYPWNEI TO APOTELESMA
{
	int j=0;
	int flag=0;
	float max=0;
	for(j=0;j<N;j++)
	{
		if( C[j] > max)
		{
			max = C[j];
			flag = j;
		}
	}
	printf(" \n H ETAIREIA ME TA PERISSOTERA ESODA EINAI H %s KAI TA ESODA TOY 2021 EINAI %.3f \n",A[flag],max);
}
