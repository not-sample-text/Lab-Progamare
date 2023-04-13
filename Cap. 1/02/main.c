#include <stdio.h>

int
main ()
{
    int note[50], i, sum = 0, length_arr;
    float medie;

    printf("(Pentru a termina introdu 0)");

    for (i = 0; i < 50; i++)
    {
        printf ("\nIntrodu nota nr %d: ", i + 1);
        scanf ("%d", &note[i]);

        sum += note[i];

        if (note[i] == 0)	break;
    }

    length_arr = i;

    medie = (float) sum / length_arr;

    printf ("%3.2f", medie);

    return 0;
}


