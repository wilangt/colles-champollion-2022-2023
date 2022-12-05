CC= gcc
CFLAGS= -Wall

sources= main.c
exec=algo
objets= $(sources:.c=.o)

all: run

$(exec): $(objets)
	$(CC) -o $@ $^ -lm

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

run: $(exec)
	./$(exec) < test.in

verification: $(exec)
	for (( i=1; i<=$$(ls verification/*.in | wc -l); i++ )) do echo "$$i"; diff verification/$$i.sol <(./$(exec)< verification/$$i.in) ; done

clean :
	rm -f algo *.o

.PHONY: verification
