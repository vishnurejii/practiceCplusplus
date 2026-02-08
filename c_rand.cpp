#include<iostream>
#include<ctime>

int main(){

    srand(time(0));

    int randNum=rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout<<"you win a bumber ticket";
        break;
    case 2:
        std::cout<<"you win a t-shirt";
        break;
    case 3:
        std::cout<<"you win a lunch";
        break;
    case 4:
        std::cout<<"you win a gift card";
        break;
    case 5:
        std::cout<<"you win a concert ticket";
        break;
    
    }

    return 0;
}
