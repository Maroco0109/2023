// 행맨용 사전 읽어 불량 단어 제거 (소문자로만 된 6자 이상 단어만) 후 저장
#include<stdio.h>
int clean6word(char c[]);

int main() {
	FILE* ip, * op;		// <stdio.h>
	char word[100];
	ip = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\__linux.word.txt", "r");		// "r" 문자열
	op = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\__linux.word_result.txt", "w");
	if (!ip || !op) { printf("%d %d 파일 입출력 오류\n", ip, op); return 0; }					// 0이면 망함
	for (; fscanf(ip, "%s", word) > 0;) {		// word 자체가 주소 상수. &붙이면 망함
		// fscanf 가 읽은 개수 리턴. 0, -1 리턴 시 0개 읽음. 문제 발생 --> 종료
		if (clean6word(word))
			fprintf(op, " % s\n", word);    //fprintf(stdout, "%s\n", word);    --> 출력 확인
	}
	fclose(ip);
	fclose(op);
}

 int clean6word(char c[]) {
	 int i;
	 for (i = 0; *(c + i); i++) {
		 if (!('a' <= *(c + i) && *(c + i) <= 'z'))	// 소문자 아니면 불량단어
			 return 0;
	 }
	 if (i < 6)	return 0;   // 6글자 미만이면 불량단어
	 return 1;  	// 우량 단어임
#include<stdio.h>
int clean_word(char* c);
int main(){
    FILE *ip,*op;
    char word[100];
    ip=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\__linux.words.txt","r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\__linux.words_result.txt","w");
    if(!op||!ip){printf("파일 오류!\n"); return 0;}
    for(;fscanf(ip,"%s",word)>0;){
        if(clean_word(word))
            fprintf(op,"%s\n",word);
    }
    fclose(ip),fclose(op);

    return 0;
}

int clean_word(char* c){
    int i;
    for(i=0;*(c+i);i++){
        if(!('a'<=*(c+i)&&*(c+i)<='z'))
            return 0;
    }
    if(i<6)
        return 0;
    return 1;
}