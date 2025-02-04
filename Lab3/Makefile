COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all : $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): areaCalc.cpp Circle.h Circle.cpp Rectangle.cpp Rectangle.h Square.cpp Square.h Trapezoid.cpp Trapezoid.h
	$(COMPILER) $(OPTIONS) areaCalc.cpp Circle.h Circle.cpp Rectangle.cpp Rectangle.h Square.cpp Square.h Trapezoid.cpp Trapezoid.h -o $(PROGRAM)
	
clean:
	rm -f $(PROGRAM)

