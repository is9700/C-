main : punkt.o punkt.h rechteck.h form.h main.cpp
	g++ main.cpp -o main punkt.o -std=c++11

punkt.o : punkt.cpp
	g++ punkt.cpp -c -std=c++11


clean:
	rm *.o main
