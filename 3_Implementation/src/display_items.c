#include"function.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

void display()
{
	int nk=0;
    FILE *fp;
	fp=fopen("shop.txt","r");	
	if(feof(fp))
	{
		printf("error in opening file\n");
		exit(0);
	}
	printf("================================================================================\n");
	printf("\t|product number\t|product name\t|quantity\t|price\t|\n");
	printf("=================================================================================\n");
	while(nk!=n)
	{
		nk++;
		fscanf(fp,"%d",&it.productno);
		if(it.productno==0)
		{
		printf("product number cannot be zero\n");
		break;
		}
		fscanf(fp,"%s",it.productname);
		fscanf(fp,"%d",&it.quantity);
		fscanf(fp,"%d",&it.price);
		printf("\n\t  %14d|\t%8s|\t%8d|\t%d|\n",it.productno,it.productname,it.quantity,it.price);		
	}
	fclose(fp);
}