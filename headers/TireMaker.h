#ifndef TIREMAKER_H
#define TIREMAKER_H

#include "../headers/tireBuilder.h"

class TireMaker {
public:
    void construct(TireBuilder &builder);

    [[maybe_unused]] void makeIntermediateTire();

    [[maybe_unused]] void makeWetTire();
};

#endif // TIREMAKER_H
