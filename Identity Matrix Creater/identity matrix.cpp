#include <stdio.h>
#include <conio.h>
int main()
{
	int ar1[100][100],n,i,num,j;
	
	printf("Enter value of columns and rows");
	scanf("%d", &n);
	
	printf("Enter a number you want to see in your Identity Matrix.");
	scanf("%d", &num);
	
	printf("Identity matrix is - \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				ar1[i][j]=num;
				printf("%d", ar1[i][j]);
			}
			else
			{ar1[i][j]=0;
			printf("%d", ar1[i][j]);
			}
		}
		printf("\n");
	}
	getch();
}
