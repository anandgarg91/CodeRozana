#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void estimate_pi(int n)
{
int p_in_circle=0;
int p_in_square=0;
//int RAND_MAX=32767;
for(int i=0;i<n;i++){
 double x = (double)rand()/(double)RAND_MAX;
 double y = (double)rand()/(double)RAND_MAX; 
 //printf("%lf--->>",x);
//printf("%lf--->>>",y);
 if (x*x+y*y < 1)
	p_in_circle++;
  else 
	p_in_square++;
}
//printf("%d---",p_in_circle);
//printf("%d---->",p_in_square);
p_in_square=p_in_circle + p_in_square;
double t=  4*((double)p_in_circle/(double)p_in_square);
//double t=  4*(double)(p_in_circle/p_in_square);
printf("%lf",t);
}


void main()
{
int n;
printf("enter number");
scanf("%d",&n);
estimate_pi(n);
}




