CC = gcc
TARGET = Arithmetic_Step_Size.out
OBJS = Arithmetic_Step_Size.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Arithmetic_Step_Size.o : Arithmetic_Step_Size.c
	$(CC) -c -o Arithmetic_Step_Size.o Arithmetic_Step_Size.c

clean :
	rm $(OBJS)
	rm $(TARGET)
