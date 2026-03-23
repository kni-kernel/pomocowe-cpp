#include <iostream>

// Program ma wytworzyć poniższy output.

/* 
    MIEJSCE NA KOD 
*/

int main() {
  const ptr<A>  a(new A);
  const ptr<A> b;
  ptr<A> c(new A);

//   ptr<A>  _b_error = new A;      // Odkomentowanie powoduje błąd kompilacji 
//   a = a;               // Odkomentowanie powoduje błąd kompilacji 
//   const ptr<A> _c_error = a;     // Odkomentowanie powoduje błąd kompilacji 

  std::cout << (((*a).i, a->i))        << " " << ++c->i << " ";
  std::cout << (a == ptr<A>() ) << " " << (a != b) << "\n";
}

//1 2 0 1