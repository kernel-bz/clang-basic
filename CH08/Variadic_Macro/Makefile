CC = gcc
TARGET = Variadic_Macro.out
OBJS = Variadic_Macro.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Variadic_Macro.o : Variadic_Macro.c
	$(CC) -c -o Variadic_Macro.o Variadic_Macro.c

clean :
	rm $(OBJS)
	rm $(TARGET)
