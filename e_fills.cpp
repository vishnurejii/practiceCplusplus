#include<iostream>


int main(){

    const int size=99;

    //fill()= fills a range of elements with a specified value fill(begin,end,value)
    std::string foods[size];

    fill(foods,foods+(size/3),"pizza");
     fill(foods+(size/3),foods+(size/2)*2,"apple");
      fill(foods+(size/2)*2,foods+size,"orange");

      for(std::string food:foods){
        std::cout<<food<<std::endl;
      }


      return 0;



}