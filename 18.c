#include <stdio.h>

//Ввести ціле число і визначити, чи правильно, що в його запису є дві однакові цифри, що НЕ обов’язково стоять рядом.

char samenumber(char s[], int n)
{
    int a=0;
    for(int i = 0; i < n; i++){
        if(s[i]=='a') continue;
        int count = 0;
        for(int q = i + 1; q < n; q++){
            if(s[q]=='a') continue;
            if(s[i] == s[q] ){
                s[q] = 'a';
                count++;
                a++;
            }
        }
        if(count == 0){
            s[i] = 'a';
            a++;
        }
    }
    if(a==n) return 0;
    else return 1;
}

int main() {
  char str[100];
    printf("Введіть ціле число >=0 :\n");
    scanf("%s", str);
    int count = 0;
    while(str[count++]!='\0');
    if(samenumber(str, count-1)){
        printf("Повторяються : ");
        for (int i=0; i < count - 1; i++){
            if(str[i]!='a'){
                printf("%c ", str[i]);
            }
        }
    }
    else printf("Немає повторів.");
}
