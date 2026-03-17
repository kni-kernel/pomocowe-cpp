int main()
{
  A a ("Tekst"); B b {123};
  std::cout<< "a:\t"<<a<<"; b:\t"<<b<<"\n";
  const is_printable & a_r = a; const is_printable & b_r = b;
   std::cout<< "a_r:\t"<<a_r<<"; b_r:\t"<<b_r<<"\n";
}

/*
a:      Tekst; b:       123
a_r:    Tekst; b_r:     123
*/
