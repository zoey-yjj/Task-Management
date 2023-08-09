#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "TeamMember.h"
#include "Task.h"

class Team {
public:
    Team();
    ~Team();

    void addMember(TeamMember* member);
    void clearMembers();

private:
    std::vector<TeamMember*> members;
};

#endif // TEAM_H
