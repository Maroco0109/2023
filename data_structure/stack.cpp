// stack code
#include<iostream>
// stack 구현 공간, stack의 push, pop, display 에 이용될 n, top 선언
int stack[100], n=100, top=-1;

// stack push 함수
void push(int val){
    if(top>=n-1)
        std::cout<<"Stack Overflow"<<'\n';
    else{
        top++; stack[top]=val;
    }
}
// stack pop 함수
void pop(){
    if(top<=-1)
        std::cout<<"Stack Overflow"<<'\n';
    else{
        std::cout<<"The poped element is "<<stack[top]<<'\n'; top--;    // stack[top] 보여준 후 top--로 공간 삭제
    }
}
// stack display 함수
void display(){
    if(top>=0){
        std::cout<<"Stack elements are: ";
        // top ~ 0 index까지 cout
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