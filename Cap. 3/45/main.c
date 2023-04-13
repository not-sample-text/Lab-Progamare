#include <stdio.h>

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
            printf("Introduceti elementul %d %d: ", i+1, j+1);
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

void addMat(int n, int m, int mat1[150][150], int mat2[150][150], int result[150][150])
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main()
{
    int mat1[150][150], mat2[150][150], result[150][150];
    int numRows, numCols;

    printf("Introduceti prima matrice:\n");
    readMat(&numRows, &numCols, mat1);
    printf("Introduceti a doua matrice:\n");
    readMat(&numRows, &numCols, mat2);

    addMat(numRows, numCols, mat1, mat2, result);

    printf("Rezultatul adunarii celor doua matrice este:\n");
    printMat(numRows, numCols, result);

    return 0;
}
