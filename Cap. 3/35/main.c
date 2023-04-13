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

int isSymmetric(int n, int m, int mat[150][150])
{
    int i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            if(mat[i][j] != mat[j][i]) return 0;
        }
    }
    return 1;
}


int main()
{
    int mat[150][150], numRows, numCols;
    readMat(&numRows, &numCols, mat);
    printMat(numRows, numCols, mat);

        if (isSymmetric(numRows, numCols, mat)) {
        printf("yeppa.\n");
    } else {
        printf("nop.\n");
    }
    return 0;
}
