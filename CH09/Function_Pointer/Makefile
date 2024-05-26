CC = gcc
TARGET = Function_Pointer.out
OBJS = Function_Pointer.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : Function_Pointer.c
	$(CC) -c -o $(OBJS) Function_Pointer.c

clean :
	rm $(OBJS)
	rm $(TARGET)
