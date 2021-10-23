#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>

auto main ( int argc , char * argv []) -> int
{
    if (argc == 0) {
        return 1;
    }

    int number = std::stoi (argv [1]);
    for (int i = number; i >= 0; i--) {
      std::cout << i << "...." << "\n";
    }
    return 0;
}
