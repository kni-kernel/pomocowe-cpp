#include<iostream>
#include<deque>

// Program ma wytworzyć poniższy output.
// Kod można pisać tylko w wyznaczonych miejscach.

/*
    MIEJSCE NA KOD
*/

int main(){
    fifo<> ft;
    for(int i: {0,1,2,3,4})
        ft.push(i);

    fifo<int, std::deque> f = ft;

    std::cout << f.get() << "\n";
    std::cout << f.size() << "\n";

    for(fifo<>::storage_type::const_iterator i = f.begin(); i != f.end(); ++i)
        std::cout << *i << ",";

    std::cout << std::endl;
}
/*
  Wynik:
  fifo<T, StorageType>::fifo() [with T = int, StorageType = std::deque]
  0
  4
  1,2,3,4,
*/