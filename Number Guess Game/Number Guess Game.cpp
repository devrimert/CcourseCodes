#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	srand(time(NULL));
    int randomnumber;
    int d;
    int i=0;
    
    randomnumber = rand() % 99;
    printf("Can you guess my number?\n");
    scanf("%d", &d);
    while(d!=randomnumber)
    {
    	if(d<randomnumber)
    	{
    		printf("No... Enter a higher number...\n");
    		scanf("%d", &d);
			i++;
		}
		if(d>randomnumber)
    	{
    		printf("No... Enter a smaller number...\n");
    		scanf("%d", &d);
			i++;
		}
		if(d==randomnumber)
		{
			printf("Congrats! You find my number at %d times of try!", i+1);
		}
	}
    return 0;
}
