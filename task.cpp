#include <iostream>
#include <string>
#include <vector>

// Define classes for team members and tasks
class TeamMember {
public:
    TeamMember(const std::string& name)
        : name(name){}

    std::string getName() const { return name; }

private:
    std::string name;
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

    return 0;
}
