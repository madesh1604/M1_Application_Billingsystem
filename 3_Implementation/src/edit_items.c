#include"function.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
	
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
		fscanf(fp,"%d",&item.productno);
		if(item.productno==h)
		{
			found=1;
			scanf(fp,"%s",&item.productname);
			fscanf(fp,"%d",&item.quantity);
			fscanf(fp,"%d",&item.price);
			n--;
			printf("product has been sucessfully deleted\n");
		}
		else
		{ 
			scanf(fp,"%s",&item.productname);
			fscanf(fp,"%d",&item.quantity);
			fscanf(fp,"%d",&item.price);
			fprintf(fptr,"%d\t%s\t%d\t%d\t",item.productno,item.productname,item.quantity,item.price);
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
