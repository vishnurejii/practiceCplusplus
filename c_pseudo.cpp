#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){

    srand(time(NULL));

    int num=(rand()%6)+1;//to print a random number etween 1 to 6

    std::cout<<num;

    return 0;
}