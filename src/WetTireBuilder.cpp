#include "../headers/WetTireBuilder.h"

void WetTireBuilder::buildType() {
    tire_.setType("Wet");
}

void WetTireBuilder::buildCompound() {
    tire_.setCompound("Full Wet");
}

void WetTireBuilder::buildSize() {
    tire_.setSize(18);
}

Tire WetTireBuilder::getResult() {
    return tire_;
}
