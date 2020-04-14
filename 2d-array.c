#include<stdio.h>
int main()
{
  int i,j,highest;
  int marks[5][3];
  for(i=0;i<5;i++)
  { printf("enter the marks of student %d in 3 subjects\n",i+1);
    for(j=0;j<3;j++)
    scanf("%d",&marks[i][j]);

  }
  highest=marks[0][0];
  for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    {
      if(marks[j][i]>=highest)
      highest=marks[j][i];
    }
    printf("\n The highest marks in subject %d is marks= %d \n ",i+1,highest);
    highest=marks[0][i+1];
}
  }
