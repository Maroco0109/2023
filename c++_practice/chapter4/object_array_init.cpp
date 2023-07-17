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
    std::vector<Circle> circleArray = {Circle(10), Circle(20), Circle()};

    for(int i = 0; i<3; i++)
        std::cout<<i+1<<"번째 Circle의 면적은 "<<circleArray[i].getArea()<<'\n';
}