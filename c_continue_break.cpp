#include<iostream>

int main(){

    for(int i=0;i<=20;i++){

        if(i == 13){
            continue;//i just need to print 1 to 20 except 13
        }
        std::cout<<i<<std::endl;
    }

    for(int i=0;i<=20;i++){
        if(i == 13){
            break;//will not print after reaching 12
        }
        std::cout<<i<<std::endl;
    }

    return 0;
}

