CC=g++ 
CXXFLAGS=-g

OBJS = main.o

all: ${OBJS}
	$(CC) $(CXXFLAGS) -o ordenacion ${OBJS}

clean:
	rm -rf *.o 

