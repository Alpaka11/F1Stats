#ifndef CREATORTRICOUSENNA_H
#define CREATORTRICOUSENNA_H

#include "../headers/CreatorTricou.h"

class CreatorTricouSenna : public CreatorTricou {
public:
    [[nodiscard]] std::unique_ptr<Tricou> creazaTricou(const std::string &marime) const override;
};

#endif // CREATORTRICOUSENNA_H
