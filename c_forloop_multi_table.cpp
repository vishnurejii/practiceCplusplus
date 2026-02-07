#include<iostream>
 
int main(){
    int num;
    std::cout<<"enter which number table you want: ";
    std::cin>>num;

    for(int i=1;i<=10;i++){
        std::cout<<i<<" * "<<num<<" = "<<i*num<<std::endl;
    }
    return 0;
}