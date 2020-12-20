 #include <stdio.h>
  #include <stdlib.h>
  int main() {
        int **mat, order, i , j;

        /* get the order of the matrix */
        printf("Enter the order of matrix:");
        scanf("%d", &order);

        /* dynamically allocate memory to store data  */
        mat = (int **)malloc(sizeof (int) * order);
        for (i = 0; i < order; i++)
                mat[i] = (int *)malloc(sizeof (int) * order);

        /* get the input matrix from user */
        printf("Enter your inputs:\n");
        for (i = 0; i < order; i++)
                for (j = 0; j < order; j++)
                        scanf("%d", &mat[i][j]);

        /* check for lower triangular matrix */
        for (i = 0; i < order; i++) {
                for (j = i + 1; j < order; j++) {
                        if (mat[i][j] != 0) {
                                printf("Not a lower triangular matrix\n");
                                exit(0);
                        }
                }
        }

        /* print the result */
        printf("Given matrix is a lower triangular matrix\n");
        return 0;
  }

