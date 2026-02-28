//struct =  a structure that group related variables under one name
//structs can contain many diff data types .variables ina struct 
//are known as "members"
//members can be access with . "class member access operator"

#include<iostream>

struct student{
    std::string name;
    double gpa;
    bool entrolled = true;
};


int main(){

    student student1;
    student1.name="vishnu";
    student1.gpa=2.1;
    
    std::cout<<student1.name<<" "<<student1.gpa<<" "<<student1.entrolled;
return 0;

}