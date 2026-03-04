#include<iostream>
class student{
    public:
        std::string name;
        int age;
        double gpa;

    student(std::string name,int age,double gpa){
        this->name=name;
        this->age=age;
        this->gpa=gpa;
    }
};

int main(){

    student student1("vishnu",22,6.65);

    std::cout<<student1.name<<" "<<student1.age<<" "<<student1.gpa;



}