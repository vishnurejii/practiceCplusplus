#include<iostream>

int main(){
    std::string name;

    std::cout<<"enter your name :";
    std::cin>>name;

    if(name.length()>12 || name.empty()){
        std::cout<<"name can't be more than 12 character or empty";
    }else{
        name.append("@gmail.com");
        std::cout<<"welcome"<<" your username is "<<name<<std::endl;
    }



    std::string word="apple";

    word.at(2);
    std::cout<<word<<std::endl;

    word.insert(0,"l");
    std::cout<<word<<std::endl;

    word.erase(1,2);
    std::cout<<word;
     return 0;

}