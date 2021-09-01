CC = gcc #name of compiler
CFLAGS = -Wall -pedantic -ansi #effects that you want to use
OBJ = numbers.o  #all object file when linking everything together
EXEC = numbers #name of executable

$(EXEC) : $(OBJ) #need object files to create executable
        $(CC) $(OBJ) -o $(EXEC) #and then run these comments

numbers.o: numbers.c order.c order.h 
        $(CC) -c numbers.c $(CFLAGS) #$ means "please replace CFLAGS variable with -Wall -pedantic -ansi"

clean:
        rm -f $(EXEC) $(OBJ)
        
