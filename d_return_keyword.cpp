#include<iostream>


double square(double length);
double cube(double length);
int main(){

    double length=5;
    double area=square(length);
    double cuberesult=cube(length);

    std::cout<<"the are is :"<<area<<"cm^2\n";
    std::cout<<"the cube result is :"<<cuberesult;

    return 0;
}
double square(double length){
    return length*length;
}
double cube(double length){
    return length*length*length;
}