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
		customer[o].amount=0;
		customer[o].amount=(cst[o].quantity)*(customer[o].price);
		gt=gt+customer[o].amount;		
	}
	for(j=0;j<ti;j++)
	{
		printf("%6d\t       |%9s   \t  | %3d\t|%3d\t        |   %3d\n",customer[j].productno,customer[j].productname,customer[j].price,customer[j].quantity,customer[j].amount);
	}
	printf("\n amount payable is %f",gt);
	printf("thank you for shopping\ncome again\n");
	exit(0);
}
