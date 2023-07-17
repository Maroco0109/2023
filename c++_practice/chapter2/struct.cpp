//구조체는 클래스와 기능적으로 동일
//구조체의 디폴트 접근은 public => c언어와의 호환성을 위해

#include <iostream>

struct StructCircle{
private:
    int radius;
public:
    StructCircle(int r){ radius = r; }
    double getArea();
};

double StructCircle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    StructCircle waffle(3);
    std::cout<<waffle.getArea()<<'\n';
}