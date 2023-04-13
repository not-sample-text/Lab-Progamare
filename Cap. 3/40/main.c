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

void minMat(int n, int m, int mat[150][150]){
        int i, j, min = 10000, row = 0, col = 0;

    for(i = 1 ; i <= n; i++)
    {
        for(j = 1; j <= m ; j++)
        {
            if(mat[i][j] <= min){
              min = mat[i][j];
              row = i;
              col = j;
            }
        }
    }
    printf("numarul minim din matrice este %d, la pozitia [%d][%d]",  min, row, col);
}

int main()
{
    int mat[150][150], numRows, numCols;

    readMat(&numRows, &numCols, mat);
    printMat(numRows, numCols, mat);
    minMat(numRows, numCols, mat);

    return 0;
}
