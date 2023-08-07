#ifndef TEAM_MEMBER_H
#define TEAM_MEMBER_H

#include <string>

class TeamMember {
public:
    TeamMember(const std::string& name, const std::string& role);

    std::string getName() const;
    std::string getRole() const;

private:
    std::string name;
    std::string role;
};

#endif // TEAM_MEMBER_H
