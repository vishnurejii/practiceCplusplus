#include<iostream>

class human{
    public:
        std::string name;
        int age;

    void eat(){
        std::cout<<"this man is eating";
    }
     void drink(){
        std::cout<<"this man is drinking";
    }
    
};
int main(){

    human human1;

    human1.name="vishnu";
    human1.age=22;
    std::string namehu=human1.name;
    int agehu=human1.age;

    std::cout<<namehu<<" "<<agehu;

    human1.eat();



}