#include <stddef.h>
#include <iostream>
 using Size = ptrdiff_t;

 template <class Item, size_t n>
 constexpr auto x_items (Item (&) [n]) noexcept
 ->Size
 {return n;}

int main()
{
int const a[] = {1,6,8,3,7,2,5,2,56};
Size const n  = x_items (a);

std::cout << n << std::endl;
}








