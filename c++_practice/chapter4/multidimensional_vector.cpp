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
    Circle circles[2][3];
    circles[0][0] = 1;
    circles[0][1] = 2;
    circles[0][2] = 3;
    circles[1][0] = 4;
    circles[1][1] = 5;
    circles[1][2] = 6;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            std::cout<<"Circle ["<<i<<", "<<j<<"]의 면적은 ";
            std::cout<<circles[i][j].getArea()<<'\n';
        }
    }
}