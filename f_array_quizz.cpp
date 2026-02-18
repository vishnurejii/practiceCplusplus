#include<iostream>

int main(){

    std::string questions[]={"what's the sum of 10+20: ?",
                                "what's the color of sky: ?",
                                    "how many zeros are there in 100: ?",
                                        "1km is ___m: ?"};

    std::string options[][4]={{"a. 10","b. 20","c. 30","d. 40"},
                                {"a. blue","b. green","c. yellow","d. red"},
                                    {"a. 2","b. 3","c. 4","d. 0"},
                                        {"a. 10m","b. 100m","c. 1000m","d. 0m"}};

    char answers[]={'C','A','A','C'};

     char guess;
     double score=0;

    int size_qestions=sizeof(questions)/sizeof(questions[0]);

     std::cout<<"********Kaun Banega Crorepati************\n";

    for(int i=0;i<size_qestions;i++){

        std::cout<<questions[i]<<std::endl;
        std::cout<<"\n";

        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){

            std::cout<<options[i][j]<<std::endl;
        }

       
        std::cin>>guess;
        guess=toupper(guess);

        if(guess==answers[i]){
            std::cout<<"correct answer"<<std::endl;
            score++;
        }else{
            std::cout<<"wrong, correct answer is "<<answers[i]<<std::endl;
        }

    
    }

    std::cout<<"your score: "<<(score/size_qestions)*100<<"%";


    return 0;

}