#include "../headers/team.h"

Team::Team(const std::string &teamName, const std::string &teamBase, const std::string &teamPowerunit,
           const std::string &teamChief, int teamFirstentry, int teamWccnumber, int teamWins) : team_name(teamName),
                                                                                                team_base(teamBase),
                                                                                                team_powerunit(
                                                                                                        teamPowerunit),
                                                                                                team_chief(teamChief),
                                                                                                team_firstentry(
                                                                                                        teamFirstentry),
                                                                                                team_wccnumber(
                                                                                                        teamWccnumber),
                                                                                                team_wins(teamWins) {
}

/*const std::string &Team::getTeamName () const {
    return team_name;
}*/

const std::string &Team::getTeamBase() const {
    return team_base;
}

/*const  std::string &Team::getTeamPowerunit () const {
    return team_powerunit;
}

const  std::string &Team::getTeamChief () const {
    return team_chief;
}

int  Team::getTeamFirstentry () const {
    return team_firstentry;
}

int  Team::getTeamWccnumber () const {
    return team_wccnumber;
}*/

int Team::getTeamWins() const {
    return team_wins;
}

[[maybe_unused]] Team::Team(const Team &team) {
    this->team_name = team.team_name;
    this->team_base = team.team_base;
    this->team_powerunit = team.team_powerunit;
    this->team_chief = team.team_chief;
    this->team_firstentry = team.team_firstentry;
    this->team_wccnumber = team.team_wccnumber;
    this->team_wins = team.team_wins;
}

Team &Team::operator=(const Team &team) {
    this->team_name = team.team_name;
    this->team_base = team.team_base;
    this->team_powerunit = team.team_powerunit;
    this->team_chief = team.team_chief;
    this->team_firstentry = team.team_firstentry;
    this->team_wccnumber = team.team_wccnumber;
    this->team_wins = team.team_wins;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Team &team) {
    out << "Nume: " << team.team_name << ", Baza in: " << team.team_base << ", Motorul este: " << team.team_powerunit
        << ", Team Principal este: " << team.team_chief << ", A intrat in competitie in: " << team.team_firstentry
        << ", Numar campionate: " << team.team_wccnumber << ", Numar victorii: " << team.team_wins << std::endl
        << "---------" << std::endl;
    return out;
}
