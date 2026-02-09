#include<iostream>


double square(double length);
int main(){

    double length=5;
    double area=square(length);

    std::cout<<"the are is :"<<area<<"cm^2";

    return 0;
}
double square(double length){
    return length*length;
}