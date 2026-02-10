#include<iostream>
#include<ctime>

void yourChoice(char player);
char computerChoice(char computer);
void final(char player,char computer);
int main(){

    std::cout<<"************rock paper scissors game***********\n";
    char player;
    char computer;
  do{  
    
    std::cout<<"select one from the following \n";
    std::cout<<"r for rock\n";
    std::cout<<"p for paper\n";
    std::cout<<"s for scissors\n";
        std::cin>>player;
    }while (player!='r' && player!='p' && player!='s' );

    yourChoice(player);
    computer=computerChoice(computer);
    final(player,computer);


   return 0;
    

}
void yourChoice(char player){
    switch (player)
    {
    case 'r':
        std::cout<<"your choice is rock\n";
        break;
    case 's':
        std::cout<<"your choice is scissors\n";
        break;
    case 'p':
        std::cout<<"your choice is paper\n";
        break;
    
    default:
    std::cout<<"enter a valid letter";
        break;
    }
    
}
char computerChoice(char computer){

    srand(time(0));
    int numChoice=(rand()%3)+1;

    switch (numChoice)
    {
    case 1: computer='r';break;
    case 2: computer= 'p';break;
    case 3: computer= 's';break;
    }

    switch (computer)
    {
    case 'r':
        std::cout<<"computer choice is rock\n";
        break;
    case 'p':
        std::cout<<"computer choice is paper\n";
        break;
    case 's':
        std::cout<<"computer choice is scissors\n";
        break;
    }
    return computer;
    
}

void final(char player,char computer){

    switch (player)
    {
    case 'r': if(computer=='r'){
        std::cout<<"its a tie\n";
    }else if(computer=='s'){
        std::cout<<"you win\n";
    }else{
        std::cout<<"you lose\n";
    }
    break;

    case 's': if(computer=='r'){
        std::cout<<"you win\n";
    }else if(computer=='s'){
        std::cout<<"its a tie\n";
    }else{
        std::cout<<"you lose\n";
    }
    break;


    case 'p': if(computer=='r'){
        std::cout<<"you win\n";
    }else if(computer=='s'){
        std::cout<<"you lose\n";
    }else{
        std::cout<<"its a tie\n";
    }
    break;
    
    default:
        break;
    }

}