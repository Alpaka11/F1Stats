#include "../headers/TricouSchumacher.h"
#include<iostream>

TricouSchumacher::TricouSchumacher(const std::string& marime) : Tricou(marime) {}

void TricouSchumacher::afiseazaDetalii() const {
    std::cout << "Tricou Schumacher - Marime: " << marime << std::endl;
}
