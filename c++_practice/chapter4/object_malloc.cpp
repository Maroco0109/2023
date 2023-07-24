// ��ü ���� ���� �� ��ȯ
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
    std::cout<<"������ ���� radius = "<<radius<<'\n';
}
Circle::~Circle(){
    std::cout<<"�Ҹ��� ���� radius = "<<radius<<'\n';
}

int main(){
    Circle *p, *q;
    // new�� ������ ��ü�� Heap������� �����Ҵ� ��
    p=new Circle;
    q=new Circle(30);
    std::cout<<p->getArea()<<'\n'<<q->getArea()<<'\n';
    
    // �Ҹ��� ���� ��, Heap����̱� ������ p, q ������ delete
    delete p, delete q;
}