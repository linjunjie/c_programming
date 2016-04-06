#include <stdio.h>

void print();

//这里实现了一个静态函数。但是如果只是静态的话，只能被本文件使用，所以这里还声明成了内联函数
static inline void staticprint(){
	printf("%s\n", "static function");
}