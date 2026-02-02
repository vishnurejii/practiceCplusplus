#include<iostream>

//type def use to avoid writing long declaration of datatype
typedef std::string text_t;
typedef int number_t;
int main(){

    //typedef=reserved keyword used to create an additional name
    //(alias) for another data type.
    //new identifier for an existing type
    //helps with readability and reduced typos use
    //when there is a clear benifit
    //replaced with 'using'(work better w/ templates)

    text_t firstName="Bro";

    number_t age=20;

    std::cout<< firstName << std::endl;
    std::cout<< age <<std::endl;

    return 0;

}