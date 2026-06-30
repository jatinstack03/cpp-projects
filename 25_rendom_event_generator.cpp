#include<iostream>
#include<ctime>


int main() 
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch(randNum)
    {
        case 1: std ::cout << "You win a bumper sticker: \n";
               break; 
        case 2: std ::cout << "You win a bumper t - shirt: \n";
               break; 
        case 3:std ::cout << "You win a  free lunch \n";
               break; 
        case 4:std ::cout << "You win a gift card: \n";
               break; 
        case 5:std ::cout << "You win a concert tickets : \n";
               break; 


    }

}
//Why Choose <random> Over rand()?Quality: The rand() function utilizes
// a simple Linear Congruential Generator (LCG) which produces 
//highly predictable bit-patterns.Range Flaws: rand() % N relies on modulo arithmetic, 
//which subtly distorts probability distributions if N does not evenly divide RAND_MAX.

//Reliability: The engine std::mt19937 features an exceptionally long period (2¹⁹⁹³⁷-1) 
//before repeating a sequence.If you would like to expand this system, 
//let me know:Will your generator need to persist or save state
// so players get the same events on a replayed seed?
//Do certain events have prerequisites
// (e.g., event B can only happen if event A already happened)?
//Should events be completely removed from the pool once they occur?
