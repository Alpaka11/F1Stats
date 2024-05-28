#include <iostream>
#include <string>

#ifndef OOP_TEAM_H
#define OOP_TEAM_H

class Team {
protected:
    std::string team_name, team_base, team_powerunit, team_chief;
    int team_firstentry{}, team_wccnumber{}, team_wins{};
public:
    Team() = default;

    virtual ~Team() = default;

    Team(const std::string &teamName, const std::string &teamBase, const std::string &teamPowerunit,
         const std::string &teamChief, int teamFirstentry, int teamWccnumber, int teamWins);

    // const std::string &getTeamName () const ;

    [[nodiscard]] const std::string &getTeamBase() const;

    // const std::string &getTeamPowerunit () const ;

    //const std::string &getTeamChief () const ;

    //int getTeamFirstentry () const ;

    //int getTeamWccnumber () const ;

    [[nodiscard]] int getTeamWins() const;

    [[maybe_unused]] Team(const Team &team);

    Team &operator=(const Team &team);


    friend std::ostream &operator<<(std::ostream &out, const Team &team);


};

#endif //OOP_TEAM_H
