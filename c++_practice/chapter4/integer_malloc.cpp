#include <iostream>

int main(){
    //int 타입 1개 할당, 크기 명시x 이므로 integer 크기만큼 할당
    int* p;
    p = new int;

    //p가 NULL인 경우, 메모리 할당 실패
    if(!p){
        std::cout<<"Cannot allocate memory."<<'\n';
        return 0;
    }

    //할당 받은 정수 공간에 값 입력
    *p = 5;
    //할당 받은 정수 공간에서 값 읽기
    int n = *p;
    
    std::cout<<"*p = "<<*p<<'\n';
    std::cout<<"n = "<<n<<'\n';

    //할당받았던 메모리 반환
    delete p;
}