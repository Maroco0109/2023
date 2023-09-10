/* ¹éÁØ 2444 º°Âï±â - 7
input: 5
ouput
    *       // 1    4Ä­  *  4Ä­ = 9Ä­
   ***      // 3    3Ä­ *** 3Ä­ = 9Ä­
  *****     // 5
 *******    // 7
*********   // 2n-1 = 9
 *******    // 7
  *****     // 5
   ***      // 3
    *       // 1
*/

#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int i = 1;
    for(i; i<=2*n-1; i=i+2){
        int j = ((2*n-1)-i)/2;
        for(int k=1; k<=j; k++)
            std::cout<<" ";
        for(int k=1; k<=i; k++)
            std::cout<<"*";
        std::cout<<'\n';
    }
        
    i = i-4;
    for(i; i>=1; i=i-2){
        int j = ((2*n-1)-i)/2;
        for(int k=1; k<=j; k++)
            std::cout<<" ";
        for(int k=1; k<=i; k++)
            std::cout<<"*";
        std::cout<<'\n';
    }

    return 0;
}