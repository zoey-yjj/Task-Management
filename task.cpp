#include <iostream>
#include <string>
#include <vector>

// Define classes for team members and tasks
class TeamMember {
public:
    TeamMember(const std::string& name, const std::string& role)
        : name(name), role(role) {}

    std::string getName() const { return name; }
    std::string getRole() const { return role; }

private:
    std::string name;
    std::string role;
};

class Task {
public:
    Task(const std::string& name)
        : name(name) {}

    std::string getName() const { return name; }

private:
    std::string name;
};

int main() {
    // Create team members with leader, senior, and juniors
    TeamMember leader("Team Leader", "Leader");
    TeamMember senior("Senior Developer", "Senior");
    std::vector<TeamMember> juniors;
    juniors.push_back(TeamMember("Junior Developer 1", "Junior"));
    juniors.push_back(TeamMember("Junior Developer 2", "Junior"));
    juniors.push_back(TeamMember("Junior Developer 3", "Junior"));

    // Create tasks
    Task task1("Task 1");
    Task task2("Task 2");
    Task task3("Task 3");

    return 0;
}
