#include<iostream>
#include<string>

int main(){
    std::string foods[5];
    std::string temp;
    int size=sizeof(foods)/sizeof(foods[0]);
    
    for(int i=0;i<size;i++){
        std::cout<<i+1<<"). enter a food you like: "<<std::endl;
        std::getline(std::cin,temp);

        if(temp=="q"){
            break;
        }else{
            foods[i]=temp;
        }
    }

    std::cout<<"the foods you entered: "<<std::endl;

    for(int i=0;!foods[i].empty();i++){
        std::cout<<foods[i]<<std::endl;

    }
    return 0;
}