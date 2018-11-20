COMPILER = g++
DRIVER =TestTicTacToe
FILE = TicTacToe
\$(DRIVER) : \$(FILE).o \$(DRIVER).o 		
	$(COMPILER) -o \$(DRIVER) \$(FILE).o \$(DRIVER).o
$(DRIVER).o : \$(DRIVER).cpp \$(FILE).cpp \$(FILE).h
	\$(COMPILER) -c \$(DRIVER).cpp -o \$(DRIVER).o
\$(FILE).o : \$(FILE).cpp \$(FILE).h
	\$(COMPILER) -c \$(FILE).cpp
clean:
	@ /bin/rm -f *.o
