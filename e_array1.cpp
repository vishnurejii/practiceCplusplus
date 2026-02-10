#include<iostream>


int main(){
    std::string arr[]={"apple","orange","grapes","pineapple"};

    arr[0]="jackfruit";
    std::cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3];

    return 0;
}