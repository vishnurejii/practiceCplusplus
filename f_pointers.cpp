#include<iostream>

int main(){
    //pointers=variable that stores a memory address of another variable
    //  somtimes its easier to work with an addree
//& address of operator
//*dereference operator
    std::string name="john";
    std::string *pName=&name;

    int age=21;
    int *pAge=&age;

    std::string arr[5]={"abc","def","ghi"};
    std::string *pArr=arr;

    std::cout<<pAge<<"\n";
    std::cout<<*pAge<<"\n";

    std::cout<<pArr<<"\n";
    std::cout<<*pArr<<"\n";

    std::cout<<*pName<<"\n";
    std::cout<<pName<<"\n";

    return 0;

}