#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int num,i,j;
	printf("Please enter number");
	scanf("%d", &num);
	
	printf("Your tree \n");
	num=num+1;
	for(j=1;j<num;j++)
	{
		
		if(j%2==0)
		{
			for(i=0; i<j; i++)
			{
				printf("*");
			}
			printf("%d \n", j);
		}
		else
		{
			printf("%d", j);
			for(i=0; i<j; i++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
   getch();
}

