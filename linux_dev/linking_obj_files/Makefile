# define the C compiler to use
CC 		= gcc
# define any compile-time flags
CFLAGS 	= -std=c11 -Wall -fmax-errors=10 -Wextra
# define any directories containing header files other than /usr/include
INCLUDES =
# define library paths in addition to /usr/lib
LFLAGS 	= -L.
# define libraries touse
LIBS 	= -lweather
# define the C object files
OBJECTS = program.o
# define the C source files
SOURCES = program.c
# define the executable file name
MAIN 	= program

# define the default target
$(MAIN): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJECTS) -o $@ $(LFLAGS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(MAIN)

launch: $(MAIN)
	./$(MAIN)