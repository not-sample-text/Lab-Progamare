#include <stdio.h>
#include <stdlib.h>

void readMat(int *n, int *m, int mat[150][150])
{
    int i, j;

    printf("baga cate randuri: ");
    scanf("%d", n);

    printf("baga cate coloane: ");
    scanf("%d", m);

    for(i = 1; i <= *n; ++i)
    {
        for(j = 1; j <= *m; ++j)
        {
            printf("baga nr %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int n, int m, int mat[150][150])
{
    int i, j;

    for(i = 1 ; i <= n; i++)
    {
        printf("\t( ");
        for(j = 1; j <= m ; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf(" )\n");
    }
}

void countEven(int n, int m, int mat[150][150], int *evenRows, int *evenCols)
{
    int i, j;

    *evenRows = 0;
    *evenCols = 0;

    for (i = 1; i <= n; ++i)
    {
        int rowHasEven = 0;
        for (j = 1; j <= m; ++j)
        {
            if (mat[i][j] % 2 == 0)
            {
                rowHasEven = 1;
                break;
            }
        }
        if (rowHasEven)
        {
            (*evenRows)++;
        }
    }

    for (j = 1; j <= m; ++j)
    {
        int colHasEven = 0;
        for (i = 1; i <= n; ++i)
        {
            if (mat[i][j] % 2 == 0)
            {
                colHasEven = 1;
                break;
            }
        }
        if (colHasEven)
        {
            (*evenCols)++;
        }
    }
}

int main()
{
    int mat[150][150], numRows, numCols, evenRows, evenCols;

    readMat(&numRows, &numCols, mat);
    printMat(numRows, numCols, mat);
    countEven(numRows, numCols, mat, &evenRows, &evenCols);

    printf("Numarul de linii cu elemente pare: %d\n", evenRows);
    printf("Numarul de coloane cu elemente pare: %d\n", evenCols);

    return 0;
}
