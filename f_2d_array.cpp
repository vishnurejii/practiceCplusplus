#include<iostream>


int main(){
    std::string arr[][3]={{"car","bike","jeep"},
                        {"jcp","hummer","bus"},
                        {"scooty","cycle","auto"}};

    int row=sizeof(arr)/sizeof(arr[0]);
    int coloumn=sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}