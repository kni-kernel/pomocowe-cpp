#include <iostream>

// Program ma wytworzyć poniższy output.

/* 
    MIEJSCE NA KOD 
*/

int main()
{
    Box<int> b_i {3};        
    Obj& r_1 = b_i; 
    r_1.Draw(); 
    int i = b_i;
    Box<double> b_d {3.4} ;
    Obj& r_2 = b_d;
    r_2.Draw(); 
    double d = b_d;
    Box<Box<int>> bb_i {3} ;
    const Obj& r_3 = bb_i;
    r_3.Draw(); 
    Box<int> br_i = bb_i;
    Box<Box<double>> bb_d {3.4} ; 
    const Obj& r_4 = bb_d;
    r_4.Draw();
    Box<double> b_a = bb_d;

    // Box<int> _ = 3; //Odkomentowanie powoduje b��d kompilacji

}
/*
void Box<T>::Draw() const [with T = int] --> 3
void Box<T>::Draw() const [with T = double] --> 3.4
void Box<Box<K> >::Draw() const [with T = int] --> 3
void Box<Box<K> >::Draw() const [with T = double] --> 3.4
*/