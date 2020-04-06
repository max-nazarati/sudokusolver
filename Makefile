all:
	g++ -o solver *.cpp -std=c++11

clean:
	rm -f *.o
	rm -f solver