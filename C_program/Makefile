OBJS = main.o Csa.o Csb.o Csc.o Context.o
BINARY = app
CFLAGS = -g -Wall
LDFLAGS = -lm
 
Ejecutable: $(OBJS)
	gcc -o $(BINARY) $(OBJS) $(CFLAGS) $(LDFLAGS)
 
main.o: main.c Context.h Interface.h Csa.h Csb.h Csc.h
Context.o: Context.c Context.h Interface.h
Csa.o: Csa.c Csa.h
Csb.o: Csb.c Csb.h
Csc.o: Csc.c Csc.h

clean:
	rm -f $(BINARY) $(OBJS)