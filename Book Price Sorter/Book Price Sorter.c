#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
struct Books
{
       char  Title[50];
       char  Author[50];
       int  ISBN;
       int   Price;
};
typedef struct Books BK;
void ReadRecord(BK Array[], int subscript);
void PrintRecord(BK Array[], int subscript);
void SortStArray(BK StArray[], int Size);
void swap(BK *Array, int x, int y);
int main()
{
       BK BooksArray[1000];
       int i,N;
       printf("Enter N: ");
       scanf("%d", &N);
       for (i = 0; i < N; i++)ReadRecord(BooksArray, i);
       SortArray(BooksArray, N);
       for (i = 0; i < N; i++)PrintRecord(BooksArray, i);
       system("pause");
       return 0;
}
void ReadRecord(BK Array[], int subscript)
{
       printf("%s", "please enter Title: \n");
       scanf("%s", &Array[subscript].Title);
       printf("%s", "please enter Author: \n");
       scanf("%s", &Array[subscript].Author);
       printf("%s", "please enter ISBN: \n");
       scanf("%s", &Array[subscript].ISBN);
       printf("%s", "please enter Price\n");
       scanf("%d", &Array[subscript].Price);
}
void PrintRecord(BK Array[], int subscript)
{
       printf("%-14s %-40s   %-40d   %-40d  \n", Array[subscript].Title, Array[subscript].Author, Array[subscript].ISBN, Array[subscript].Price);
}
void SortStArray(BK StArray[], int Size)
{
 
       int i, j;
       for (j = Size; j>1; j--)
       {
             for (i = 0; i<j - 1; i++)
             {
                    if (StArray[i].Price>StArray[i + 1].Price)
                           swap(StArray, i, i + 1);
             }
       }
 
 
}
void swap(BK *Array, int x, int y)
{
       BK temp;
       temp = Array[x];
       Array[x] = Array[y];
       Array[y] = temp;
}

