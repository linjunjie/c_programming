#include "test.h"

//hello是一个静态全局变量，它可以被同一文件中的print调用，但是不能被不同源文件调用
//静态变量声明的时候就限定了作用域，其只在定义该变量的源文件内有效
static char * hello = "Hello I'm Static!";

void print(){
	printf("%s\n", hello);
}