#include "../headers/TricouSenna.h"
#include<iostream>

TricouSenna::TricouSenna(const std::string &marime) : Tricou(marime) {}

void TricouSenna::afiseazaDetalii() const {
    std::cout << "Tricou Senna - Marime: " << marime << std::endl;
}
