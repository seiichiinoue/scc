scc: scc.c

test: scc
	./test.sh

clean:
	rm -f scc *.o *~ tmp*

