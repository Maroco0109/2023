// 객체 배열 동적 생성
#include<iostream>
class Circle{
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r){radius=r;}
    double getArea(){return 3.14*radius*radius;}
};
Circle::Circle() : Circle(1){}
Circle::Circle(int r){
    radius=r;
    std::cout<<"생성자 실행 radius = "<<radius<<'\n';
}
Circle::~Circle(){
    std::cout<<"소멸자 실행 radius = "<<radius<<'\n';
}
int main(){
    // 포인터타입 객체 배열 동적 생성
    Circle *pArray = new Circle[3];
    // 객체 배열에 radius 값 저장 --> 포인터 변수라 포인터 형식 선언 가능
    pArray->setRadius(10);
    (pArray+1)->setRadius(20);
    (pArray+2)->setRadius(30);
    for(int i=0;i<3;i++)
        std::cout<<(pArray+i)->getArea()<<'\n';
    // 포인터 p에 배열의 주소값 설정
    Circle* p = pArray;
    for(int i= 0;i<3;i++,p++)
        std::cout<<p->getArea()<<'\n';
    // 객체 배열 반환
    delete [] pArray;
}