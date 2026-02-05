#include<iostream>

int main(){

    // int grade=50;
    // grade>=50? std::cout<<"grade A":std::cout<<"grade B";
    int num;
    std::cout<<"enter a number :";
    std::cin>>num;

    num%2==0?std::cout<<"odd":std::cout<<"even";
     

    bool hungry=false;
    std::cout<<(hungry?"you are hungry":"you are not hungry");
    // hungry?std::cout<<"you are hungry":std::cout<<"you are full";
    return 0;

}