#include <iostream>

int add_array(int n, int a[]){
    int result=0;
    for(int i=0; i<n; i++)
        result += a[i];
    return result;
}
int main(){
    int n = 9;
    int a[n] = {1,2,3,4,5,6,7,8,9};
    std::cout<<add_array(n, a)<<'\n';
}