#ifndef TIRE_H
#define TIRE_H

#include <iostream>
#include <string>

class Tire {
public:
    static int getTotalTires();

    Tire();

    void setType(const std::string &type);

    void setCompound(const std::string &compound);

    void setSize(int size);

    void displayInfo() const;

private:
    std::string type_;
    std::string compound_;
    int size_;
    static int totalTires;
};

#endif // TIRE_H
