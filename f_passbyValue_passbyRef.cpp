//pass by value

// #include<iostream>

// int main(){
//     std::string x="abcd";
//     std::string y="efgh";
//     std::string temp;

//     temp=x;
//     x=y;
//     y=temp;

//     std::cout<<"x: "<<x<<"\n";
//     std::cout<<"y: "<<y<<"\n";

//     return 0;
// }

//pass by ref

#include<iostream>
void swap(std::string &x,std::string &y);
int main(){
    std::string x="abcd";
    std::string y="efgh";
   
    swap(x,y);


    std::cout<<"x: "<<x<<"\n";
    std::cout<<"y: "<<y<<"\n";

    return 0;
}
void swap(std::string &x,std::string &y){

   std::string temp=x;
    x=y;
    y=temp;
}