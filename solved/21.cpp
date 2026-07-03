#include <iostream>

template<class T = int, size_t N = 3>
struct array {
    using value_type = T;
    static constexpr size_t size = N;

    T data[N];
    
    auto& operator[](this auto&& self, auto i) { // C++23
        return self.data[i];
    }
};

template<class T, size_t N>
void print_to_cout(const array<T, N>& a) {
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