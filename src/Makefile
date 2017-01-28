IDIR = ../inc
ODIR = ../obj
BDIR = ../bin

LIBS = -lm


CC=gcc
CFLAGS=-I.
_DEPS = myprog.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = myprog.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BDIR)/myprog: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ $(BDIR)/myprog
