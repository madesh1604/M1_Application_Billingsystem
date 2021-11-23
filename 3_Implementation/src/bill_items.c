#include"function.h"
/////function 2***********
void bill()
{
int na,a,cont=0,k,r=0,w=0,ch,l=0,bi=0,ln=0;
//char k;
l3 : printf("enter the product number\n");
scanf("%d",&na);
FILE *fp,*fptr;
fp=fopen("shop.txt","r");
fptr=fopen("temp.txt","w");
while(!(feof(fp)))
{
	l++;
fscanf(fp,"%d",&item.productno);
scanf(fp,"%s",&item.productname);
fscanf(fp,"%d",&item.quantity);
fscanf(fp,"%d",&item.price);
fscanf(fp,"%f",&item.discount);
if(it.productno==na)
{
	ln++;
	if(ln==2)
	break;
	printf("enter the quantity\n");
	scanf("%d",&a);
	if(a<=it.quantity)
	{
		customer[ti].productno=item.productno;
		strcpy(customer[ti].productname,item.productname);
		customer[ti].quantity=a;
		customer[ti].price=item.price;
		item.quantity=item.quantity-a;
		ti++;
		//goto l1;	
	}
	else
	printf("out of stock\n");
	bi++;
	//goto l1;	
}
else
{
	cont++;
    fprintf(fptr,"%d\t",item.productno);
    fprintf(fptr,"%s\t",item.productname);
    fprintf(fptr,"%d\t",item.quantity);
    fprintf(fptr,"%d\t",item.price);
	continue;
}
fprintf(fptr,"%d\t",item.productno);
fprintf(fptr,"%s\t",item.productname);
fprintf(fptr,"%d\t",item.quantity);
fprintf(fptr,"%d\t",item.price);
}
if(l==cont)
printf("error\nchoose proprly\n");
fclose(fptr);
fclose(fp);
remove("shop.txt");
rename("temp.txt","shop.txt");
ln=0;
printf("do you want to shop more\npress 1 for yes\n");
scanf("%d",&k);
if(k==1)
goto l3;

}
