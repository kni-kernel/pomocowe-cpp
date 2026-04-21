#include <iostream>
#include <string>

// Program ma wytworzyć poniższy output.
// Kod można pisać tylko w wyznaczonych miejscach.

/*
    MIEJSCE NA KOD    
*/

int main(){
    A a("var_a"),b("var_b");

    std::cout<<"(1) ->"
                << "a.s ="<<a.s<<" b.s = "<<b.s<<std::endl;
    A c = a;
    std::cout<<"(2) ->"
                << "a.s ="<<a.s<<" b.s = "<<b.s<<std::endl;
    a = b;
    std::cout<<"(3) ->"
                << "a.s ="<<a.s<<" b.s = "<<b.s<<std::endl;
    a = f(A{"var_c"});

    std::cout<<"(4) ->"
                << "a.s ="<<a.s<<" b.s = "<<b.s<<std::endl;
    b = std::move(a);

    std::cout<<"(5) ->"
                << "a.s ="<<a.s<<" b.s = "<<b.s<<std::endl;
    b - std::move(b);
}

/*output:
Tworzenie: var_a
Tworzenie: var_b
(1) -> a.s = var_a  b.s = var_b
Kopiowanie wersja 2
(2) -> a.s = var_a  b.s = var_b
Kopiowanie wersja 1
(3) -> a.s = var_b  b.s = var_b
Tworzenie: var_c
Przenoszenie wersja 2
Przenoszenie werjsa 1
(4) -> a.s = var_c  b.s = var_b
Przenoszenie wersja 1
(5) -> a.s =   b.s = var_b
*/