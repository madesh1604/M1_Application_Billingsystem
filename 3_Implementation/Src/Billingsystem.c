#include <functions.h>
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
}
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
fscanf(fp,"%d",&it.productno);
fscanf(fp,"%s",it.productname);
fscanf(fp,"%d",&it.quantity);
fscanf(fp,"%d",&it.price);
fscanf(fp,"%f",&it.discount);
if(it.productno==na)
{
	ln++;
	if(ln==2)
	break;
	printf("enter the quantity\n");
	scanf("%d",&a);
	if(a<=it.quantity)
	{
		cst[ti].productno=it.productno;
		strcpy(cst[ti].productname,it.productname);
		cst[ti].quantity=a;
		cst[ti].price=it.price;
		it.quantity=it.quantity-a;
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
    fprintf(fptr,"%d\t",it.productno);
    fprintf(fptr,"%s\t",it.productname);
    fprintf(fptr,"%d\t",it.quantity);
    fprintf(fptr,"%d\t",it.price);
	continue;
}
fprintf(fptr,"%d\t",it.productno);
fprintf(fptr,"%s\t",it.productname);
fprintf(fptr,"%d\t",it.quantity);
fprintf(fptr,"%d\t",it.price);
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
		fscanf(fp,"%d",&it.productno);
		if(it.productno==0)
		{
		printf("product number cannot be zero\n");
		break;
		}
		fscanf(fp,"%s",it.productname);
		fscanf(fp,"%d",&it.quantity);
		fscanf(fp,"%d",&it.price);
		printf("\n\t  %14d|\t%8s|\t%8d|\t%d|\n",it.productno,it.productname,it.quantity,it.price);		
	}
	fclose(fp);
}
////functin section*******************	
void edit()
{
    FILE *fp,*fptr,*fpk;
	int h,found=0,ka=0,z,p;
	fp=fopen("shop.txt","r");
	fptr=fopen("temp1.txt","w");
	fpk=fopen("temp2.txt","w");
	printf("enter the product number to delete\n");
	scanf("%d",&h);
	p=n;
	while(!(ka==p))
	{
		ka++;
		fscanf(fp,"%d",&it.productno);
		if(it.productno==h)
		{
			found=1;
			fscanf(fp,"%s",it.productname);
			fscanf(fp,"%d",&it.quantity);
			fscanf(fp,"%d",&it.price);
			n--;
			printf("product has been sucessfully deleted\n");
		}
		else
		{ 
			fscanf(fp,"%s",it.productname);
			fscanf(fp,"%d",&it.quantity);
			fscanf(fp,"%d",&it.price);
			fprintf(fptr,"%d\t%s\t%d\t%d\t",it.productno,it.productname,it.quantity,it.price);
		}
	}
	    fprintf(fpk,"%d",n);
	    fclose(fpk);
		fclose(fptr);
		fclose(fp);
		if(found==0)
		printf("\n product not found\n");
		remove("asd.txt");
		rename("temp2.txt","asd.txt");
		remove("shop.txt");
		rename("temp1.txt","shop.txt");
	}

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
void mdelete()
{
	int i,j,f,g=0,aj=0,ag=0;
	char ab[100];
	FILE *fw,*fq;
	printf("enter the product number to be deleted\n");
	scanf("%d",&f);
	for(i=0;i<ti;i++)
	{
	  if(cst[i].productno==f)
	  {aj=cst[i].quantity;
	  printf("\nproduct deleted successfully\n");} 
	  continue;
	  cstr[g].productno=cst[i].productno;
	  strcpy(cstr[g].productname,cst[i].productname);
	  cstr[g].quantity=cst[i].quantity; 
	  cstr[g].price=cst[i].price;
	  g++;
	}
	for(j=0;j<g;j++)
	{
	 cst[j].productno=cstr[j].productno;
 	 strcpy(cst[j].productname,cstr[j].productname);
	  cst[j].quantity=cstr[j].quantity; 
	  cst[j].price=cstr[j].price;
	}
	ti=g;
	printf("\n%d",aj);
	fq=fopen("shop.txt","r");
	fw=fopen("temp4.txt","w");
	for(j=0;j<n;j++)
	{
		    fscanf(fq,"%d",&it.productno);
		    fscanf(fq,"%s",it.productname);
			fscanf(fq,"%d",&it.quantity);
			fscanf(fq,"%d",&it.price);
			if(it.productno==f)
			{ag=aj+it.quantity;
			fprintf(fw,"%d\t%s\t%d\t%d\t",it.productno,it.productname,ag,it.price);}
            else
			fprintf(fw,"%d\t%s\t%d\t%d\t",it.productno,it.productname,it.quantity,it.price);	
			
	}
	fclose(fq);
    fclose(fw);
    remove("shop.txt");
    rename("temp4.txt","shop.txt");
}
void mdisplay()
{
	int i,j,o;
	printf("================================================================================\n");
	printf("product number\t|product name\t|quantity\t|price\t\n");
	printf("================================================================================\n");
	for(o=0;o<ti;o++)
	{
		printf("%14d\t|%12s\t|%6d\t|%6d\n",cst[o].productno,cst[o].productname,cst[o].quantity,cst[o].price);
	}
}
