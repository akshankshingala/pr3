#include<stdio.h>
#include<conio.h>


void main()
{
	int n;
	int f,l sum;
	clrscr();
	printf("enter any number :");
	scanf("%d",n);
		l=n%10;
		
	while(n>=0){
		n=n/10;
		printf("%d\n",n);
		
	    }
	    f=n;
	    sum=f+l;
	    printf("sum%d",sum);
	    getch();
	}
