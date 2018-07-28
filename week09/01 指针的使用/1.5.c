#include <stdio.h>

/*
		指针是const
	表示一旦得到了某个变量的地址，不能再指向其他变量
	int *const q = &i;//q是const
	*q = 26;//OK
	q++;//ERROR 
		所指是const 
	表示不能通过这个指针去修改那个变量（并不能使得那个变量成为const）
	const int*p = &i;
	*p = 26; //ERROR!(*p)是const
	i =  26;//OK
	i =  &j;//OK
	
	int sum(const int a[])//在sumJ函数里不能对数组有任何修改 
*/
int main()
{
	
	return 0;
}
