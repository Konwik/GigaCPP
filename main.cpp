#include <iostream>
#include <chrono>

int main()
{
     int* my_var = new int(32);
     int* copy_myvar;

    const int iters = 100000000;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0 ; i < iters ; ++i){
        copy_myvar = my_var;
    }

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start);

    double av_dura = static_cast<double>(duration.count())/iters;
    std::cout << av_dura << std::endl;
    /*  output = 0.3154ns on compilation with "-01"
        2.5152ns withought optimization*/

    return 0;
}