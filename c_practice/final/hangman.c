#include<stdio.h>
int guessedCorrect(char* dict_word, char ch){
    for(;*dict_word;dict_word++){
        if(dict_word==ch)
            return 1;
    }
    return 0;
}