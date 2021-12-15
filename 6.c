#include <stdio.h>
//Ввести номер місяця і номер дня, вивести число днів, що залишились до Нового року.
int MtoD(int month){
    int days;
    switch(month){
        case 4 : case 6 : case 9 : case 11 : days = 30; break;
        case 2 : days = 28; break;
        default : days = 31; 
    }
    return days;
}

int main (){
    int m, sum = 0, d;
    do{
        printf("Введіть місяць: ");
        scanf("%i", &m);
    }while(m < 1 || m > 12);
    do
    {
        printf("Введіть день: ");
        scanf("%i", &d);
    }while(d < 0 || d > MtoD(m));
    
    for (int i = m; i <= 12; i++){
        sum += MtoD(i);
    }
    printf("Кількість днів до Нового року: %d", sum - d);
}
