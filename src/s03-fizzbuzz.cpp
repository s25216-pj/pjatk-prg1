#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>

auto main ( int argc , char * argv []) -> int
{
    if (argc == 0) {
        return 1;
    }

    int number = std::stoi (argv [1]);
    std::cout << number << "\n";
    if(number%3 == 0 && number%5 == 0){
        std::cout << "FizzBuzz" << "\n";
    }
    else if(number%3 == 0){
        std::cout << "Fizz" << "\n";
    }
    else if(number%5 == 0){
        std::cout << "Buzz" << "\n";
    }
    return 0;
}
