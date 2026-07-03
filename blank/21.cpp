#include <iostream>

/* Nie można używać kontenerów z STLa: std::vector, std::array itp. (inne rzeczy można) */

/* UZUPEŁNIJ 1 */

void print_to_cout(/*UZUPEŁNIJ 2*/ a) {
    for(auto idx = 0; idx < N; ++idx){
        std::cout <<"a["<< idx << "], " << a[idx] << "; ";
    }
    std::cout<<"\n";
}

int main() {
    array<int> a{5, 6, 7};
    const array b = a;
    
    a[array<int>::size - 1] = 3;
    a[0] = array<int>::value_type{2};

    std::cout << "Wypisywanie: "; print_to_cout(a);
    std::cout << "Wypisywanie: "; print_to_cout(b);
}

// output:
// Wypisywanie: a[0], 2; a[1], 6; a[2], 3; 
// Wypisywanie: a[0], 5; a[1], 6; a[2], 7;