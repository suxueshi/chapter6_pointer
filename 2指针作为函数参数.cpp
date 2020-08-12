//#include<iostream>
//using namespace std;
//void swap(int* p1, int* p2);
//int main() {					//将两个整数从大到小输出
//	int* pointer_1, * pointer_2;
//	int a, b;
//	cin >> a >> b;
//	pointer_1 = &a;
//	pointer_2 = &b;
//	if (a < b)
//		swap(pointer_1, pointer_2);
//	cout << "max= " << *pointer_1 << "  " << "min= " << *pointer_2;
//	return 0;
//}
//
//void swap(int* p1, int* p2) {	//函数的作用是将*p1和*p2   的值   进行互换 就是相当于把a  b值互换   p1仍然是a的地址
//	int temp;					// 不能企图改变形参指针变量的值而使实参指针变量的值改变
//	temp = *p1;					//调用函数时不会改变实参指针变量的值，但是可以改变实参指针变量所指向的变量的值
//	*p1 = *p2;					// 函数调用可以（而且只可以）得到一个返回值，但是可以通过指针变量改变多个主函数中变量的值
//	*p2 = temp;
//}
//
//// 解释说明：void swap(int x, int y){int temp; temp=x; x=y; y=temp  } 这种交换函数是改变了x y的值 但是不能改变ab的值  形参值的改变无法返回实参