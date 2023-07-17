#include <iostream>
#include <cmath>
#define MAX_SIZE 9
void exchange_sort(int size, int a[]){
    for(int i=0; i<=size-1; i++){
        for(int j=i+1; j<=size-1; j++){
            if(a[j]<a[i]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main(){
    int n = MAX_SIZE;
    int a[n] = {1,3,5,7,9,2,4,6,8};
    exchange_sort(n, a);
    for(int i=0; i<n; i++)
        std::cout<<a[i]<<'\n';
}