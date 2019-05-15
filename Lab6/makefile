CXX=g++

CPPFLAGS=-Wall $(GXX_FLAGS)
CPPFLAGS+=-g

DEP_FLAGS=-MMD
DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
H=$(SRC:.cpp=.h)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CPPFLAGS+=$(DEP_FLAGS)

HEAD=$(filter-out main.h, $(H))

EXE_NAME=Gps

all: program

# compile all files
program: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $(EXE_NAME)

.PHONY: clean run debug

# clean trash files
clean:
	@rm -f $(EXE_NAME) $(OBJ) $(DEP)

# run app
run: program
	./$(EXE_NAME)

# run gdb debuger
debug: program
	gdb $(EXE_NAME)

val: program
	valgrind ./$(EXE_NAME)

-include $(DEP)
