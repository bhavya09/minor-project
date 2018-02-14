#include<stdio.h>
# define bool int
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(&a[j],&a[j+1]);
		}
	}

bool hasarray(int a[],int n,int sum)
{
	int l,r;
	sort(a,n);
	
		l=0;
		r=n-1;
		while(l<r)
		{
			if(a[l]+a[r]==sum)
			return 1;
			else if(a[l]+a[r]<sum)
			l++;
			else
			r--;
		}
	
}
	
int main()
{
	int a[]={1,4,45,6,10,-8};
	int x=15;
	if(hasarray(a,6,x))
	printf("array has two elements with sum 16");
	else
	printf("array doesn't have two elements with sum 16");
	return 0;
}
