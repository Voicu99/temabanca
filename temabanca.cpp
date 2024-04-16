// temabanca.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int sumaInCont, sumaRetrasa, sumaRamasa;

    // Citim suma din contul bancar
    std::cout << "Introdu suma din contul tau bancar: ";
    std::cin >> sumaInCont;

    // Citim suma pe care dorim sa o retragem
    std::cout << "Introdu suma pe care doresti sa o retragi: ";
    std::cin >> sumaRetrasa;

    // Verificăm dacă suma din cont este suficientă pentru retragere
    sumaRamasa = sumaInCont - sumaRetrasa;
    bool sumaSuficienta = sumaRamasa >= 0;

    // Afisam suma ramasa doar daca suma este suficienta
    std::cout << "Suma ramasa in contul tau dupa retragere este: " << sumaRamasa * sumaSuficienta << std::endl;

  

    return 0;
}
