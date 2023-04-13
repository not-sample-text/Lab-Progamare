#include <stdio.h>
#include <stdlib.h>

void readMat(int *n, int *m, int mat[150][150])
{
    int i, j;

    printf("baga cate randuri: ");
    scanf("%d", n);

    printf("baga cate coloane: ");
    scanf("%d", m);

    for(i = 0; i < *n; ++i)
    {
        for(j = 0; j < *m; ++j)
        {
            printf("baga nr %d %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int n, int m, int mat[150][150])
{
    int i, j;

    printf("\n");
    for(i = 0 ; i < n; i++)
    {
        printf("\t( ");
        for(j = 0; j < m ; j++)
        {
            printf(" %3d ", mat[i][j]);
        }
        printf(" )\n");
    }
    printf("\n");
}

void sumaDiagonalaSec(int n, int m, int mat[150][150])
{
    int i, j, sum = 0;

    printf("Secondary Diagonal: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(i + j == n - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    printf("suma este: %d", sum);
}

int main()
{
    int mat[150][150], numRows, numCols;

    readMat(&numRows, &numCols, mat);
    printMat(numRows, numCols, mat);
    sumaDiagonalaSec(numRows, numCols, mat);

    return 0;
}
