#ifndef OOP_CURRENTDRIVER_H
#define OOP_CURRENTDRIVER_H

#include "driver.h"

class CurrentDriver : public Driver {
private:
    int currentChampionshipPoints;


public:
    virtual ~CurrentDriver() = default;

    CurrentDriver(const std::string &driverName, const std::string &driverTeam, int driverWins, int driverPodiums,
                  int driverWdcnumber, int points);

    void stats() override;


};

#endif //OOP_CURRENTDRIVER_H
