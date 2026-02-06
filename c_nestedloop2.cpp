#include<iostream>

int main(){
    int row,coloumn;
    char symbol;

    std::cout<<"enter how many row: "<<std::endl;
    std::cin>>row;

    std::cout<<"enter how many coloumn: "<<std::endl;
    std::cin>>coloumn;

    std::cout<<"enter which symbol you want: "<<std::endl;
    std::cin>>symbol;

    for(int i=0;i<=row;i++){
        for(int j=0;j<=coloumn;j++){
            std::cout<<symbol;
        }

        std::cout<<"\n";
    }
    return 0;

}