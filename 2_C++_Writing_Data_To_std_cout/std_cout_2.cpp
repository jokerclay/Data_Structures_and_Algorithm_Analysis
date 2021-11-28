#include <iostream>
#include <iomanip>

int main(){
    int a[101];

    // fill the array with recognizable values
    for(int i=0; i < sizeof(a)/sizeof(a[0]); ++i)
        a[i] = i * 10;

    for(int i=0; i < sizeof(a)/sizeof(a[0]); ++i){
        std::cout << a[i] << " ";

        if( i != 0 && i%10 == 9 ){
            std::cout<< std::endl;
        }
    }
    if(sizeof(a)/sizeof(a[0]) % 10 != 0)
        std::cout<< std::endl;
    return 0;
}
