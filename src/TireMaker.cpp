#include "../headers/TireMaker.h"

void TireMaker::construct(TireBuilder &builder) {
    builder.buildType();
    builder.buildCompound();
    builder.buildSize();
}
