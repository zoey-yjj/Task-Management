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
    void allocateTask(Task* task, int numLeader, int numSeniors, int numJuniors);
    void printAllocations() const;
    void clearMembers();

private:
    std::vector<TeamMember*> members;
    std::vector<Task*> assignedTasks;
};

#endif // TEAM_H
