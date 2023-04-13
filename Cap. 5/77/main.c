#include <stdio.h>
#include <stdlib.h>

void sort_cresc(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len-1; i++){
        for (j = i+1; j < len; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i < len; i++){
        printf("%d, ", arr[i]);
    }
}

void sort_desc(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len-1; i++){
        for (j = i+1; j < len; j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i < len; i++){
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int arr[100], i, len;
    char opt;
    printf("baga array (0 sa te opresti)\n");
    for(i = 0; i < 100; i++)
    {
        printf("baga nr. %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]==0)break;
        if(i == 99){
            printf("Maximum array size exceeded.\n");
            exit(1);
        }
    }

    len = i;

    printf("crescator (c) sau descrescator (d)?\n");
    scanf(" %c", &opt);
    switch(opt)
    {
    case 'c':
        sort_cresc(arr, len);
        break;
    case 'd':
        sort_desc(arr, len);
        break;
    default:
        printf("Undefined\n");
    }
    return 0;
}
