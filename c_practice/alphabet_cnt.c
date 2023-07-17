// 파일의 알파벳 개수 읽어서 출력
#include<stdio.h>
void al_count(char c[], int a[]);
int main(){
    FILE* ip,*op;
    ip = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\alphabet.txt","r");
    op = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\result.txt","w");
    if(!ip||!op){printf("%d %d 파일 입출력 오류",ip, op); return 0;}
    char in[100];
    int cnt[28]={0};
    al_count(in,cnt);
    for(int i = 0;i<28;i++){
        if(cnt[i]>0)
            printf("%c는 %d번 출력\n",i+'a',cnt[i]);
    }
}
void al_count(char c[], int a[]){
    for(int i = 0;*(c+i);i++)
        (*(a+(*(c+i)-'a')))++;
#include<stdio.h>
void cnt_char(char in[],int cnt[]);
int main(){
    FILE*ip,*op;
    char word[100];
    int i;
    int cnt[28]={0};
    ip=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\words.txt","r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\words_result.txt","w");
    if(!ip||!op){printf("파일 오류!\n");return 0;}
    fscanf(ip,"%s",word);
    cnt_char(word,cnt);
    for(i=0;i<28;i++){
        if(cnt[i]>0)
            fprintf(op,"%c 글자는 %d 번 출력됨\n",i+'a',cnt[i]);
    }
}

void cnt_char(char in[],int cnt[]){
    int i;
    for(i=0;*(in+i);i++){
        (*(cnt+(*(in+i)-'a')))++;
    }
}