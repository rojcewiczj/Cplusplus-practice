#include <iostream>
#include <ctime>

int main()
{
    std::cout << time(NULL);
    std::cout <<"your trying to break into a secure server \n";
    std::cout <<"Enter the correct code to continue... \n";

    int CodeA= 4;
    int CodeB= 6;
    int CodeC = 8;
    
    int Sum = CodeA + CodeB + CodeC;
    int Product = CodeA * CodeB * CodeC;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add up to: " << Sum << std::endl;
    std::cout << "The product is: " << Product << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;
    
    int GuessSum = GuessA + GuessB + GuessC;
   
    if(GuessSum == Sum){
        std::cout << "You Win!";
    }
    else{
        std::cout << "You Lose!";
    }
    return 0;
}