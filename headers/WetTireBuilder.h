#ifndef WETTIREBUILDER_H
#define WETTIREBUILDER_H

#include "../headers/tireBuilder.h"

class WetTireBuilder : public TireBuilder {
public:
    void buildType() override;

    void buildCompound() override;

    void buildSize() override;

    Tire getResult() override;

private:
    Tire tire_;
};

#endif // WETTIREBUILDER_H
