#include<iostream>

int main(){
    //type conversion=concersion of one data type to another
    //implicit=automatic
    //explicit=precede value with new data type
     char a=100;

     std::cout<<a<<std::endl;
    int correct=8;
    int questions=10;

    double score=correct/(double)questions*100;

    std::cout<<score<<"%";

    return 0;
}