#include <utility>

#include "../headers/circuit.h"

Circuit::Circuit(std::string circuitName, std::string circuitCountry, int circuitCorners) : circuit_name(
        std::move(circuitName)), circuit_country(std::move(circuitCountry)), circuit_corners(circuitCorners) {
}

/*const std::string &Circuit::getCircuitName () const {
    return circuit_name;
}

const std::string &Circuit::getCircuitCountry () const {
    return circuit_country;
}

int Circuit::getCircuitCorners () const {
    return circuit_corners;
} */

std::ostream &operator<<(std::ostream &out, const Circuit &circuit) {
    out << "Nume circuit: " << circuit.circuit_name << "si are un numar de " << circuit.circuit_corners << " viraje"
        << std::endl << "---------" << std::endl;
    return out;
}

[[maybe_unused]] Circuit::Circuit(const Circuit &circuit) {
    this->circuit_corners = circuit.circuit_corners;
    this->circuit_country = circuit.circuit_country;
    this->circuit_name = circuit.circuit_name;
}

Circuit &Circuit::operator=(const Circuit &circuit) {
    this->circuit_corners = circuit.circuit_corners;
    this->circuit_country = circuit.circuit_country;
    this->circuit_name = circuit.circuit_name;
    return *this;
}

void Circuit::newCorner() {
    this->circuit_corners += 1;
}