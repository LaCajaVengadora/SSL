.PHONY: clean run
CC = gcc
CFLAGS = -Wall -pedantic-errors -std=c23 

test: stringsTest.o strings.o
	$(CC) $(CFLAGS) stringsTest.o strings.o -o $@
# test: main.o mate.o
# 	$(CC) main.o mate.o -o test

stringsTest.o: stringsTest.c strings.h
	$(CC) $(CFLAGS) -c $< -o $@
# main.o: main.c mate.h
# 	$(CC) $(CFLAGS) main.c -o main.o

strings.o: strings.c strings.h
	$(CC) $(CFLAGS) -c -c $< -o $@
# #$<: es el primer item en la lista de dependencias, en nuestro caso el mate.c
# #$@: nombre del objetivo	
# mate.o: mate.c mate.h
# 	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o test.exe
run: test
	./test
# clean:
# 	rm main.o mate.o test

# run: test
# 	./test
# #indica que objetivos deben realizarse si o si, sin importar las dependencias
# .PHONY: clean run



# #info adicional	
# #$^: Esta variable representa todas las dependencias de la regla de compilación.



# CC = gcc
# CFLAGS = -g -Wall -c -pedantic-errors -std=c23

# #indica que objetivos deben realizarse si o si, sin importar las dependencias
# .PHONY: clean run

# test: main.o mate.o
# 	$(CC) main.o mate.o -o test

# #no pongo %.h porque no existe main.h
# %.o: %.c
# 	$(CC) $(CFLAGS) $< -o $@
# #$<: es el primer item en la lista de dependencias, en nuestro caso el %.c
# #$@: nombre del objetivo

# clean:
# 	rm *.o test

# run: test
# 	./test

