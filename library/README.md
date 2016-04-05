###生成静态链接库的例子 (另有编写Makefile的示例，在当前目录的Makefile中)

#首先编译test_a.c和test_b.c生成目标文件
gcc -c test_a.c test_b.c

#然后将目标文件打包成静态库
ar rs libtest.a test_a.o test_b.o

#最后编译main的时候加入静态链接库libtest
gcc -o main -L. -ltest main.c

#执行一下./main就可以看到效果