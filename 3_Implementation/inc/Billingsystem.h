#ifndef  __BILLINGSYSTEM_H
#define  __BILLINGSYSTEM_H_
#include<math.h>

typedef struct item
{
	int productno;
	char productname[10];
	int quantity;
	int price;
    float discount;
}item;
 typedef struct customer
{
	int productno;
	char productname[10];
	int quantity;
	int price;
	int amount;
}customer[100];
typedef struct temporory
{
	int productno;
	char productname[10];
	int quantity;
	int price;
	int amount;
    float discount;
}cstr[100];


#endif
