#生成静态链接库的Makefile示例

all : libtest.a main

libtest.a : test_a.o test_b.o
	ar rs libtest.a test_a.o test_b.o

main : main.c
	cc -o main -Wall -L. -ltest main.c	

clean : 
	rm -rf *.o *.a main test_a test_b
		