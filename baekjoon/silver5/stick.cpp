// 1094�� ����
/* �ڵ� ����
64�� 32+32, 32�� 16+16, 16�� 8+8. 8�� 4+4, 4�� 2+2, 1�� 1+1�� �ڸ� �� ����
�־��� X���� ä�� �� �ִ� ����� ��
*/
#include<iostream>
int main(){
    int stick=64;
    int x;
    int cnt = 0;
    std::cin>>x;
    while(x>0){
        if(x%2){
            cnt++;
        }
        x=x/2;
    }
    std::cout<<cnt<<'\n';
}