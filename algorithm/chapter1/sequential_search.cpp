#include <iostream>

bool seq_search(int a[], int n, int r){
    for(int i = 0; i < r; i++)
        if(a[i] == n)
            return true;
    return false;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n, r;
    r = sizeof(a)/sizeof(a[0]);
    std::cin>>n;
    if(seq_search(a, n, r))
        std::cout<<"Exist"<<'\n';
    else
        std::cout<<"Doesn't exist"<<'\n';
}