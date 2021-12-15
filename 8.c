#include <stdio.h>
#include <math.h>
//Ввести з клавіатури масив з 5 елементів і вивести найменше
int main()
{
    int n[5], min;
    printf("Ввеідть п'ять чисел: \n");
    for(int i = 0; i < 5; i++){
        scanf("%i", &n[i]);
        if(i == 0 ){
            min = n[i];
        }else if(min > n[i]){
            min = n[i];
        }
    }
    printf("%i", min);
}
