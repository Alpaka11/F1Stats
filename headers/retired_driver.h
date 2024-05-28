#ifndef OOP_RETIREDDRIVER_H
#define OOP_RETIREDDRIVER_H

#include "driver.h"

class RetiredDriver : public Driver {
private:
    int retireYear;

public:
    RetiredDriver(const std::string &driverName, const std::string &driverTeam, int driverWins, int driverPodiums,
                  int driverWdcnumber, int retireYear);

    void stats() override;
};

#endif //OOP_RETIREDDRIVER_H
