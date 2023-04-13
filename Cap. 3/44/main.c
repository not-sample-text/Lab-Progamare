#include <stdio.h>
#include <stdlib.h>

void readMat(int *n, int *m, int mat[150][150])
{
    int i, j;

    printf("Introduceti numarul de randuri: ");
    scanf("%d", n);

    printf("Introduceti numarul de coloane: ");
    scanf("%d", m);

    for(i = 0; i < *n; ++i)
    {
        for(j = 0; j < *m; ++j)
        {
            printf("Introduceti elementul [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int n, int m, int mat[150][150])
{
    int i, j;

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("\t( ");
        for(j = 0; j < m; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf(")\n");
    }
    printf("\n");
}

void reverseMat(int n, int m, int mat[150][150])
{
    int i, j, temp;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m/2; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[i][m-j-1];
            mat[i][m-j-1] = temp;
        }
    }
}

int main()
{
    int mat[150][150], numRows, numCols;

    readMat(&numRows, &numCols, mat);

    printf("Matricea initiala este:\n");
    printMat(numRows, numCols, mat);

    reverseMat(numRows, numCols, mat);

    printf("Matricea oglindita pe orizontala este:\n");
    printMat(numRows, numCols, mat);

    return 0;
}
