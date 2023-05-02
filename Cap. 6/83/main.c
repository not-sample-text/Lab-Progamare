#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float xPos;
    float yPos;
    float zPos;
} pointPos;

int main()
{
    float dist;
    pointPos p1 = {3.6, 1.5, 1.4}, p2 = {4.8, 5.8, 4.7};

    dist = sqrt(pow((p2.xPos - p1.xPos), 2) + pow((p2.yPos - p1.yPos), 2) + pow((p2.zPos - p1.zPos), 2));

    printf("distanta de la punctul 1 (%.2f, %.2f, %.2f) si punctul 2 (%.2f, %.2f, %.2f) este %.2f",
           p1.xPos, p1.yPos, p1.zPos, p2.xPos, p2.yPos, p2.zPos, dist);
    return 0;
}
