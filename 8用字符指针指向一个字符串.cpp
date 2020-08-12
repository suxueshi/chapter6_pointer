//#include<iostream>
//using namespace std;
//
//
////int main() {						//定义一个字符指针变量并初始化，然后输出它指向的字符串
////	char* str = "i love China.";   //实际上把字符串第一个元素的地址赋给str ,输出时使得str自动加1  直到遇到'\0'
////	cout << str << endl;
////	return 0;
////}
//
//int main() {        //将字符串str1复制为字符串str2
//	char str1[] = " i love China", str2[20], * p1, * p2;
//	p1 = str1;
//	p2 = str2;
//	for (; *p1 != '\0'; p1++, p2++)	 //for语句第三表达式，如果是后置的++，会在执行了全部for内语句之后执行，因此，在退出循环的时候，i的值不会是最后一次执行循环时候的n-1，而是在循环之后又加了1，最后退出的时候i的值为n。
//		*p2 = *p1;
//	*p2 = '\0';
//	p1 = str1;
//	p2 = str2;
//	cout << "str1 is" << p1 << endl;
//	cout << "str2 is" << p2 << endl;
//	return 0;
//}