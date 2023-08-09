#include "Team.h"
#include "Task.h"

int main() {
    Team team;

    // Create team members
    team.addMember(new TeamMember("Team Leader", "Leader"));
    team.addMember(new TeamMember("Senior Developer", "Senior"));
    team.addMember(new TeamMember("Junior Developer 1", "Junior"));
    team.addMember(new TeamMember("Junior Developer 2", "Junior"));
    team.addMember(new TeamMember("Junior Developer 3", "Junior"));

    // Create tasks
    Task easyTask("Task 1", 1, "Easy");     // easy task need 1 week
    Task mediumTask("Task 2", 4, "Medium"); // medium task need 4 weeks, around 1 month
    Task hardTask("Task 3", 12, "Hard");    // hard task need 12 weeks, around 3 months

    // Allocate team members to tasks
    team.allocateTask(&easyTask, 0, 1, 1);     // 1 senior, 1 junior
    team.allocateTask(&mediumTask, 0, 1, 2);   // 1 senior, 2 juniors
    team.allocateTask(&hardTask, 1, 1, 3);     // 1 leader, 1 senior, 3 juniors

    // Print allocated tasks
    team.printAllocations();

    // Clean up
    team.clearMembers();

    return 0;
}