#ifndef TRICOUSENNA_H
#define TRICOUSENNA_H

#include "../headers/tricou.h"

class TricouSenna : public Tricou {
public:
    explicit TricouSenna(const std::string &marime);

    void afiseazaDetalii() const override;
};

#endif // TRICOUSENNA_H
