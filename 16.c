#include <stdio.h>

//Написати логічну функцію, яка визначає, чи вірно, що серед елементів масиву є два однакових. Якщо відповідь «так», функція повертає 1; якщо відповідь «ні», то 0.

int test( int N[], int n)
{
    for(int i = 0; i < n; i++){
        for(int q = i + 1; q < n; q++)
        {
            if(N[i]==N[q]){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int r[5];
    for(int i = 0; i < 5; i++){
        scanf("%i", &r[i]);
    }
    if(test(r, 5)){
        printf("Є однакові");
    }else{
        printf("Немає однакових");
    }
    
}
