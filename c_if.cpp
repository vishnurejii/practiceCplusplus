#include<iostream>
 int main(){

    int age;

    std::cout<<"enter your age: "<<std::endl;
    std::cin>>age;

    if(age>=18){
        std::cout<<"hello user welcome to the site";

    }else if(age<0){
        std::cout<<"you haven't been born yet";
    } 
    else{
        std::cout<<"you are under age";
    }

    return 0;


 }