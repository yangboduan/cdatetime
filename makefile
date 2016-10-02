CPP      = g++
CC       = gcc
CFLAGS   = -std=gnu++0x  
OBJ      = cdatetime.o
LINKOBJ  = cdatetime.o
BIN      = idatetime
RM       = rm -rf
$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN)    

$(OBJ): cdatetime.cpp
	$(CPP) -c cdatetime.cpp -o $(OBJ)   $(CFLAGS) 
	
clean: 
	${RM} $(OBJ) $(BIN)

cleanobj:
	${RM} *.o
