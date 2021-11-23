#include"function.h"
#include<string.h>
#include<ctype.h>

void mdisplay()
{
	int i,j,o;
	printf("================================================================================\n");
	printf("product number\t|product name\t|quantity\t|price\t\n");
	printf("================================================================================\n");
	for(o=0;o<ti;o++)
	{
		printf("%14d\t|%12s\t|%6d\t|%6d\n",customer[o].productno,customer[o].productname,customer[o].quantity,customer[o].price);
	}
}
