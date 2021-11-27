#include <iostream>

void print_status(){
    std::cout <<"* good: " << std::cin.good() << std::endl;
    std::cout <<"* bad : " << std::cin.bad() << std::endl;
    std::cout <<"* fail: " << std::cin.fail() << std::endl;
    std::cout <<"* eof : " << std::cin.eof() << std::endl;
}

//BAD EXAMPLE

int main(){

    int value;

    print_status();

    while(!std::cin.eof()){

        std::cin >>value;

        std::cout << "*** value =  "  <<value << std::endl;
        print_status();
    }


    return 0;
}
