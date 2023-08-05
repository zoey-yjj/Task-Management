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
    Task(const std::string& name, int duration, const std::string& difficulty)
        : name(name), duration(duration), difficulty(difficulty) {}

    std::string getName() const { return name; }
    int getDuration() const { return duration; }
    std::string getDifficulty() const { return difficulty; }

private:
    std::string name;
    int duration;  // Duration in weeks
    std::string difficulty;
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
    Task task1("Task 1", 1, "Easy");   // easy task need 1 week
    Task task2("Task 2", 4, "Medium"); // medium task need 4 weeks, around 1 month
    Task task3("Task 3", 12, "Hard");  // hard task need 12 weeks, around 3 months

    return 0;
}
