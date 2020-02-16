#include<stdio.h>

void main(){
int n=5,sum=18;
int a[5]={1,2,4,5,9};
int i,sub_sum;
for (int p=0;p<(1<<n);p++)
{
sub_sum=0;
for(i=0;i<n;i++)
{
if(p&(1<<i))
	{
		sub_sum=sub_sum+a[i];
		
	}
}
if(sub_sum==sum)
{
printf("yes");
//printf("%d",a[i]);
}
}
}
