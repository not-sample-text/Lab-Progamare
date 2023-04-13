#include <stdio.h>
#include <stdlib.h>

void readMat(int *n, int *m, int mat[150][150])
{
    int i, j;

    printf("Introdu numarul de randuri: ");
    scanf("%d", n);

    printf("Introdu numarul de coloane: ");
    scanf("%d", m);

    for(i = 1; i <= *n; ++i)
    {
        for(j = 1; j <= *m; ++j)
        {
            printf("Introdu elementul %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int n, int m, int mat[150][150])
{
    int i, j;

    printf("\n");
    for(i = 1 ; i <= n; i++)
    {
        printf("\t( ");
        for(j = 1; j <= m ; j++)
        {
            printf(" %3d ", mat[i][j]);
        }
        printf(" )\n");
    }
    printf("\n");
}

void subMat(int n, int m, int mat1[150][150], int mat2[150][150], int res[150][150])
{
    int i, j;

    for(i = 1 ; i <= n; i++)
    {
        for(j = 1; j <= m ; j++)
        {
            res[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main()
{
    int mat1[150][150], mat2[150][150], res[150][150];
    int numRows1, numCols1, numRows2, numCols2;

    printf("Introdu dimensiunile primei matrice:\n");
    readMat(&numRows1, &numCols1, mat1);
    printf("Introdu dimensiunile celei de-a doua matrice:\n");
    readMat(&numRows2, &numCols2, mat2);

    if(numRows1 != numRows2 || numCols1 != numCols2)
    {
        printf("Matricele trebuie sa aiba aceeasi dimensiune!\n");
        return 0;
    }

    subMat(numRows1, numCols1, mat1, mat2, res);

    printf("Matricea rezultat:\n");
    printMat(numRows1, numCols1, res);

    return 0;
}
