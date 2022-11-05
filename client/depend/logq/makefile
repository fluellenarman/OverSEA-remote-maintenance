
CC=clang++
CXXFLAGS= --std=c++20

all: test

test:
	$(CC) $(CXXFLAGS) sample/test.cc src/log.cc -o sample/test 
	./sample/test
	@rm -f ./sample/test

