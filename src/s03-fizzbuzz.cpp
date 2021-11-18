#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>

auto main ( int argc , char * argv []) -> int
{
    if (argc == 0) {
        return 1;
    }
    int number = std::stoi (argv [1]);

    for(int i = number; i > 0; i--){
        std::cout << i;
        if(i%3 == 0 && i%5 == 0){
            std::cout << " FizzBuzz";
        }
        else if(i%3 == 0){
            std::cout << " Fizz";
        }
        else if(i%5 == 0){
            std::cout << " Buzz";
        }
        std::cout  << "\n";
    }
    return 0;
}
