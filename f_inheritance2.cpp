#include<iostream>

class Shape{
    public:

    double area;
    double volume;
};

class Cube:public Shape{
    public:
    double side;

    Cube(double side){
        this->side=side;
        this->area=side * side * 6;
        this->volume=side * side * side;
    }
};

class Square:public Shape{
    public:
    double radius;

    Square(double radius){
        this->radius=radius;
        this->area=4*3.14*(radius*radius);
        this->volume=(4/3.0)*3.14*(radius*radius*radius);
    }
};

int main(){

    Cube cube(5);
    std::cout<<cube.area<<"\n";
    std::cout<<cube.volume<<"\n";

return 0;

}