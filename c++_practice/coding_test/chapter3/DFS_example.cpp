#include<iostream>

static int n;
void DFS(int number, int jarisu);
bool isPrime(int number);
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin>>n;
    // DFS �Լ�(�Ҽ�, �ش� �ڸ���)
    DFS(2, 1);  
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}
void DFS(int number, int jarisu){
    // n �ڸ��� ���� Ž�� �Ϸ�
    if(jarisu == n){
        // �Ҽ���� ���
        if(isPrime(number)) {std::cout<<number<<'\n';}
        return;
    }
    for(int i=1; i<10; i++){
        if(i%2==0)  continue;
        if(isPrime(number*10+i))
            DFS(number*10+i, jarisu+1);
    }
}
bool isPrime(int number){   // �Ҽ� �Ǻ� �˰��� - n/2 ���� or n�� ������ ����
    for(int i=2; i<=number/2;i++){
        if(number%i == 0)   return false;
    }
    return true;
}