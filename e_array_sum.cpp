#include<iostream>
double getTotal(double numbers[],int size);
int main(){

    double array[]={12.99,55.25,65.68,48.36};
    int size=sizeof(array)/sizeof(array[0]);
    double total=getTotal(array,size);

    std::cout<<"total :$"<<total;

    return 0;
}
double getTotal(double numbers[],int size){
    double total=0;
    for(int i=0;i<size;i++){
        total+=numbers[i];
    }
    return total;
}