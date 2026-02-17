#include<iostream>


int searchNum(int array[],int size,int search);
int main(){

    int array[]={10,20,30,40,50,6,0};

    int index;
    int search;
    int size=sizeof(array)/sizeof(array[0]);
    std::cout<<"enter the number you are searching for :\n";
    std::cin>>search;
    index=searchNum(array,size,search);
    if(index!=-1){
        std::cout<<"the searched int index number is :"<<index;
    }


}

int searchNum(int array[],int size,int search){

    for(int i=0;i<size;i++){
        if(array[i]==search){
            return i;
        }
    }
    return -1;

}