CC = gcc
AR = ar
FLAGS = -Wall -g
OBJECT_BASICLOOP = basicClassification.o advancedClassificationLoop.o
OBJECT_BASICRECURSION = basicClassification.o advancedClassificationRecursion.o

all: mains maindloop maindrec loops loopd recursives recursived

loops: libclassloops.a

loopd: libclassloops.so

recursived: libclassrec.so

recursives: libclassrec.a

libclassloops.a: $(OBJECT_BASICLOOP)
	$(AR) -rsc libclassloops.a $(OBJECT_BASICLOOP)

libclassrec.a: $(OBJECT_BASICRECURSION)
	$(AR) -rsc libclassrec.a $(OBJECT_BASICRECURSION)

libclassloops.so: $(OBJECT_BASICLOOP)
	$(CC) -shared -o libclassloops.so $(OBJECT_BASICLOOP)

libclassrec.so: $(OBJECT_BASICRECURSION)
	$(CC) -shared -o libclassrec.so $(OBJECT_BASICRECURSION)

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

basicClassification.o: basicClassification.c
	$(CC) $(FLAGS) -c basicClassification.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm

advancedClassificationRec.o: advancedClassificationRec.c
	$(CC) $(FLAGS) -c advancedClassificationRec.c
clean:
	rm -f *.o *.a *.so mains maindloop maindrec
