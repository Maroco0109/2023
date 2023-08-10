// ���� 2748 �Ǻ���ġ�� 2
// �ð�����: 1�� -> ��� �Լ� ���x
// input: 1<=n<=90
// output: n��° �Ǻ���ġ��
#include<iostream>
#include<vector>
long long fib2(int n);
int main(){
    int n;
    std::cin>>n;
    std::cout<<fib2(n)<<'\n';
}
long long fib2(int n){
    std::vector<long long> fib(100);
    int idx=2;
    fib[0]=0;
    fib[1]=1;
    for(idx;idx<=n;idx++){
        fib[idx]=fib[idx-1]+fib[idx-2];
    }
    return fib[n];
}