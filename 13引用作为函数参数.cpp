//#include<iostream>
//using namespace std;
////C++增加引用类型，主要是把它作为函数参数，以扩充函数传递参数的功能
//
////int main() {						//要求将变量i和j的值互换，下面的程序无法实现此要求 
////	void swap(int x, int y);
////	int i = 3, j = 5;
////	swap(i, j);
////	cout << i << " " << j << endl;
////	return 0;
////}
////void swap(int x, int y) {			//在调用函数时，形参和实参不是同一个存储单元 需要通过指针地址传递来实现此功能 但是概念上仍然兜了个圈子 下面的引用传递更加直观
////	int temp;
////	temp = x;
////	x = y;
////	y = temp;
////}
//
//int main() {			
//	void swap(int&, int&);				//这种引用变量不是一个独立的变量，不单独占内存单元
//	int i = 3, j = 5;
//	swap(i, j);
//	cout << i << "  " << j << endl;
//	return 0;
//}
//void swap(int& a, int& b) {		//在此处&a不是a的地址 而是指a是一个引用型变量 &是引用型变量的声明符 主函数调用时 就把i的名字传给引用变量a 这样子a就成了i的别名
//	int temp;					//这样子就表示 a引用于i ,两者是同一地址 就可以通过改变引用值去改变主函数的变量
//	temp = a;					//使用变量的引用，可以部分代替指针的操作
//	a = b;						//当&a的前面有类型符时，如（int &a） 它必然是对引用的声明 没有的话就是取变量的地址
//	b = temp;
//}
