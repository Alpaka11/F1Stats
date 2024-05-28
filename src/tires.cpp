#include "../headers/tires.h"

int Tire::totalTires = 0;

int Tire::getTotalTires() {
    return totalTires;
}

Tire::Tire() {
    totalTires++;
}

void Tire::setType(const std::string &type) {
    type_ = type;
}

void Tire::setCompound(const std::string &compound) {
    compound_ = compound;
}

void Tire::setSize(int size) {
    size_ = size;
}

void Tire::displayInfo() const {
    std::cout << "Tip: " << type_ << "\nCompound: " << compound_ << "\nMarime: " << size_ << " inch\n\n";
}
