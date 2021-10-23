#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>
#include <ctime>

auto ask_user_for_integer ( std :: string prompt ) -> int
{
    std::cout << prompt;
    auto n = std::string {};
    std::getline ( std::cin , n );
    return std::stoi (n );
}

auto main () -> int
{
    srand (time (0));
    int r = rand() % 100 + 1;
    int guess = ask_user_for_integer ("guess: ");
    while (guess != r){
        if (guess > r){
            std::cout << "number to big!\n";
        }
        else if (guess < r){
            std::cout << "number to small!\n";
        }
        guess = ask_user_for_integer ("guess: ");
    }
    std::cout << "ok!\n ";
    return 0;
}
