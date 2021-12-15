#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Заповнити масив з 10 елементів випадковими числами в інтервалі [0..100] і відсортувати першу половину за зростанням, а другу – за спаданням
int main()
{
    int r[10];
    int min = 101, c;
    srandom(time(NULL));
    printf("Початковий масив:\n");
    for(int i = 0; i < 10; i++){
        r[i] = random()%101;
        printf("%i ",r[i]);
    }
    printf("\nРезультат:\n");
    for(int i = 0; i < 10; i++){
        for(int q = 0; q < 5 - i - 1; q++){
           if(r[q] > r[q + 1]){
                int tmp = r[q];
                r[q] = r[q+1] ;
                r[q+1] = tmp;
           } 
        }
        for(int q = 5; q < 10 - i - 1; q++){
           if(r[q] < r[q + 1]){
                int tmp = r[q];
                r[q] = r[q+1] ;
                r[q+1] = tmp;
           } 
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%i ",r[i]);
    }
}
