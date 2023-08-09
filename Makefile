CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp TeamMember.cpp task.cpp Team.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = team_management

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

