//Parenthesis Stirng, PS
//Valid PS, VPS
#include <iostream>
#include <string>

int main(){
    int n;
    std::string parenthesis;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>parenthesis;
        int state = 0;
        for(int j = 0; j < parenthesis.size(); j++){
            if(parenthesis[j]=='(')
                state++;
            if(parenthesis[j]==')'){
                state--;
                if(state < 0){
                    break;
                }
            }
        }
        if(state == 0)
            std::cout<<"YES"<<'\n';
        else
            std::cout<<"NO"<<'\n';
    }
}