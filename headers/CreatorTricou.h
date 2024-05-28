#ifndef CREATORTRICOU_H
#define CREATORTRICOU_H

#include <memory>
#include <string>
#include "../headers/tricou.h"

class CreatorTricou {
public:
    [[nodiscard]] virtual std::unique_ptr<Tricou> creazaTricou(const std::string &marime) const = 0;
};

#endif // CREATORTRICOU_H
