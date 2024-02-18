CC = gcc
TARGET = Condition_Macro.out
OBJS = Condition_Macro.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Condition_Macro.o : Condition_Macro.c
	$(CC) -c -o Condition_Macro.o Condition_Macro.c

clean :
	rm $(OBJS)
	rm $(TARGET)
