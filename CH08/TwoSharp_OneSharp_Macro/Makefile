CC = gcc
TARGET = TwoSharp_OneSharp_Macro.out
OBJS = TwoSharp_OneSharp_Macro.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

TwoSharp_OneSharp_Macro.o : TwoSharp_OneSharp_Macro.c
	$(CC) -c -o TwoSharp_OneSharp_Macro.o TwoSharp_OneSharp_Macro.c

clean :
	rm $(OBJS)
	rm $(TARGET)
