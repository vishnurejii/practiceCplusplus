#include<iostream>

std::string pizza();
std::string pizza(std::string topping1);
std::string pizza(std::string topping1,std::string topping2);

int main(){

    pizza("pepperoni","mushroom");

    return 0;
}
std::string pizza(){
    std::cout<<"here is your pizza";
}
std::string pizza(std::string topping1){
    std::cout<<"here is your pizza with"+topping1;
}
std::string pizza(std::string topping1,std::string topping2){
    std::cout<<"here is your pizza with "+topping1+" "+topping2;
}