#include <iostream>
#include <list>
#include <functional>

// Program ma wytworzyć poniższy output.

/* 
    MIEJSCE NA KOD 
*/


int main(){
    const auto cl = {1,2,3,4,5,6,7};

    print_to_if(std::cout<<"All: ", begin(cl), end(cl), f1);
    print_to_if(std::cout<<"All: ", begin(cl), end(cl), f2);

    int add_value{-1};
    std::list<int> cl2 = {7,6,5,4,3,2,1};
    change(begin(cl2), end(cl2), f3{add_value});
    print_to_if(std::cout << "All  ", begin(cl2), end(cl2), f1);
}
/*
All: 1 2 3 4 5 6 7 
All: 2 4 6 
All  6 5 4 3 2 1 0 
*/