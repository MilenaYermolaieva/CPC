#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Заповнити масив з 12 елементів випдаковими числами в інтервалі [-12..12] і виконати інверсію для кожної третини масиву
int main()
{
    int r[12];
    srandom(time(NULL));
    printf("Початковий масив:\n");
    for(int i = 0; i < 12; i++){
        r[i] = random()%25 - 12;
        printf("%i ",r[i]);
    }
    printf("\nРезультат:\n");
   
    for(int i = 0 ; i <3; i++){
        for(int q = 3 ; q >=0; q--){
            printf("%i ", r[i*4+q]);
        }
    }
}
