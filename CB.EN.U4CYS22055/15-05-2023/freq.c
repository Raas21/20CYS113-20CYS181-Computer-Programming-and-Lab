#include <stdio.h>
int main()
{
    int row, col,flag;
    flag = 0;
    scanf("%d\n%d", &row, &col);
    int matrix[row][col];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("\n%d", &matrix[i][j]);
        }
    }
    for (int i =0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            if (matrix[i][j]>10)
            {
                printf("Error in input element");
                flag = 1;
                break;
            }
           
        }
    }
    int frequency[10] = {0};
    if (flag == 0){
         

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      frequency[matrix[i][j]]++;
    }
  }

  for (int i = 0; i < 10; i++) {
    if (frequency[i] > 0) {
      printf("The frequency of element %d is %d\n", i, frequency[i]);
    }
  }
    return 0;
}
}
