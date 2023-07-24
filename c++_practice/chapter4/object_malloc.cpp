// 객체 동적 생성 및 반환
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
    Circle *p, *q;
    // new로 생성된 객체는 Heap방식으로 동적할당 됨
    p=new Circle;
    q=new Circle(30);
    std::cout<<p->getArea()<<'\n'<<q->getArea()<<'\n';
    
    // 소멸자 실행 시, Heap방식이기 때문에 p, q 순으로 delete
    delete p, delete q;
}