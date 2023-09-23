#include<stdio.h>
int mult();
int addt();
int trans();
void exit();
int main()
{
	int n;
	printf("\n1.Matrix Multiplication\n2.Matrix Addition\n3.Matrix transposition\n4.Exit the program\nEnter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1: mult();
		case 2:addt();
		case 3:trans();
		case 4:exit();
	}
}
	//Multiplication of Matrices
	int mult()
	{
		int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
		printf("Enter the number of rows and columns of matrix: ");
	    scanf("%d%d", &r,&c);   
		printf("Enter the first matrix element:");    
		for(i=0;i<r;i++)    
		{    
			for(j=0;j<c;j++)    
			{    
			scanf("%d",&a[i][j]);    
			}    
		}    
		printf("Enter the second matrix element:");    
		for(i=0;i<r;i++)    
		{    
			for(j=0;j<c;j++)    
			{    
			scanf("%d",&b[i][j]);    
			}    
		}    
		printf("Multiplication of the matrices:\n");    
		for(i=0;i<r;i++)    
		{    
			for(j=0;j<c;j++)    
			{    
			  mul[i][j]=0;    
				for(k=0;k<c;k++)    
				{    
				mul[i][j]+=a[i][k]*b[k][j];    
				}    
			}    
		}    
		for(i=0;i<r;i++)    
		{    
			for(j=0;j<c;j++)    
			{    
			printf("%d\t",mul[i][j]);    
			}    
			printf("\n");    
		}
		return main();    
	}
		//Addition of Matrices
		int addt()
		{
			int r, c, a[100][100], b[100][100], sum[100][100], i, j;
		    printf("Enter the number of rows and columns of matrix: ");
		    scanf("%d%d", &r,&c);
		    printf("Enter elements of 1st matrix:");
		    for (i = 0; i < r; ++i)
		        for (j = 0; j < c; ++j)
				 {
		            scanf("%d", &a[i][j]);
		        }
		    printf("Enter elements of 2nd matrix:");
		    for (i = 0; i < r; ++i)
		        for (j = 0; j < c; ++j) 
				{
		            scanf("%d", &b[i][j]);
		        }
		    for (i = 0; i < r; ++i)
		        for (j = 0; j < c; ++j) 
				{
		            sum[i][j] = a[i][j] + b[i][j];
		        }
		    printf("Sum of two matrices:\n");
		    for (i = 0; i < r; ++i)
		        for (j = 0; j < c; ++j) 
				{
		            printf("%d   ", sum[i][j]);
		            if (j == c - 1) {
		                printf("\n\n");
		            }
		        }
		        return main();    
		}
		//Transpose of Matrix
		int trans()
		{
			int j, r, c, i, matrix[10][10], transpose[10][10];
		  printf("Enter the number of rows and columns of a matrix:");
		  scanf("%d%d", &r, &c);
		  printf("Enter elements of the matrix:");
		  for (i = 0; i < r; i++)
		    for (j = 0; j < c; j++)
		      {
		      	scanf("%d", &matrix[i][j]);
			  }
		  for (i = 0; i < r; i++)
		    for (j = 0; j < c; j++)
		     {
		     	 transpose[j][i] = matrix[i][j];
			 }
		  printf("Transpose of the matrix:\n");
		  for (i = 0; i < r; i++)
		   {
		    for (j = 0; j < c; j++)
		      printf("%d\t", transpose[i][j]);
		    printf("\n");
		   }
			return main();    
		}
		//Exit the program
		void exit()
		{
			exit();
		}
