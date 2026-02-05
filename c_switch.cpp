#include<iostream>

int main(){
    int month;

    std::cout<<"enter the month(1-12)";
    std::cin>>month;

    switch(month){
        case 1:
            std::cout<<"this is january";
            break;

        case 2:
            std::cout<<"this is feb";
            break;

        case 3:
            std::cout<<"this is march";
            break;

        case 4:
            std::cout<<"this is april";
            break;
        case 5:
            std::cout<<"this is may";
            break;
        case 6:
            std::cout<<"this is june";
            break;
        case 7:
            std::cout<<"this is july";
            break;
        case 8:
            std::cout<<"this is aug";
            break;
        case 9:
            std::cout<<"this is sep";
            break;
        case 10:
            std::cout<<"this is oct";
            break;
        case 11:
            std::cout<<"this is nov";
            break;
        case 12:
            std::cout<<"this is dec";
            break;

        default:
            std::cout<<"enter a valid month";

        return 0;



    }
}