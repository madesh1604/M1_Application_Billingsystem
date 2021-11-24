#ifndef __BILLING_OPERATIONS_H__
#define __BILLING_OPERATIONS_H__

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
#include "Billingsytem.h"
#include "conio.h"



void create_items(int productno, char productname ,int quantity ,float price)
void bill_items();
void edit_items (int productno, char productname ,int quantity ,float price);
void display_items();
void invoice_items();
void menudelete_items();
void menudisplay_items();


#endif  /* #define __BILL_OPERATIONS_H__ */
