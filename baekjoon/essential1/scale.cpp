// 다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.
// 1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.
// 연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

// input: 첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
// output: 첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.
#include<iostream>
int main(){
    int a[8];
    int asc=0,dsc=0;
    std::cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7];
    for(int i=0; i<4; i++){
        if(a[i]==i+1&&a[i]+a[7-i]==9)
            asc++;
        else if(a[7-i]==i+1&&a[i]+a[7-i]==9)
            dsc++;
    }
    if(asc==4)
        std::cout<<"ascending"<<'\n';
    else if(dsc==4)
        std::cout<<"descending"<<'\n';
    else
        std::cout<<"mixed"<<'\n';
    return 0;
}