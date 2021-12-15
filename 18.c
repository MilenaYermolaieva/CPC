#include <stdio.h>
#include <stdlib.h>

/*
Ввести натуральне число і визначити, які цифри
зустрічаються декілька разів.
*/
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
    do{
        printf("Введіть ціле число >=0 :\n");
        scanf("%s", str);
    }
    while(atoi(str)<0);
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
