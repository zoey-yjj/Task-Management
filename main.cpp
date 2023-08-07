#include "TeamMember.h"
#include "Task.h"

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

    // Assign team members to tasks
    // Task 1: 1 senior and 1 junior
    task1.assignees.push_back(&senior);
    task1.assignees.push_back(&juniors[0]);

    return 0;
}