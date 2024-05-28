#include "../headers/driver.h"


Driver::Driver(const std::string &driverName, const std::string &driverTeam, int driverWins, int driverPodiums,
               int driverWdcnumber) : driver_name(driverName), driver_team(driverTeam), driver_wins(driverWins),
                                      driver_podiums(driverPodiums), driver_wdcnumber(driverWdcnumber) {
}


const std::string &Driver::getDriverName() const {
    return driver_name;
}

[[maybe_unused]] const std::string &Driver::getDriverTeam() const {
    return driver_team;
}

//int Driver::getDriverWins () const {
//    return driver_wins;
//}
//
//int Driver::getDriverPodiums () const {
//    return driver_podiums;
//}
//
//int Driver::getDriverWdcnumber () const {
//    return driver_wdcnumber;
//}

std::ostream &operator<<(std::ostream &out, const Driver &driver) {
    out << "Nume pilot: " << driver.driver_name << ", echipa: " << driver.driver_team << ", nr de victorii: "
        << driver.driver_wins << ", nr de podiumuri: " << driver.driver_podiums << ", nr de campionate "
        << driver.driver_wdcnumber << std::endl << "---------" << std::endl;
    return out;
}

[[maybe_unused]] Driver::Driver(const Driver &driver) {
    this->driver_name = driver.driver_name;
    this->driver_team = driver.driver_name;
    this->driver_wdcnumber = driver.driver_wdcnumber;
    this->driver_podiums = driver.driver_podiums;
    this->driver_wins = driver.driver_wins;
}

Driver &Driver::operator=(const Driver &driver) {
    this->driver_name = driver.driver_name;
    this->driver_team = driver.driver_name;
    this->driver_wdcnumber = driver.driver_wdcnumber;
    this->driver_podiums = driver.driver_podiums;
    this->driver_wins = driver.driver_wins;
    return *this;
}


//void Driver::changeTeam (const std::string &newTeam) {
//    this->driver_team = newTeam;
//}


//void Driver::addWin () {
//    this->driver_wins += 1;
//    this->driver_podiums += 1;
//}
//
//void Driver::swapDrivers (Driver &driver) {
//    std::string aux;
//    aux = this->driver_team;
//    this->driver_team = driver.driver_team;
//    driver.driver_team = aux;
//}

