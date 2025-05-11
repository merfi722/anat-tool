CXX = g++
CXXFLAGS = -std=c++17 -Wall
SOURCES = src/main.cpp src/anatutils.cpp src/projectStructure.cpp src/envWriter.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = cppinit

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
