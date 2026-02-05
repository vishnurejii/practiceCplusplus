#include<iostream>
#include<cmath>

int main(){

    int x=3.14;
    int a=4;
    int b=8;
    int z;

    z=std::max(a,b);//printing highest
    int c=std::min(a,b);//print lowest
    int d=std::pow(2,4);//print the power of 2^4
    int e=std::sqrt(16);//square root of 16
    int f=std::abs(-2);//print absolute value means positive
    int g=std::round(x);//print the 3.14 rouded as 3
    int h=std::ceil(x);//round by up
    int i=std::floor(x);//print by down

    std::cout<<"max: "<<z<<"\n"<<"min: "<<c<<"\n"<<"power: "<<d;


    return 0;



}