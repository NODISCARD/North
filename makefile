compile_arguments = -lncurses -lpthread

build:
	g++ src/north.cpp $(compile_arguments) -o bin/north

rtests:
	g++ src/test_c.cpp $(compile_arguments) -o bin/test_c
	g++ src/test_s.cpp $(compile_arguments) -o bin/test_s

run:
	bin/north

clear:
	rm -rf bin/*