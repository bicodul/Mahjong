CFLAGS = -std=c++11
OBJECTS = *.o 

all: mahjong

mahjong: *.cc 
	g++ ${CFLAGS} -o $@ $^

clean:
	rm ${OBJECTS} mahjong



