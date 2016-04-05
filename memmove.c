#include <stdio.h>
#include <string.h>

/**
 * void * memmove(void * dest, const void * src, size_t count)
 * <string.h>
 * 由src所指内存区域复制count个字节到dest所指内存区域
 *
 * 与memcpy的唯一区别是，当内存发生局部重叠的时候，memmove保证拷贝的结果是正确的，memcpy不保证拷贝的结果是正确的
 * void * memcpy(void * dest, const void * src, size_t count)
 * 
 * 也就是在处理 内存区域重叠（overlapping）的方式不同
 */

int main(){
	char s[] = "Golden Global View";
	memmove(s, s+7, strlen(s) + 1 - 7);
	printf("%s", s);
	return 0;
}