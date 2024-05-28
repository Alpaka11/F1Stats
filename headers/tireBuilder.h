#ifndef TIREBUILDER_H
#define TIREBUILDER_H

#include "../headers/tires.h"

class TireBuilder {
public:
    virtual void buildType() = 0;

    virtual void buildCompound() = 0;

    virtual void buildSize() = 0;

    virtual Tire getResult() = 0;
};

#endif // TIREBUILDER_H
