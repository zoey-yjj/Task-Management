#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>
#include "TeamMember.h"

class Task {
public:
    Task(const std::string& name, int duration, const std::string& difficulty);

    std::string getName() const;
    int getDuration() const;
    std::string getDifficulty() const;

private:
    std::string name;
    int duration;
    std::string difficulty;
    std::vector<TeamMember*> assignees;
};

#endif // TASK_H
