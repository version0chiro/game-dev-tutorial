#include <iostream>

int main()
{
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";

    int a = 4;
    int b = 10;
    int c = 2;

    a = 10;

    const int x = a + b + c;

    const int y = a*b*c;


    std::cout << x<<" "<<y;

    return 0;
}