#include <iostream>
#include <utility>

template<typename T1, typename T2>
using my_pair = std::pair<T1, T2>;

template<typename T>
struct ptr {
    using value_type = T;

    T* p;

    explicit ptr(T* p) : p(p) {}

    ptr(const ptr&) = delete;
    ptr& operator=(const ptr&) = delete;

    T& operator*()  {
        return *p;
    }

    T* operator->() {
        return p;
    }

    // Niewymagany, lecz dobry pomysł
    // ~ptr() { delete p; }
};

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