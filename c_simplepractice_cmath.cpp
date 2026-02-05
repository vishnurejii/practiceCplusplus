#include<iostream>
#include<cmath>


int main(){
    double a;
    double b;

    std::cout<<"enter a and b";
    std::cin>>a>>b;

    double c=sqrt(pow(a,2)+pow(b,2));

    std::cout<<c;

    return 0;

}