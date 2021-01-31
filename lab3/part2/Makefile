CXX = g++
CPPFLAGS = -Wall -g -Ilib
LIB_DIR = lib
SRC_DIR = src
BIN_DIR = exe

$(BIN_DIR)/.dirstamp:
	mkdir -p $(BIN_DIR)
	touch $(BIN_DIR)/.dirstamp

all: $(BIN_DIR)/.dirstamp $(BIN_DIR)/pokemon

$(BIN_DIR)/pokemon: main.cpp $(BIN_DIR)/attackMove.o $(BIN_DIR)/battle.o $(BIN_DIR)/pokemon.o
	$(CXX) $(CPPFLAGS) $^ -o $@

$(BIN_DIR)/attackMove.o: attackMove.cpp attackMove.h
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR)/battle.o: battle.cpp battle.h
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR)/pokemon.o: pokemon.cpp pokemon.h
	$(CXX) $(CPPFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(BIN_DIR)
