# Team Management Project

This is a C++ project for managing a software development team's tasks and assignments. The project simulates the allocation of team members to different tasks based on task difficulty levels and the roles of team members.

## Features

1. Three predefined tasks with varying durations and difficulty levels.
2. Team members categorized into roles: Team Leader, Senior Developer, and Junior Developer.
3. Allocation of team members to tasks based on predefined rules.
3. Ability to easily add new tasks and team members.

## Project Structure

The project is organized into multiple files to keep the codebase modular and maintainable:

- `main.cpp`: The main script that coordinates the team management process.
- `TeamMember.h` and `TeamMember.cpp`: Define the `TeamMember` class that represents individual team members.
- `Task.h` and `Task.cpp`: Define the `Task` class that represents tasks and handles assignment of team members.
- `Team.h` and `Team.cpp`: Define the `Team` class that manages team members and task allocations.

## How to Use

1. Clone or download this repository to your local machine.
2. Compile the source code files using a C++ compiler (e.g., g++).
3. Run the compiled executable to see the task allocations for the team members.

## Adding New Tasks or Team Members

- To add new tasks, create a new instance of the `Task` class in the `main.cpp` script, and use the `allocateTask` function of the `Team` class to assign team members to the task.
- To add new team members, create a new instance of the `TeamMember` class in the `main.cpp` script and add them to the team using the `addMember` function of the `Team` class.

## Contributions

This project is intended as a simple example and starting point for managing team tasks. Contributions and improvements are welcome. If you have suggestions or find any issues, feel free to open an issue or submit a pull request.