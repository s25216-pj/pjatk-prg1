#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>
#include <array>
#include <stdio.h>
#include <string.h>
auto ask_user_for_beer ( int bootles)
{
    for (int x = bootles; x > 0; x--){
        std::cout<<x<<" bottles of beer on the wall, "<<x<<" bottles of beer \n";
        x--;
        std::cout<<"Take one down, pass it around, "<<x<<" bottles of beer on the wall, "<<x<<" bottles of beer \n";
    }
    std::cout<<"No more bottles of beer on the wall, no more bottles of beer.\n";
    std::cout<<"Go to the store and buy some more, "<<bootles<<" bottles of beer on the wall... ";
    return 0;
}
auto main ( int argc , char * argv []) -> int
{
    if(argc == 0){
        return 0;
    }
    if (argv[1]) {
        ask_user_for_beer(std::atoi(argv[1]));
    }else{
    ask_user_for_beer(99);
    }

    return 0;
}
