CXX= g++

main:
	mkdir build
	${CXX} main.cpp lib/* -o build/blockchain

clean:
	rm build -r