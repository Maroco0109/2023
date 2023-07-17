#include <iostream>

int main(){
    int a[2][2] = {{3,2}, {2,1}};
    int b[2][2] = {{2,5}, {1,2}};
    int c[2][2] = {0};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c[i][j] = a[i][j]*b[j][i];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            std::cout<<c[i][j];
            if(j<2)
                std::cout<<" ";
        }
        std::cout<<'\n';
    }
}