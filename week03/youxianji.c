#include <stdio.h>

// 所有的关系运算符优先级比算数运算符低，但是比赋值运算高
//  判断是否相等的 == 和！= 的优先级比其他的低，而连续的关系运算符是从左到右进行的
 
int main()
{
	printf("%d\n",7 >= 3 + 4);
	printf("%d\n", 5 > 3 == 6 > 4);
	printf("%d\n",6 > 5 > 4); 
	return 0;
 } 
