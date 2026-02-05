#include<iostream>

int main(){
    double temp;
    char unit;
    std::cout<<"enter in which format you need temp";
    std::cin>>unit;

    std::cout<<"enter temp";
    std::cin>>temp;

    if(unit=='F' || unit=='f'){
        temp=(1.8*temp)+32.0;
        std::cout<<"the temp is :"<<temp;
    }else if(unit=='C' || unit=='c'){
        temp=(temp-32)/1.8;
        std::cout<<"the temp is :"<<temp;
    }else{
        std::cout<<"invalid format";
    }

    return 0;
}