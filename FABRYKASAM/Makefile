CXX = g++
EXEC = Fabryka
CXXFLAGS =  -Wall  -g  
LIBS = -lm

SRC=$(wildcard *.cpp)
OBJS=$(SRC:.cpp=.o)
DEPS=$(SRC:.cpp=.d)

$(EXEC): $(OBJS) 
	$(CXX) $(LFLAGS) $+ -o $@


*.o: *.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean run rebuild

rebuild: 
	make clean
	make 

clean:
	rm -f *.o
	rm -f *~
	rm -f *.d
	rm -f $(EXEC)

run: $(EXEC)
	./$(EXEC)

-include $(DEPS)