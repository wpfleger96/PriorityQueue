compile: 
	g++ -std=gnu++11  PriorityTest.cpp -o PriorityTest.o 

run: 
	./PriorityTest.o

clean:
	rm *.o