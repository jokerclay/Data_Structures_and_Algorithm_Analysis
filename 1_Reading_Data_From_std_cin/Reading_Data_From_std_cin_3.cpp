/**
 *
 * 好的设计
 *
 * */
#include <iostream>

void print_status(){
#if 0
    std::cout <<"* good: " << std::cin.good() << std::endl;
    std::cout <<"* bad : " << std::cin.bad() << std::endl;
    std::cout <<"* fail: " << std::cin.fail() << std::endl;
    std::cout <<"* eof : " << std::cin.eof() << std::endl;

#else
    std::cout << "* std::cin: "
        << (std::cin.good() ? 'G' : '-')
        << (std::cin.bad() ? 'B' : '-')
        << (std::cin.fail() ? 'F' : '-')
        << (std::cin.eof() ? 'E' : '-')
        << std::endl;
#endif
}

int main(){

    int x;
    std::cin >> x;
    print_status();

    while(std::cin.good()){
        // good means not bad not fail not eof
        std::cout << "*** x =  "  << x << std::endl;
        std::cin >> x;
        print_status();
    }

    std::cerr << "Program finishing ... " << std::endl;
    print_status();

    if(!std::cin.eof()){
        // 按下了 ctrl-d 
        std::cout << " Warning: Terminsting due to input stream error " << std::endl;
    }

    return 0;
}

