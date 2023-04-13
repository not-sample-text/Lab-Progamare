#include <stdio.h>
#include <stdlib.h>

void readMat(int *n, int *m, int mat[150][150])
{
    printf("Introduceti numarul de randuri: ");
    scanf("%d", n);

    printf("Introduceti numarul de coloane: ");
    scanf("%d", m);

    for (int i = 0; i < *n; ++i)
    {
        for (int j = 0; j < *m; ++j)
        {
            printf("Introduceti elementul [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int n, int m, int mat[150][150])
{
    printf("\n");

    for (int i = 0; i < n; ++i)
    {
        printf("\t( ");

        for (int j = 0; j < m; ++j)
        {
            printf("%3d ", mat[i][j]);
        }

        printf(" )\n");
    }

    printf("\n");
}

int matEqual(int n, int m, int mat1[150][150], int mat2[150][150])
{
    if (n != m)
    {
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (mat1[i][j] != mat2[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int mat1[150][150], mat2[150][150];
    int n1, m1, n2, m2;

    printf("Matricea 1:\n");
    readMat(&n1, &m1, mat1);
    printMat(n1, m1, mat1);

    printf("Matricea 2:\n");
    readMat(&n2, &m2, mat2);
    printMat(n2, m2, mat2);

    if (matEqual(n1, m1, mat1, mat2))
    {
        printf("Matricele sunt egale.\n");
    }
    else
    {
        printf("Matricele nu sunt egale.\n");
    }

    return 0;
}
