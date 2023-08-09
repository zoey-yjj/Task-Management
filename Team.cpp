#include "Team.h"
#include <iostream>

Team::Team() {}

Team::~Team() {
    clearMembers();
}

void Team::addMember(TeamMember* member) {
    members.push_back(member);
}

void Team::clearMembers() {
    for (TeamMember* member : members) {
        delete member;
    }
    members.clear();
}
