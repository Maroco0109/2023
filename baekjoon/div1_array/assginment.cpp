/* ���� 5597
�л� 30��(index 1 ~ 30)
���� 28�� ����
���� �� �� 2���� �⼮��ȣ ���
*/
#include<iostream>
#include<vector>
int main(){
    int number;
    std::vector<bool> student(31, false);
    for(int t=1;t<=28;t++){
        std::cin>>number;
        student[number]=true;
    }
    for(int t=1;t<=30;t++)
        if(student[t]==false)
            std::cout<<t<<'\n';
}