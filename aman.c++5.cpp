#include<stdio.h>
#include<conio.h>
int main()
 {
 	int a,b,c;

 	printf("\nenter the value if a, b& c:");
 	scanf("%d %d %d",&a,&b,&c);
 	if(a>b)
 	{
 		if(a>c)
 		{
 			printf("\nA is the max number");
 			
		 }
		 else{
		 	printf("\nC is the max number");
		 	
		 }
	 }
	 else {
	 	if (b>c)
	 	{
	 		printf("\nB is max");
	 		
		 }
		 else {
		 	printf("\nc is max num");
		 }
		
	 }
	 
 	getch();
 }
