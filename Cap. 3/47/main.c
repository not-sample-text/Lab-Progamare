#include <stdio.h>

void readMat(int *n, int *m, int mat[150][150])
{
    printf("Introduceti numarul de randuri: ");
    scanf("%d", n);

    printf("Introduceti numarul de coloane: ");
    scanf("%d", m);

    for(int i = 1; i <= *n; ++i)
    {
        for(int j = 1; j <= *m; ++j)
        {
            printf("Introduceti elementul de pe randul %d si coloana %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int n, int m, int mat[150][150])
{
    printf("\n");
    for(int i = 1; i <= n; i++)
    {
        printf("\t( ");
        for(int j = 1; j <= m; j++)
        {
            printf(" %3d ", mat[i][j]);
        }
        printf(" )\n");
    }
    printf("\n");
}

void multiplyMat(int n1, int m1, int mat1[150][150], int n2, int m2, int mat2[150][150], int res[150][150])
{
    if(m1 != n2)
    {
        printf("Imposibil de inmultit matricile. Coloanele primei matrici trebuie sa fie egale cu randurile celei de-a doua matrici.\n");
        return;
    }

    for(int i = 1; i <= n1; i++)
    {
        for(int j = 1; j <= m2; j++)
        {
            res[i][j] = 0;
            for(int k = 1; k <= m1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int mat1[150][150], numRows1, numCols1;
    int mat2[150][150], numRows2, numCols2;
    int res[150][150];

    printf("Introduceti prima matrice:\n");
    readMat(&numRows1, &numCols1, mat1);
    printf("Matricea introdusa este:\n");
    printMat(numRows1, numCols1, mat1);

    printf("Introduceti a doua matrice:\n");
    readMat(&numRows2, &numCols2, mat2);
    printf("Matricea introdusa este:\n");
    printMat(numRows2, numCols2, mat2);

    multiplyMat(numRows1, numCols1, mat1, numRows2, numCols2, mat2, res);
    printf("Rezultatul inmultirii celor doua matrici este:\n");
    printMat(numRows1, numCols2, res);

    return 0;
}
