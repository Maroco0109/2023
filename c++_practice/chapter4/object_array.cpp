#include <iostream>
#include <vector>

class Circle{
    int radius;
public:
    Circle() {this->radius = 1;}
    Circle(int r) {this->radius = r;}
    double getArea();
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    //Circle 객체 배열 생성
    std::vector<Circle> circleArray;

    //배열의 각 원소 객체의 멤버 접근
    circleArray.emplace(circleArray.begin(), 10);
    circleArray.emplace(circleArray.begin()+1, 20);
    circleArray.emplace(circleArray.begin()+2, 30);

    //배열의 각 원소 객체의 멤버 접근
    for(int i = 0; i<3; i++){
        std::cout<<i+1<<"번째 Circle의 면적: "<<circleArray[i].getArea()<<'\n';
    }   
}