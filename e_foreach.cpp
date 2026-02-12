#include<iostream>

int main(){

    //forach loop=loop that eases the traversal over an iterable data set
    std::string arr[]={"abhinav","santo","athul","vishnu"};

    for(std::string a:arr){
        std::cout<<a<<"\n";
    }

    return 0;
}