#include <stdio.h>
int main()
 {
   int row,col,i,j;
   int a[10][10], transpose[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("\nEnter the matrix elements:\n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nGiven matrix is: \n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j) 
        {
            printf("%d  ", a[i][j]);
            if (j == col - 1)
                printf("\n");
        }
        
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
         {
            transpose[j][i] = a[i][j];
        }

    printf("\nTranspose of the matrix is:\n");
    for (i = 0; i < col; ++i)
        for (j = 0; j < row; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == row - 1)
                printf("\n");
        }
    return 0;
}
