/* น้มุ 10988
input: 1<=string<=100
output: 0(not palindrome), 1(palindrome)
*/
#include<iostream>
#include<string>
#include<cstring>
int main(){
    std::string s;
    std::cin>>s;
    int cnt = 0;
    bool isPal = false;
    int half_size = s.length()/2;
    for(int i=0, j=s.length()-1; i<=j; i++,j--){
        if(s[i]!=s[j])
            cnt++;
    }
    if(cnt == 0)
        isPal = true;
    else
        isPal = false;
    std::cout<<isPal<<'\n';

    return 0;
}