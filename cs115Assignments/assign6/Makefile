COMPILER = CC 
DRIVER = TestExtIndexList
FILE1 = IndexList
FILE2 = ExtIndexList
$(DRIVER): $(FILE1).o $(FILE2).o $(DRIVER).o
	$(COMPILER) -o $(DRIVER) $(FILE1).o $(FILE2).o $(DRIVER).o

$(DRIVER).o : $(DRIVER).cpp $(FILE1).cpp $(FILE1).h $(FILE2).cpp $(FILE2).h
	$(COMPILER) -c $(DRIVER).cpp -o $(DRIVER).o

$(FILE1).o : $(FILE1).cpp $(FILE1).h
	$(COMPILER) -c $(FILE1).cpp -o $(FILE1).o

$(FILE2).o : $(FILE2).cpp $(FILE2).h $(FILE1).cpp $(FILE1).h
	$(COMPILER) -c $(FILE2).cpp -o $(FILE2).o

clean:
	/bin/rm -f *.o
