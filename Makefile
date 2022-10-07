XX = g++

CXXFLAGS = -std=c++14 -g -Wall

OBJECTS = Main.o AnalyticalModel.o Customer.o Event.o Input.o PQ.o

main: Main.o $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $^

clean:
		rm -rf *.dSYM
			$(RM) main *.o
