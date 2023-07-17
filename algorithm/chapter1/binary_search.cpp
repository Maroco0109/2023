#include <iostream>
#include <vector>

bool binary_search(std::vector<int>& a, int n, int x){
    int low, high, mid;
    low=0;
    high=n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(x==a[mid])
            return true;
        if(x<a[mid])
            high = mid-1;
        else if(x>a[mid])
            low = mid+1;
    }
    return false;
}

int main(){
    std::vector<int> a = {1,2,3,4,5,6,7,8,9};
    int n = a.size();
    int x = 10;
    std::cout<<binary_search(a,n,x)<<'\n';
}