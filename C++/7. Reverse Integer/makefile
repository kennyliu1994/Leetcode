SHELL := /bin/bash
CC := g++
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
EXE = $(OBJS:.o=)
CXXFLAGS = -g -Wall
.SUFFIXES:
.SUFFIXS: .c .cpp .o
.PHONY: all clean run
all: $(EXE) run
$(EXE): $(OBJS)
	$(CC) $(CXXFLAGS) $< -o $@
$(OBJS): $(SRCS)
	$(CC) $(CXXFLAGS) -c $<
run: 
	./$(EXE)
clean: 
	rm -rf $(OBJS) $(EXE) output.txt