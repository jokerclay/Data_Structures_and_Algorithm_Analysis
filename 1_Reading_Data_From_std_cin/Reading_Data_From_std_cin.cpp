#include <iostream>

//BAD EXAMPLE

int main(){

    int value;

    while(!std::cin.eof()){

        std::cin >>value;

        std::cout << "*** value =  "  <<value << std::endl;
    }
    return 0;
}


/**
 * there is 2 problems :
 * 1. you should try to read the input data before you have a problem
 *    要在错误出现之前尝试读入数据
 * 2. ctrl-d it print out the value again
 *    按 ctrl-d 之前的数据又打印了一次
 * 3. 当用户输入 不是 int 输入 char/ string.. 程序出错
 *
 *
 * */
