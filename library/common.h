#ifndef _COMMON_H_
#define _COMMON_H_ 1

#include <stdio.h>

/**
 * 这里的意义在于，如果你要在头文件中implement一个函数, 编译阶段是会报 duplicate symbol _test_aa 错误的
 * 
 * 如果你想在头文件里define(implement)一个函数的话，必须声明为static或者inline的形式(或两者皆有)
 * 
 * inline
 * 意味着编译器会在调用此函数的地方把函数的目标代码直接插入,而不是放置一个真正的函数调用,
 * 实际作用就是这个函数事实上已经不再存在,而是像宏一样被就地展开了。
 * 使用 inline 的副作用，首先在于毋庸置疑地，代码的体积变大了
 * 
 * 其次则是，这个关键字严格算起来并不是 C 语言的关键字，使用它多少会带来一些移植性方面的风险
 * 尽管主流的 C 语言编译器都可以支持 inline
 *
 *
 * 最终总结:把实现放在头文件中只是一种选择，只不过你之前没有想到过可以这么做，而现在知道了。
 * 它最适合的场合是一些规模较小的工具类的实现
 *
 * static
 * 对于函数来讲，static的作用仅限于隐藏，对其他源文件是隐藏的，只在被定义的源文件内有效
 */
static inline void test_aa(){
	printf("%s\n", "here show the function test_aa() implement in common.h");
}

#endif




