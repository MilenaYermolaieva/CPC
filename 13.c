#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Заповнити масив випадковими числами і виділити в інший масив усі числа, які зустрічаються більше одного разу
int main()
{
    int r[7], res[7], point = 0;
    srandom(time(NULL));
    printf("Початковий масив:\n");
    for(int i = 0; i < 7; i++){
        r[i] = random()%101;
        printf("%i ",r[i]);
    }
    printf("\nРезультат:\n");
    
    for(int i = 0; i < 7; i++){
        if(r[i]==-1) continue;
        int count = 0;
        for(int q = i+1; q < 7; q++){
            if(r[q]==-1) continue;
            if(r[i] == r[q] ){
                r[q] = -1;
                count++;
            }
        }
        if(count == 0){
            r[i] = -1;
        }
    }
    for(int i = 0; i < 7; i++){
        if(r[i]!=-1){
            res[point++] = r[i];
            printf("%i ", r[i]);
        }
    }
}
