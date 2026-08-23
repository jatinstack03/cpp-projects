#include<iostream>


int main() 
{
   std::string questions[] = {"1. what year was c++ created ? ",
                              "2. who inverted c++",
                              "3. what is the predecessor of c++? ",
                              "4. is the earth flat?"};


    std::string options[][4] = {{"A.1969","B.1975","C.1985","D.1989"},
                               {"A.Guido van rossum","B. bjarne stroustrup","C.john Cormack","D.Mark zuckerburg"},
                               {"A. C","B.c++","C.c--","D.c#"},
                               {"A.yes","B.no","C.may be","D.most probaly"}};

     char answerKey[] = {'C','B','A','B'};


     int size = sizeof(questions)/sizeof(questions[0]);
     char guess;
     int score;

     for(int i = 0; i < size;i++){
        std::cout << "*****************" << '\n';
        std::cout << questions[i] << '\n';
         std::cout << "*****************" << '\n';
         
         for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]);j++) {

            std::cout << options[i][j] << '\n';

         }

         std::cin >> guess;
         guess = toupper(guess);

         if(guess  = answerKey[i]){
            std::cout << "CORRECT \n";
            score++;

         }else{
            std::cout << "Wrong : \n";
            std::cout << "Answer :" << answerKey[i] << '\n';
            
         }
     }
     
    return 0;

}