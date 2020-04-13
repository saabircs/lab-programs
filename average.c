#include<stdio.h>
int main()
{
  float ar[50],avg,sum=0;
  int m,i;
  printf("Enter the number of numbers to be averaged:\n");
  scanf("%d",&m);
  printf("Enter the values\n");
  for(i=0;i<m;i++){
    scanf("%f",&ar[i]);
}
for(i=0;i<m;i++)
{
  sum+=ar[i];
}
avg=sum/m;
printf("\n Average of %d numbers is= %f\n",m,avg);
}
