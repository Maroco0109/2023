// TYPE* 포인터변수 = new TYPE [ARRAY SIZE];    배열의 동적 할당
// delete [] 포인터변수;                        배열의 메모리 반환
#include <iostream>

int main(){
    std::cout<<"입력할 정수의 개수: ";;
    int n;
    
    //정수의 개수 입력
    std::cin>>n;
    if(n<=0)
        return 0;

    //n개의 정수 배열 동적 할당
    int* p=new int[n];
    if(!p){
        std::cout<<"Cannot allocate memory"<<'\n';
        return 0;
    }

    //동적 할당된 배열에 값 입력
    for(int i = 0; i<n; i++){
        std::cout<<i+1<<"번째 정수: ";
        std::cin>>p[i];
    }

    //배열의 모든 값 더한 후 평균값 계산
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += p[i];
    }
    std::cout<<"Avg = "<sum/n<<'\n';
    
    //배열 메모리 반환
    delete [] p;
}