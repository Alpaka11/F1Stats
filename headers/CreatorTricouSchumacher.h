#ifndef CREATORTRICOUSCHUMACHER_H
#define CREATORTRICOUSCHUMACHER_H

#include "../headers/CreatorTricou.h"

class CreatorTricouSchumacher : public CreatorTricou {
public:
    [[nodiscard]] std::unique_ptr<Tricou> creazaTricou(const std::string &marime) const override;
};

#endif // CREATORTRICOUSCHUMACHER_H
