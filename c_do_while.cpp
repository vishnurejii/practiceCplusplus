#include<iostream>

int main(){
int num;
    do{
        std::cout<<"enter a positive number";
        std::cin>>num;

    }while(num<0);

    std::cout<<"the num is :"<<num;

    return 0;


}