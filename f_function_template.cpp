//for same datatype
// #include<iostream>
// template<typename T>


// T max(T num1,T num2){

//     return(num1>num2)?num1:num2;

// }
// int main(){

//     std::cout<<max(1,2);
     
// }

//function template=describes what a function looks like.can be used to generate
//as manuy overloaded function as needed,
//each using diff data types

//for diff data types

#include<iostream>
template<typename T,typename U>


auto max(T num1,U num2){

    return(num1>num2)?num1:num2;

}
int main(){

    std::cout<<max(1,2.1);
     
}


