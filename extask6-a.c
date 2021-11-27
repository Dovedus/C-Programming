#include <stdio.h>
#include <stdlib.h> //for rand


#define days 31
#define p_min 740
#define p_max 780
#define p_norm 760

int pressure[days];

int main()
{
    for (int i = 0; i < days; i++)
    {
        pressure[i] = p_min + rand() % (p_max - p_min + 1);
    }

    printf("day\tpressure\n");
    for (int i = 0; i < days; i++)
    {
        printf("%d\t%d\n", i + 1, pressure[i]);
    }

    int cnt_reduced = 0;		// reduced-пониженное
    int cnt_normal = 0;			// normal-нормальное
    int cnt_increased = 0;		// increased-повышенное
    for (int i = 0; i < days; i++)
    {
        int v = pressure[i];
        if (v < p_norm)
        {
        	cnt_reduced++;
        }	
        else if (v > p_norm)
        {
        	cnt_increased++;
        }	
        else cnt_normal++;
    }

    printf("reduced: %d\n", cnt_reduced);
    printf("increased: %d\n", cnt_increased);
    printf("normal: %d\n", cnt_normal);
    return 0;
}