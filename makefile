CFLAGS=-std=c11 -g -static
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

scc: $(OBJS)
	$(CC) -o scc $(OBJS) $(LDFLAGS)

$(OBJS): scc.h

test: scc
	./test.sh

clean:
	rm -f scc *.o *~ tmp*