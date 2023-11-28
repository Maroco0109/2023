/*  ���� 2745
B���� �� N -> make it decimal
10������ �Ѿ�� ������ ���ڷ� ǥ�� ���ϴ� �ڸ��� �ִ�
A:10 B:11, ..... Z:35 -> ascii - 55
0,1,2,3, ...   -> ascii - 48
input: ù°�ٿ� n, b
*/

#include<iostream>
#include<string>
int main(){
    int b;
    int result = 0;
    int digit = 1;
    std::string n;
    std::cin>>n>>b;
    int len = n.length()-1;
    for(int i=len; i>=0; i--){
        if(n[i]<=57 && n[i]>=48)
            result = result + (n[i] - 48) * digit;
        else
            result = result + (n[i] - 55) * digit;
        digit = digit * b;
    }
    printf("%d\n", result);
}