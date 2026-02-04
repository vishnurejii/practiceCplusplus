#include<iostream>

int main(){
    int students=20;

    int students1=students+1;
    //students+=1;

    int students2=students-1;
    //students-=1


    int students3=students*5;
    // students*=5;

    students++;
    students--;

    int students4=students/2;
    // students/=2;

    std::cout<< students1<<std::endl;

    int remainder=students4%2;
    std::cout<<remainder<<std::endl;

    return 0;

}