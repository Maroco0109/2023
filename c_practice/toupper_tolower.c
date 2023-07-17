// 대문자는 소문자로, 소문자는 대문자로 바꾸는 함수

#include<stdio.h>

char tolowwer_toupper(char c);

int main(){
    char user_input;
    scanf("%c",&user_input);

    printf("결과: %c\n",tolowwer_toupper(user_input));

    return 0;
}

char tolowwer_toupper(char c){
    if(c>='A'&&c<='Z')
        return c-'A'+'a';
    else if(c>='a'&&c<='z')
        return c-'a'+'A';
    else{
        printf("User input error!\n");
        return 'X';
    }
        
}