#include <iostream>
#include <string>

#ifndef OOP_CIRCUIT_H
#define OOP_CIRCUIT_H

class Circuit {
private:
    std::string circuit_name, circuit_country;
    int circuit_corners{};
public:
    Circuit() = default;

    ~Circuit() = default;

    Circuit(std::string circuitName, std::string circuitCountry, int circuitCorners);

//    [[nodiscard]] const std::string &getCircuitName () const;

    //const std::string &getCircuitCountry () const ;

//    int getCircuitCorners () const ;

    friend std::ostream &operator<<(std::ostream &out, const Circuit &circuit);

    [[maybe_unused]] Circuit(const Circuit &circuit);

    Circuit &operator=(const Circuit &circuit);

    void newCorner();
};

#endif //OOP_CIRCUIT_H
