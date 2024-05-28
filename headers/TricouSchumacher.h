#ifndef TRICOUSCHUMACHER_H
#define TRICOUSCHUMACHER_H

#include "../headers/tricou.h"

class TricouSchumacher : public Tricou {
public:
    explicit TricouSchumacher(const std::string &marime);

    void afiseazaDetalii() const override;
};

#endif // TRICOUSCHUMACHER_H
