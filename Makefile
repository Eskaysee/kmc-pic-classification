clusterer: KMC.cpp Driver.cpp
	g++ -o clusterer *.cpp --std=c++11

clean:
	rm clusterer *#.txt
