#include "../headers/retired_driver.h"

RetiredDriver::RetiredDriver(const std::string &driverName, const std::string &driverTeam, int driverWins,
                             int driverPodiums, int driverWdcnumber, int retireYear) : Driver(driverName, driverTeam,
                                                                                              driverWins, driverPodiums,
                                                                                              driverWdcnumber),
                                                                                       retireYear(retireYear) {}

void RetiredDriver::stats() {
    std::cout << "Pilotul " << getDriverName() << " s-a retras in anul " << retireYear << ".\n";
}
