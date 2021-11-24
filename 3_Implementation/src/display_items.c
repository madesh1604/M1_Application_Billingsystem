#include"Billing_operations.h"
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
		fscanf(fp,"%d",&item.productno);
		if(item.productno==0)
		{
		printf("product number cannot be zero\n");
		break;
		}
		scanf(fp,"%s",&item.productname);
		fscanf(fp,"%d",&item.quantity);
		fscanf(fp,"%d",&item.price);
		printf("\n\t  %14d|\t%8s|\t%8d|\t%d|\n",item.productno,item.productname,item.quantity,item.price);		
	}
	fclose(fp);
}
