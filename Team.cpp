#include "Team.h"
#include <iostream>

Team::Team() {}

Team::~Team() {
    clearMembers();
}

void Team::addMember(TeamMember* member) {
    members.push_back(member);
}

void Team::allocateTask(Task* task, int numLeader, int numSeniors, int numJuniors) {
    for (int i = 0; i < numLeader; ++i) {
        task->addAssignee(members[i]);
    }
    for (int i = 1; i < 1 + numSeniors; ++i) {
        task->addAssignee(members[i]);
    }
    for (int i = 2; i < 2 + numJuniors; ++i) {
        task->addAssignee(members[i]);
    }
    assignedTasks.push_back(task);
}

void Team::printAllocations() const {
    std::cout << "Task Allocations:\n";
    for (size_t i = 0; i < assignedTasks.size(); ++i) {
        const Task* task = assignedTasks[i];
        std::cout << "- " << task->getName() << " (" << task->getDifficulty() << ")\n";
        task->printAssignees();
    }
}

void Team::clearMembers() {
    for (TeamMember* member : members) {
        delete member;
    }
    members.clear();
}
