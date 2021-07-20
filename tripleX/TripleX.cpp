#include <iostream>

int main()
{
    // print the welcome message to the terminal
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
    std::cout << std::endl;

    // declare tthe 3 number code
    int CodeA = 4;
    int CodeB = 10;
    int CodeC = 2;

    // find CodeSum and CodeProduct
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << " There are three numbers in the code \n";
    std::cout << " The code add upto " << CodeSum << std::endl;
    std::cout << " The code multiplCodeProduct upto " << CodeProduct << std::endl;

    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cin>>PlayerGuessA>>PlayerGuessB>>PlayerGuessC;

    int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "You are a true agent!";
    }else{
        std::cout << "You are a false agent!";
    }
    // std::cout << "Player Guess: " << PlayerGuessA << " " << PlayerGuessB << " " << PlayerGuessC << std::endl;

    return 0;
}