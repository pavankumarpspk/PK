#include <stdio.h>
int main()
{
	int n=5,k=2;
	int a[5]={2,4,5,6,7};
	int sum=0,i;
	for(i=0;i<k;i++)
	{
      sum=sum+a[i];
	}
	printf("The sum of k integers is %d:",sum);
}
