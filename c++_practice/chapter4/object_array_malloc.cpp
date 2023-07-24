// ��ü �迭 ���� ����
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
    // ������Ÿ�� ��ü �迭 ���� ����
    Circle *pArray = new Circle[3];
    // ��ü �迭�� radius �� ���� --> ������ ������ ������ ���� ���� ����
    pArray->setRadius(10);
    (pArray+1)->setRadius(20);
    (pArray+2)->setRadius(30);
    for(int i=0;i<3;i++)
        std::cout<<(pArray+i)->getArea()<<'\n';
    // ������ p�� �迭�� �ּҰ� ����
    Circle* p = pArray;
    for(int i= 0;i<3;i++,p++)
        std::cout<<p->getArea()<<'\n';
    // ��ü �迭 ��ȯ
    delete [] pArray;
}