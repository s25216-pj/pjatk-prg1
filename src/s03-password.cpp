#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>

std::string ask_user_for_pass ( std::string prompt)
{
    std::cout << prompt ;
    auto n = std::string {};
    std::getline ( std::cin , n );
    return n;
}

auto main ( int argc , char * argv []) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto const pass = argv [1];
    while (ask_user_for_pass ("password: ") != pass){
        ask_user_for_pass ("password: ");
    }
    std::cout << "ok!\n ";
    return 0;
}
