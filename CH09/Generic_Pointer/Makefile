CC = gcc
TARGET = Generic_Pointer.out
OBJS = Generic_Pointer.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Generic_Pointer.o : Generic_Pointer.c
	$(CC) -c -o Generic_Pointer.o Generic_Pointer.c

clean :
	rm $(OBJS)
	rm $(TARGET)
