#include<stdio.h>

// https://ide.geeksforgeeks.org/ja33GnlnQF

void check(int n)
{
	n++;
	int c=0;
	int i=2;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c==0)
	{
		printf("%d",n);
	}
	else
	{
	return check(n);
	}
};
int main()
	{
	int num;
	printf("enter no. to check");
	scanf("%d",&num);
	if(num>0 && num!=0 && num!=1)
	{
		check(num);
	}
	else if(num==0 || num==1)
	{
		printf("enter valid number");
	}
	else
	{
		printf("enter positive number");
	}
	
}
