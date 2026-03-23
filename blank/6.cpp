#include<iostream>
#include<array>
#include<string>
#include <memory>

// Program ma wytworzyć poniższy output.
// Program ma nie leakować pamięci.

/* 
    MIEJSCE NA KOD 
*/

int main()
{
  std::array<std::unique_ptr<int>,2> a = {
      std::unique_ptr<int>(new int {1}),
      std::unique_ptr<int>(new int {2})
      };

  my_print_el("----------------\n");
  my_print(a,";"," -> ");
  my_swap(a[0],a[1]);
  my_print(a,";"," -> ");
  my_swap(*a[0],*a[1]);
  my_print(a);
  my_print_el("----------------");
}
//[1;2;] -> [2;1;] -> [1;2;]