#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	
  char str[100];
  char sub[10];
  int a;
  int b=0;
  printf("how many character\n");
  scanf("%d", &a);
for(b=0;b<a;b++)
  {

  printf("Please enter first sentence:\n");
  
  scanf("%s", &str[b]);
  }
int x;
int y=0;  
printf("how many subchar?");
scanf("%d", &x);
for(y=0;y<x;y++)
{

  printf("please enter second sentence:");
  scanf("%s", &sub[y]);
}  
  int i, j=0, k;
  for(i=0; str[i]; i++)
  {
    if(str[i] == sub[j])
    {
      for(k=i, j=0; str[k] && sub[j]; j++, k++)
        if(str[k]!=sub[j])
            break;
       if(!sub[j]){
        printf("True");
        return 0;}
    }
  }
  printf("False");
 return 0;
}
