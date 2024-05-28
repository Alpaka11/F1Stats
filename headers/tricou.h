#ifndef TRICOU_H
#define TRICOU_H

#include <string>

class Tricou {
protected:
    std::string marime;

public:
    explicit Tricou(const std::string &marime);

    virtual void afiseazaDetalii() const = 0;
};

#endif // TRICOU_H
