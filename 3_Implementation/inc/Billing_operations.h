#ifndef __BILLING_OPERATIONS_H__
#define __BILLING_OPERATIONS_H__

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
#include "billingsytem_.h"
#include "conio.h"



void create(int productno, char productname ,int quantity ,float price)
void bill();
void edit (int productno, char productname ,int quantity ,float price);
void display();
void invoice_items();
void menudelete_items();
void menudisplay_items();


#endif  /* #define __BILL_OPERATIONS_H__ */
