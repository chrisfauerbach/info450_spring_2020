default: sort

sorter.o:
	g++ -c sorter.cpp

sort: sorter.o
	g++ -o sorter main.cpp sorter.o

clean:
	rm -f sorter.o sorter
