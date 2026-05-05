#include <iostream>
#include <stdexcept>

// Program ma wytworzyć poniższy output.
// Kod można pisać tylko w wyznaczonych miejscach.

/*
    MIEJSCE NA KOD
*/


int main()
{
    array<box<>> a = {5, 6, 7}; // Inicjalizacja tablicy z wartościami
    const array<box<>> b = a;   // Kopiowanie tablicy

    a[-1] = array<box<>>::value_type{2}; // Ustawienie wartości w ostatnim elemencie
    a[-a.size()] = box<>::value_type{3}; // Ustawienie wartości w pierwszym elemencie

    print(a); // Wydrukowanie tablicy a
    print(b); // Wydrukowanie tablicy b
}