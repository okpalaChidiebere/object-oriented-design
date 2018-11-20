#The following three lines are variables that you can change
COMPILER = CC # or CC if you prefer it on Hercules
FILE1 = Employee
FILE2 = IndexList
DRIVER = TestEmployeeList

$(DRIVER) : $(FILE1).o $(FILE2).o $(DRIVER).o  #the first character on the next line is a tab
	$(COMPILER)  -o  $(DRIVER) $(FILE1).o $(FILE2).o $(DRIVER).o
$(DRIVER).o :  $(DRIVER).cpp $(FILE1).h $(FILE2).h
	$(COMPILER) -c  $(DRIVER).cpp  -o $(DRIVER).o
$(FILE2).o :  $(FILE2).cpp $(FILE2).h
	$(COMPILER) -c  $(FILE2).cpp  -o  $(FILE2).o
$(FILE1).o :  $(FILE1).cpp $(FILE1).h
	$(COMPILER) -c  $(FILE1).cpp  -o  $(FILE1).o

clean:
	@ /bin/rm -f *.o $(DRIVER)