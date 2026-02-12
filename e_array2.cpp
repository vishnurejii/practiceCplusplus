#include<iostream>

int main(){

    std::string arr[]={"orange","apple","grapes","pineapple"};

    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<"\n";

    }
    return 0;

}