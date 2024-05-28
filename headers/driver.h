#include <iostream>
#include <string>

#ifndef OOP_DRIVER_H
#define OOP_DRIVER_H

class Driver {
protected:
    std::string driver_name, driver_team;
    int driver_wins{}, driver_podiums{}, driver_wdcnumber{};
    [[maybe_unused]] static int drivercount;

public:

    Driver() = default;

    ~Driver() = default;

    Driver(const std::string &driverName, const std::string &driverTeam, int driverWins, int driverPodiums,
           int driverWdcnumber);

    [[nodiscard]] const std::string &getDriverName() const;

    [[maybe_unused]] [[nodiscard]] const std::string &getDriverTeam() const;

//    int getDriverWins () const ;
//
//    int getDriverPodiums () const ;
//
//    int getDriverWdcnumber () const ;

    friend std::ostream &operator<<(std::ostream &out, const Driver &driver);

    [[maybe_unused]] Driver(const Driver &driver);

    Driver &operator=(const Driver &driver);

    // void changeTeam (const std::string &newTeam) ;


    // void addWin () ;

    // void swapDrivers (Driver &driver) ;

    virtual void stats() = 0;


};

#endif //OOP_DRIVER_H
