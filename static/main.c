/**
 * 静态static示例
 *
 * 所有未加static前缀的全局变量和函数都具有全局可见性
 * 对于函数来讲，static的作用仅限于隐藏
 */

#include "test.h"

// extern staticprint();
int main(){

	print();

	/**
	 * 如果这里直接打印hello，编译就会报错：
	 * main.c:5:17: error: use of undeclared identifier 'hello'
	 * 因为hello是test.c中声明的静态变量，其虽然位于.bbs或者.data的全局存储区
	 * 但是其作用域只限定于其被定义的文件中，也就是test.c文件中
	 * http://blog.csdn.net/keyeagle/article/details/6708077
	 */
	// printf("%s\n", hello);

	staticprint();

	return 1;
}