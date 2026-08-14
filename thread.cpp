#include <iostream>
#include <thread>

void randomFunction(int a){
    std::cout << "Hello from other thread\n";
    std::cout << "arg is" << a << std::endl;
}

int main(){
    std::thread mThread(&randomFunction, 100);
    std::cout << "Hello from thread."<<std::endl;
}
