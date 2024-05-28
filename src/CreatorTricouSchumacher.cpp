#include "../headers/CreatorTricouSchumacher.h"
#include "../headers/TricouSchumacher.h"

std::unique_ptr<Tricou> CreatorTricouSchumacher::creazaTricou(const std::string &marime) const {
    return std::make_unique<TricouSchumacher>(marime);
}
