#include "TeamMember.h"

TeamMember::TeamMember(const std::string& name, const std::string& role)
    : name(name), role(role) {}

std::string TeamMember::getName() const {
    return name;
}

std::string TeamMember::getRole() const {
    return role;
}
