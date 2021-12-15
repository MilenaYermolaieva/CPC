#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Заповнити масив з 12 елементів випадковими числами в інтервалі [-12..12] і виконати цикличний зсув ВПРАВО на 4 елемента
int main()
{
    int r[12], tmp[12];
    srandom(time(NULL));
    printf("Початковий масив:\n");
    for(int i = 0; i < 12; i++){
        r[i] = random()%21 - 10;
        tmp[i]=r[i];
        printf("%i ",r[i]);
    }
    printf("\nРезультат:\n");
    
    for(int i = -4; i < 8; i++){
        r[i] = tmp[(12+i)%12];
        printf("%i ", r[i]);
    }
}
