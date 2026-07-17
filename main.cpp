#include <iostream>
#include <chrono>

int main()
{
     int* my_var = new int(32); // allocated my_var on heap
     int copy_myvar = 0;

    const int iters = 100000000;

    auto start = std::chrono::high_resolution_clock::now(); //started count

    for (int i = 0 ; i < iters ; ++i){
        copy_myvar = *my_var;
    }

    auto stop = std::chrono::high_resolution_clock::now(); //stopped count

    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start); //deducing duration from stop - start

    double av_dura = static_cast<double>(duration.count())/iters; //got averge duration per iteration
    std::cout << av_dura << std::endl;
   
    delete my_var; //deleted my_var 

     /* stats 
    output = 0.28024ns on compilation with "-01"
    1.93818ns withought optimization*/

    return 0;
}