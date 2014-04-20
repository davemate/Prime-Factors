CPP=g++
EXECUTABLE_NAME=faktormain 
TEST_NAME=testProgram
LIBRARIES=-lgtest -lgtest_main -lpthread

faktormain.exe: faktormain.o
	g++ -o faktormain.exe /home/davemate/Desktop/David/faktormain.cpp /home/davemate/Desktop/David/faktorize.cpp	
	#./faktormain.exe

faktormain.o:faktorize.o
	g++ -c  /home/davemate/Desktop/David/faktormain.cpp

faktorize.o:build_test
	g++ -c  /home/davemate/Desktop/David/faktorize.cpp

build_test: # teszt fordítása
	g++ -o testprogi /home/davemate/Desktop/David/faktorize.cpp /home/davemate/Desktop/David/test.cpp $(LIBRARIES)
	./testprogi


