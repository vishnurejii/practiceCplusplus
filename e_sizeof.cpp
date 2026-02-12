#include<iostream>

int main(){
    //sizeof()=determine the size in bytes:variable,data type,class,object

    int a=10;
    char b='b';
    double c=10.25;
    std::string name="bro";
    std::cout<<sizeof(a)<<"\n";
     std::cout<<sizeof(b)<<"\n";

     std::cout<<sizeof(c)<<"\n";
      std::cout<<sizeof(name)<<"\n";

      std::string arr[]={"apple","orange","grapes"};
           std::cout<<sizeof(arr[0])<<"\n";
      std::cout<<sizeof(arr)<<"\n";
      
     // to find total number of elements in array

     std::cout<<sizeof(arr)/sizeof(arr[0])<<" elements";

    return 0;
}