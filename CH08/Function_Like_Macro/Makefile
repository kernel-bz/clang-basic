CC = gcc
TARGET = Function_Like_Macro.out
OBJS = Function_Like_Macro.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Function_Like_Macro.o : Function_Like_Macro.c
	$(CC) -c -o Function_Like_Macro.o Function_Like_Macro.c

clean :
	rm $(OBJS)
	rm $(TARGET)
