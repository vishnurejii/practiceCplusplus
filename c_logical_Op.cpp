#include<iostream>

int main(){
    int temp;


    //&&- if two conditions are true
    //||-check if at least one of two conditions is true
    //!-reverses the logical state of its operand
    std::cout<<"enter the temp :";
    std::cin>>temp;

    std::cout<<(temp>22 && temp<35 ? "the temp id good":"temp is bad");

    // std::cout<<(temp>22 || temp <35? "the temp is good":"the temp is not good");
    
    return 0;
}