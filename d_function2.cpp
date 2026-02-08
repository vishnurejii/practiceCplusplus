#include<iostream>


void happybirthday(std::string name,int age);
int main(){

    std::string name="vishnu";
    int age=22;

    happybirthday(name,age);

    return 0;

}
void happybirthday(std::string name,int age){
    std::cout<<"happy birthday "<<name<<"\n";
    std::cout<<"your are "<<age<<"years old\n";

}