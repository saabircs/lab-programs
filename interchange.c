#include<stdio.h>
 int main()
  {
    int i,k,j,o;
    int large,small,m=0,n=0;
    int arr[100];
    printf("Enter the number of elements in the array:");
    scanf("%d",&o);
    for (i=0;i<o;i++)
    scanf("%d",&arr[i]);

      printf("Initial Array: ");
    for (i=0;i<o;i++)
      printf("%d\t",arr[i]);
      printf("\n");
      k=0;
      large=small=arr[0];
       for(j=0;j<o;j++)
       {
        if(arr[j]>large)
        {m=j;
        large=arr[j];
      }
        if(arr[j]<small)
        {
          n=j;
        small=arr[j];
      }
      }
        k=arr[m];
        arr[m]=arr[n];
        arr[n]=k;

    printf("The smallest number is '%d' and the largest number is '%d' \n",small,large);
    printf("The location of largest and smallest is interchanged to: ");
    for (i=0;i<o;i++)
      printf("%d\t",arr[i] );
  return 0;
}
