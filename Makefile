all : ppm.out

ppm.out : ppm.cpp img.o
	g++ -g -Wall -o ppm.out ppm.cpp img.o
img.o : img.cpp img.h
	g++ -g -Wall -c -o img.o img.cpp


clean :
	rm *.o
mrproper : clean
	rm ppm.out
