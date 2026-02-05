#include<iostream>
#include<String>

int main(){

    std::string name;
    std::string fullname;

    std::cout<<"whats your name?";
    std::cin>>name;

    std::cout<<"enter full name: ";
    std::getline(std::cin >> std:: ws,fullname); 
//to take input with space for example full name
    std::cout<<"hello "<<name<<std::endl;

    return 0;
}