#include "functions.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

void create()
{
	int i=0;
	FILE *fp,*fpq;
	fp=fopen("shop.txt","w");
	if(fp==NULL)
	{
		printf("ERROR\n");
		exit(0);
	}
	printf("enter the number of records\n");
	scanf("%d",&n);
	fpq=fopen("asd.txt","w");
	fprintf(fpq,"%d",n);
	fclose(fpq);
	while(i<n)
	{
		printf("enter the product code\n");
		scanf("%d",&it.productno);
		printf("enter the name\n");
		scanf("%s",it.productname);
		printf("enter the quantity\n");
		scanf("%d",&it.quantity);
		printf("enter the price\n");
		scanf("%d",&it.price);
        printf("enter the discount in %");
        scanf("%f",&it.discount);
		i++;
		fprintf(fp,"%d\t%s\t%d\t%d\t",it.productno,it.productname,it.quantity,it. price,it.discount);
	}
	//fprintf(fp,"%d",0);
	fclose(fp);
	printf("\n records are being created so please come back again\n");
//	exit(0);