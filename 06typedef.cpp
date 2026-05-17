#include<iostream>
#include<vector>

// typedef = RESERVED KEYWORD USED TO CREATE AN ADDITIONAL NAME
//          (ALIAS) FOR ANOTHER DATA TYPE.
//          NEW IDENTIFIER FOR AN EXISTING TYPE.
//          HELPS WITH READBILITY AND RESUCES TYPOS.
//          USE WHEN THERE IS A CLEAR BENEFIT REPLACED WITH "USING"(WORK BETTER / TEMLATES)


// typedef std::vector<std::pair<std::string,int>> pairlist_t

//typedef std::vector<std::pair<std::string,int>> pairlist_t
// typedef std::string pairlist_t;
// typedef int number_t;



using pairlist_t = std::string;
using number_t = int;

int main()
{
    pairlist_t firstName = "Bro";
    number_t age = 21;

    std::cout<< age << std::endl;

    std::cout << firstName << std::endl;

    return 0;
}