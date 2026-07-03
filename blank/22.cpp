#include <iostream>

/* Można użyć tylko std::pair z STLa */

/* UZUPEŁNIJ 1 */

int main() {
    using Float_t = double;
    using Type_t = ptr<my_pair<Float_t, Float_t>>;
    
    Type_t t1{new Type_t::value_type{}};

    std::cout << (*t1).first << ' ' << t1->second << "\n";

    // Type_t t2 = t1;                          // błąd kompilacji
    // Type_t t3; t3 = t1;                      // błąd kompilacji
    // Type_t t4 = new Type_t::value_type();    // błąd kompilacji

    (*t1).first = Type_t::value_type::first_type{1};
    t1->second = Type_t::value_type::second_type{3.14};
    
    std::cout << (*t1).first << ' ' << t1->second << "\n";
}

// output:
// 0 0
// 1 3.14