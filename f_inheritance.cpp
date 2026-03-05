#include<iostream>

class Animal{
    public:
        bool alive=true;
    
    void eat(){
        std::cout<<"the animal eating";
    }
};

class Dog: public Animal{
    public:
        void bark(){
            std::cout<<"the animal is barking";
        }
};

class Cat: public Animal{
    public:

    void drink(){
        std::cout<<"the cat is drinking";
    }
};
int main(){

    Dog dog;
    Cat cat;

    dog.alive;
    cat.alive;

    dog.eat();
    cat.eat();
    



    return 0;

}