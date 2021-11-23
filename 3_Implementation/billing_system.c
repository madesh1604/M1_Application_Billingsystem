#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include <functions.h>
struct item
{
	int productno;
	char productname[10];
	int quantity;
	int price;
    float discount;
}item;
struct customer
{
	int productno;
	char productname[10];
	int quantity;
	int price;
	int amount;
}customer[100];
struct temporory
{
	int productno;
	char productname[10];
	int quantity;
	int price;
	int amount;
    float discount;
}cstr[100];
int t=0,n=0,k=0,ba=0,ti=0; 
int main()
{
	char ch,password[10],q[10]="SANKAR";
	int s=0,y=0,w=1,i;
	FILE *fpe;
	fpe=fopen("asd.txt","r");
	fscanf(fpe,"%d",&n);
	fclose(fpe);
	printf("\t********WELCOME TO THUGIL SHOPPING ZONE**************\n\n");
	printf("\t        YOU ARE LUCKY TO BE SHOPPING HERE\n");
	printf("\tplease note that all the products' price are discounted and are genuine\n\tso no bargain\n");
	printf("\treference number%d\n",n);
	q: printf("\n\n\t01. ADMINISTRATOR\n\t02. CUSTOMER\n\t03.BREAK\n");
	scanf("%d",&s);
	switch(s)
	{
	          case 1: printf("\tenter password\n\t");
              for(i=0;i<6;i++)
              {
              ch = getch();
              password[i] = ch;
              ch = '*' ;
               printf("%c",ch);
              }
              password[i]='\0';
              if(strcmp(password,q))
              { 
              printf("wrong password try again");
              goto q;
             }
               else
               goto l3;
               l3: printf("\n\tacess granted\n");
		       printf("\t01.CREATE\n\t02.DELETE/MODIFY\n\t03.DISPLAY\n\t04.MAIN MENUE\n");
		        scanf("%d",&y);
		        switch(y)
		        {
        			case 1:create();
        			      goto q;
  			      case 2:edit();
  			             goto q;
                  case 3:display();
                         goto q;
                  case 4: goto q;
                  default : printf("error\n");
				  goto q;       
        		}
		         break;
       case 2: printf("\t01.BILL\n\t02.INVOICE\n\t03.DISPLAY\n\t04.MY CART\n\t05.MAIN MENUE\n\t06. DELETE ITEMS IN CART\n");
              scanf("%d",&y);
              switch(y)
		        {
        			case 1:bill();
        			      goto q;
  			      case 2:invoice();
  			             goto q;
                  case 3:display();
                         goto q;
                  case 4: mdisplay();
                  goto q;
                  case 5: goto q;
                  case 6: mdelete();
                  goto q;
                  default : printf("error\n"); 
				  goto q;      
        		}
		         break;
      case 3: printf("breaking...\n");
      break;
       default : printf("error\n");
       break;       
    }
