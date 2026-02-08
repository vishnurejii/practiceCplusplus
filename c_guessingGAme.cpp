#include<iostream>
#include<ctime>

int main(){

    srand(time(NULL));
    int num=(rand()%100)+1;

    int guess,tries;

    do
    {
        std::cout<<"enter a num between (1-100 :)\n";
        std::cin>>guess;
         tries++;

        if(guess > num){
            std::cout<<"too high!";
        }else if (guess < num)

        {
            std::cout<<"too low!";
        }else{
            std::cout<<"CORRECT # of tries "<<tries;
        }
       
        
    } while (guess != num);

    return 0;
    
}