#include "../headers/CreatorTricouSenna.h"
#include "../headers/TricouSenna.h"

std::unique_ptr<Tricou> CreatorTricouSenna::creazaTricou(const std::string &marime) const {
    return std::make_unique<TricouSenna>(marime);
}
