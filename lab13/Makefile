CXX=g++
CXXFLAGS=-g -Wall --std=c++14

all: sorting

sorting: sorting.o
	$(CXX) $(CPPFLAGS) $^ -o $@

sorting.o: sorting.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

.PHONY: clean
clean:
	-@rm -rf *.o sorting
	-@echo "--- All Clean!---"