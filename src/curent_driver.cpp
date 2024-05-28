#include "../headers/curent_driver.h"


CurrentDriver::CurrentDriver(const std::string &driverName, const std::string &driverTeam, int driverWins,
                             int driverPodiums, int driverWdcnumber, int points) : Driver(driverName, driverTeam,
                                                                                          driverWins, driverPodiums,
                                                                                          driverWdcnumber),
                                                                                   currentChampionshipPoints(points) {
}

void CurrentDriver::stats() {
    std::cout << "Pilotul " << getDriverName() << " are " << currentChampionshipPoints << " puncte.\n";
}


