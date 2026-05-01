.PHONY: clean
CC = gcc
CFLAGS = -Wall -pedantic-errors -std=c23
PROGRAMS = suma enlineas longitudes mayorlongitud todosiguales

test: stringsTest.o strings.o
	$(CC) $(CFLAGS) stringsTest.o strings.o -o $@

stringsTest.o: stringsTest.c strings.h
	$(CC) $(CFLAGS) -c $< -o $@

strings.o: strings.c strings.h
	$(CC) $(CFLAGS) -c -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(PROGRAMS): %: %.o strings.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm *.o *.exe
# run: test
# 	./test
all: $(PROGRAMS)


# run: test
# 	./test
# $^: All dependencies
# $<: First dependency
# $@: Target
# $?: All dependencies newer than target

# #no pongo %.h porque no existe main.h
# %.o: %.c
# 	$(CC) $(CFLAGS) $< -o $@