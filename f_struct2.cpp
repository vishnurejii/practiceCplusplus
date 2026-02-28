#include<iostream>
struct car{
    std::string name;
    int model;
    std::string colour;

};
void carDetails(car Car);
int main(){

    car car1;
    car car2;

    car1.name="tata";
    car1.model=2014;
    car1.colour="yellow";

     car2.name="tata";
    car2.model=2014;
    car2.colour="yellow";

    carDetails(car1);

}
void carDetails(car Car){

    std::cout<<Car.name;
      std::cout<<Car.model;
        std::cout<<Car.colour;

}