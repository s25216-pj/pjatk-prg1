#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>
#include <array>
#include <stdio.h>
#include <string.h>

auto main ( int argc , char * argv []) -> int
{
    if (argc == 0) {
        return 1;
    }
    auto isN = '\n';
    int isR = 0;
    auto isL = ' ';
    for (int x = 1; x < argc; x++){
        if (strcmp(argv[x],"-n") == 0){
            isN = ' ';
        }
        if (strcmp(argv[x],"-r") == 0){
            isR = 1;
        }
        if (strcmp(argv[x],"-l") == 0){
            isL = '\n';
        }
    }
    if(isR){
        for (int x = argc -1; x > 0; x--){
            std::cout<<argv[x]<<isL;
        }
    }else{
        for (int x = 1; x > argc; x++){
            std::cout<<argv[x]<<isL;
        }
    }
    std::cout<<isN;
    return 0;
}
