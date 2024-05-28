#ifndef INTERTIREBUILDER_H
#define INTERTIREBUILDER_H

#include "../headers/tireBuilder.h"

class InterTireBuilder : public TireBuilder {
public:
    void buildType() override;

    void buildCompound() override;

    void buildSize() override;

    Tire getResult() override;

private:
    Tire tire_;
};

#endif // INTERTIREBUILDER_H
