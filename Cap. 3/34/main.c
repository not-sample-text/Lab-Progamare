#include <stdio.h>
#include <stdlib.h>

void printMat(int i, int j, int n, int m, int mat[150][150])
{
    for(i = 1 ; i <= n; ++i)
    {
        printf("\t( ");
        for(j = 1; j <= m ; ++j)
        {
            printf(" %d ", mat[i][j]);
        }
        printf(" )\n");
    }

}

int main()
{
    int mat[150][150], row, col, sum = 0, prod = 1, numRows, numCols;
    printf("baga cate randuri: ");
    scanf("%d", &numRows);

    printf("baga cate coloane: ");
    scanf("%d", &numCols);

    for(row = 1; row <= numRows; ++row)
    {
        for(col = 1; col <= numCols; ++col)
        {
            printf("baga nr %d %d: ", row, col);
            scanf("%d", &mat[row][col]);

            sum += mat[row][col];
            prod *= mat[row][col];
        }
    }


    printf("Suma tuturor elementelor din matrice: %d\n", sum);
    printf("Produsul tuturor elementelor din matrice: %d\n", prod);
    printMat(row, col, numRows, numCols, mat);

    return 0;
}
