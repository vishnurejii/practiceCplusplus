#include<iostream>


std::string concatName(std::string string1,std::string string2);
int main(){

    std::string firstName="vishnu";
    std::string lastName="C R";
    std::string fullName=concatName(firstName,lastName);

    std::cout<<"your full name is :"<<fullName;

    return 0;
}

std::string concatName(std::string string1,std::string string2){
    return string1+" "+string2;
}