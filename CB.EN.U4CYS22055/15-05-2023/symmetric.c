#include <stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
  	int matrix[n][n];
  	for (int i = 0; i < n; i++) 
  	{
  		for (int j = 0; j<n; j++)
  		{
    			scanf("%d", &matrix[i][j]);
    		}
    		
    	}

	int isSymmetric = 1;
  	for (int i = 0; i < n / 2; i++) 
  	{
    		for (int j = 0; j < n; j++) 
    		{
      			if (matrix[i][j] != matrix[n - 1 - i][j]) 
      			{
        			isSymmetric = 0;
        			break;
      			}
    		}
    		if (isSymmetric == 0) 
    		{
      			break;
    		}
  	}

  
  	if (isSymmetric == 1) 
  	{
    		for (int i = 0; i < n; i++) 
    		{
     	 		for (int j = 0; j < n / 2; j++) 
     	 		{
        			if (matrix[i][j] != matrix[i][n - 1 - j]) 
        			{
          				isSymmetric = 0;
          				break;
        			}
      			}
      			if (isSymmetric == 0) 
      			{
        			break;
      			}
    		}
  	}

	if (isSymmetric == 1) 
	{
    		printf("YES");
 	} 
 	else 
 	{
    	printf("NO");
  	}

  return 0;
}

