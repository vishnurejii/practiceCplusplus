#include<iostream>
#include <iomanip>


void showBalance(double balance);
double depositeAmount();
double withdrawAmount(double balance);

int main(){

    double balance=1000;
    int choice=0;

  do{ std::cout<<"enter your choice :\n";
    std::cout<<"1.check your balance\n";
    std::cout<<"2.to deposite money\n";
    std::cout<<"3.to withdraw the amout\n";
    std::cout<<"4.exit\n";
    std::cin>>choice;

    switch (choice)
    {
    case 1: showBalance(balance);
        break;
    case 2: balance+=depositeAmount();
            showBalance(balance);
        break;
    case 3: balance-=withdrawAmount(balance);
            showBalance(balance);
        break;
    case 4: 
        std::cout<<"thank you for visiting";
        break;
    
    
    default:
        std::cout<<"invalid input";
        break;
    }}while (choice != 4);
    
   
}
void showBalance(double balance){
   std::cout<<"your balance is :"<< std::setprecision(2)<<std::fixed<<balance;
}
double depositeAmount(){
    double amount=0;

    std::cout<<"enter amount to be deposite :";
    std::cin>>amount;
    if(amount >0){
         return amount;
    }else{
        std::cout<<"something went wrong";
    }
   
}
double withdrawAmount(double balance){
    double amount=0;
   
    std::cout<<"enter amount to be withdrow :";
    std::cin>>amount;
    if(amount <= balance){
        return amount;
    }else{
        std::cout<<"insufficient balance";
    }
    
}