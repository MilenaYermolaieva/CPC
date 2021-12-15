#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Заповнити масив з 10 елементів випадковими числами в інтервалі [-10 .. 10] і знайти в ньому два максимальні елемент
int main()
{
    int r[10];
    int maxmax = 0, idmaxmax = 0, max = 0, idmax = 0;
    srandom(time(NULL));
    for(int i = 0; i < 10;i++){
        r[i] = random()%21 - 10;
        printf("%i ",r[i]);
    }
    for(int i = 0; i < 10;i++){
        if(maxmax <r[i]){
            maxmax = r[i];
            idmaxmax = i + 1;
        }
    }
    for(int i = 0; i < 10;i++){
        if(max <r[i] && i + 1 != idmaxmax){
            max = r[i];
            idmax = i + 1;
        }
    }
    printf("\nмаксимальні a[%i] = %i, a[%i] = %i", idmaxmax, maxmax, idmax, max);
}
