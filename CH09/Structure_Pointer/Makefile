CC = gcc
TARGET = Structure_Pointer.out
OBJS = Structure_Pointer.o Students_Grades.o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^

Structure_Pointer.o : Structure_Pointer.c
	$(CC) -c Structure_Pointer.c

Students_Grades.o : Students_Grades.c Students_Grades.h
	$(CC) -c Students_Grades.c

clean :
	rm $(OBJS)
	rm $(TARGET)
