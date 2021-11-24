#include"billing_operations.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


void menudelete_items()
{
	int i,j,f,g=0,aj=0,ag=0;
	
	FILE *fw,*fq;
	printf("enter the product number to be deleted\n");
	scanf("%d",&f);
	for(i=0;i<ti;i++)
	{
	  if(customer[i].productno==f)
	  {aj=customer[i].quantity;
	  printf("\nproduct deleted successfully\n");} 
	  continue;
	  cstr[g].productno=customer[i].productno;
	  strcpy(cstr[g].productname,customer[i].productname);
	  cstr[g].quantity=customer[i].quantity; 
	  cstr[g].price=u[i].price;
	  g++;
          continue;
	}
	for(j=0;j<g;j++)
	{
	 customer[j].productno=cstr[j].productno;
 	 strcpy(customer[j].productname,cstr[j].productname);
	  customer[j].quantity=cstr[j].quantity; 
	  customer[j].price=cstr[j].price;
	}
	ti=g;
	printf("\n%d",aj);
	fq=fopen("shop.txt","r");
	fw=fopen("temp4.txt","w");
	for(j=0;j<n;j++)
	{
		    fscanf(fq,"%d",&item.productno);
		    scanf(fq,"%s",&item.productname);
			fscanf(fq,"%d",&item.quantity);
			fscanf(fq,"%d",&item.price);
			if(item.productno==f)
			{ag=aj+item.quantity;
			fprintf(fw,"%d\t%s\t%d\t%d\t",item.productno,item.productname,ag,item.price);}
            else
			fprintf(fw,"%d\t%s\t%d\t%d\t",item.productno,item.productname,item.quantity,item.price);	
			
	}
	fclose(fq);
    fclose(fw);
    remove("shop.txt");
    rename("temp4.txt","shop.txt");
}
