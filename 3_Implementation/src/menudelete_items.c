#include"function.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


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
		    scanf(fq,"%s",&it.productname);
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
