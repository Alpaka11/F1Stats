#include "../headers/InterTireBuilder.h"

void InterTireBuilder::buildType() {
    tire_.setType("Inter");
}

void InterTireBuilder::buildCompound() {
    tire_.setCompound("Intermediate");
}

void InterTireBuilder::buildSize() {
    tire_.setSize(18);
}

Tire InterTireBuilder::getResult() {
    return tire_;
}
