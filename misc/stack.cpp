#include <iostream>
#include <stack>

int main(){
    std::stack<int>number;
    std::cout << "Start Size: "<<number.size()<<std::endl;
    number.push(3);
    number.push(4);
    std::cout << number.size() << std::endl;
return 0;
}
