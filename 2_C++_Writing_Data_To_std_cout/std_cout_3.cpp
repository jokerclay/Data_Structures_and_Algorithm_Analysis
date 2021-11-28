#include <iostream>
#include <iomanip>

int main(){
    int a[100];

    // fill the array with recognizable values
    for(int i=0; i < sizeof(a)/sizeof(a[0]); ++i)
        a[i] = i * 10;

    for(int i=0; i < sizeof(a)/sizeof(a[0]); ++i){

        if( i != 0 && i%10 == 0 ){
            std::cout<< std::endl;
        }

        std::cout << a[i] << " ";
    }
    if(sizeof(a)/sizeof(a[0]) > 0)
        std::cout<< std::endl;
    return 0;
}
