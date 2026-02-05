 #include<iostream>

 int main(){

    char op;
    double num1,num2;

    std::cout<<"*********calcutlator**********";

    std::cout<<"enter either(+,-,*,/)";
    std::cin>>op;

    std::cout<<"enter num1 :";
        std::cin>>num1;
        std::cout<<"enter num2 :";
        std::cin>>num2;

    double result;

    switch (op)
    {
    case '+':
        result=num1+num2;
        std::cout<<"addition value: "<<result;
        
        break;
     case '-':
        result=num1-num2;
        std::cout<<"sub value: "<<result;
        
        break;
     case '*':
        result=num1*num2;
        std::cout<<"mul value: "<<result;
        
        break;
     case '/':
        result=num1/num2;
        std::cout<<"div value: "<<result;
        
        break;
    default:
        std::cout<<"enter a valid operator";
    
    return 0;
    
    }
 }