// stack code
#include<iostream>
// stack ���� ����, stack�� push, pop, display �� �̿�� n, top ����
int stack[100], n=100, top=-1;

// stack push �Լ�
void push(int val){
    if(top>=n-1)
        std::cout<<"Stack Overflow"<<'\n';
    else{
        top++; stack[top]=val;
    }
}
// stack pop �Լ�
void pop(){
    if(top<=-1)
        std::cout<<"Stack Overflow"<<'\n';
    else{
        std::cout<<"The poped element is "<<stack[top]<<'\n'; top--;    // stack[top] ������ �� top--�� ���� ����
    }
}
// stack display �Լ�
void display(){
    if(top>=0){
        std::cout<<"Stack elements are: ";
        // top ~ 0 index���� cout
        for(int i=top;i>=0;i--)
            std::cout<<stack[i]<<" ";
        std::cout<<'\n';
    }
    else
        std::cout<<"Stack is empty"<<'\n';
}
int main(){
    int ch, val;
    std::cout<<"1) Push in stack"<<'\n';
    std::cout<<"2) Pop from stack"<<'\n';
    std::cout<<"3) Display stack"<<'\n';
    std::cout<<"4) end"<<'\n';
    do{
        std::cout<<"Enter choice: "<<'\n';
        std::cin>>ch;
        switch(ch){
            case 1:{
                std::cout<<"Enter value to be pushed: "<<'\n';
                std::cin>>val;
                push(val);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                break;
            }
            default:{
                std::cout<<"Invalid choice"<<'\n';
            }
        }
    }while(ch!=4);
    return 0;
}