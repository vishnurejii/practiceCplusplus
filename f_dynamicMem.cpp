#include<iostream>

int main(){
    char *pgrade=nullptr;
    int size;
    std::cout<<"enter how many gardes? "<<"\n";
    std::cin>>size;

    pgrade=new char[size];

    
    
    for(int i=0;i<size;i++){
        std::cin>>pgrade[i];
    }

    for(int i=0;i<size;i++){
        std::cout<<pgrade[i]<<" ";;
    }

}