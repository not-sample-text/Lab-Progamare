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

void transpose(int mat[150][150], int n, int m)
{
    int i, j, temp;

    for(i = 1; i <= n; ++i)
    {
        for(j = i; j <= m; ++j)
        {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
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


int sumLineOrColumn(int n, int m, int mat[150][150], int option, int index)
{
    int sum = 0;
    int i;

    if(option == 1) // suma pe linie
    {
        for(i = 1; i <= m; i++)
        {
            sum += mat[index][i];
        }
    }
    else if(option == 2) // suma pe coloana
    {
        for(i = 1; i <= n; i++)
        {
            sum += mat[i][index];
        }
    }

    return sum;
}

int main()
{
    int mat[150][150], numRows, numCols, option, index;

    readMat(&numRows, &numCols, mat);
    printMat(numRows, numCols, mat);

    printf("Introdu optiunea (1 pentru suma de pe linie, 2 pentru suma de pe coloana): ");
    scanf("%d", &option);

    printf("Introdu indexul: ");
    scanf("%d", &index);

    if(option == 1)
    {
        printf("Suma elementelor de pe linia %d este %d\n", index, sumLineOrColumn(numRows, numCols, mat, option, index));
    }
    else if(option == 2)
    {
        printf("Suma elementelor de pe coloana %d este %d\n", index, sumLineOrColumn(numRows, numCols, mat, option, index));
    }
    else printf("Optiune gresita");

    return 0;
}
