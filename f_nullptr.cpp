#include<iostream>

int main(){
    int *pointer=nullptr;

    int a=123;
    pointer=&a;

    if(pointer==nullptr){
        std::cout<<"value not assigned";
    }else{
        std::cout<<"value assigned";
        std::cout<<*pointer;
    }
    return 0;
}