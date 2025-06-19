#include<stdio.h>
#include<conio.h>
int main()
{
	int rnoo,s1,s2,s3,total;
	double per;
	char sname[50];
	printf("\nEnter student name :");
	gets(sname);
		printf("\nEnter the student rollnumber;");
		scanf("%d", &rnoo);
		printf("\nEnter markes of sub 1 :");
		scanf("\%d",&s1);
		printf("\%nEnter markes of sub 2 :");
		scanf("\%d",&s2);
		printf("\nEnter markes of sub 3 :");
		scanf("\%d",&s3);
		total= s1+s2+s3;
		per=total/3;
		printf("\nStudent name :%s",sname);
		printf("\nRnoo :%d",rnoo);
		printf("\ntotal :%d",total);
		printf("\nPercentage :%f",per);
		if (per>=70)
		{
			printf("\nDistiction");
		}
else if(per>=50) 
{ printf("\nFIRST");
	
}
else if(per>=40);
{
	printf( "\nPASS");
		}
	else  
	{
			printf("\nFail");
		}		
		getch();
						
}
