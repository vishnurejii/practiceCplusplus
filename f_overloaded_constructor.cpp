#include<iostream>

class pizza{
    public:
        std::string topping1;
        std::string topping2;

    pizza(std::string topping1){
        this->topping1=topping1;
    }
    pizza(std::string topping1,std::string topping2){
        this->topping1=topping1;
        this->topping2=topping2;
    }
};

int main(){

    pizza pizz1("peporoni","chicken");

    // std::cout<<pizz1.topping1;

    std::cout<<pizz1.topping1;
    std::cout<<pizz1.topping2;



}