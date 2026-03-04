#include<iostream>

enum Day{monday=0,tuesday=1,wednesday=2,thursday=3,friday=4,saturday=5,sunday=6};

int main(){

    Day today=monday;

    switch (today)
    {
    case sunday:
        std::cout<<"its sunday";
        break;

    case monday:
        std::cout<<"its monday";
        break;
    
    case tuesday:
        std::cout<<"its tuesday";
        break;
    case wednesday:
        std::cout<<"its wednesday";
        break;
    case thursday:
        std::cout<<"its thursday";
        break;
    
    default:
        break;

    }


    return 0;
}