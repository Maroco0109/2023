// 1010�� �ٸ�����
/* �ڵ� ����:
��������: nCr = n-1Cr-1 + n-1Cr
*/
#include<iostream>
int main(){
    int n,m;
    int test_case;
    std::cin>>test_case;
    while(test_case--){
        std::cin>>n>>m;
        long result = 1;
        for(int i=m, r=1;i>m-n;i--,r++){
            result *= i;
            result /=r;
        }
        std::cout<<result<<'\n';
    }
}