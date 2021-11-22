#include"function.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

void invoice()
{
	int i,j,o;
	float amt,gt=0;
	if(ti==0)
	
	{printf("no products in your cart\n");
	exit(0);}
	printf("\n\n********************INVOICE**********************\n");
	printf("================================================================================\n");
	printf("product number\t| product name\t| price\t| quantity\t| amount\t|\n");
	printf("================================================================================\n");
	for(o=0;o<ti;o++)
	{
		cst[o].amount=0;
		cst[o].amount=(cst[o].quantity)*(cst[o].price);
		gt=gt+cst[o].amount;		
	}
	for(j=0;j<ti;j++)
	{
		printf("%6d\t       |%9s   \t  | %3d\t|%3d\t        |   %3d\n",cst[j].productno,cst[j].productname,cst[j].price,cst[j].quantity,cst[j].amount);
	}
	printf("\n amount payable is %f",gt);
	printf("thank you for shopping\ncome again\n");
	exit(0);
}