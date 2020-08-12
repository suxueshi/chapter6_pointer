//#include<iostream>
//using namespace std;
//int main() {						//求两个值的较大者  	函数入口地址称为函数的指针
//	int max(int x, int y);			//函数声明
//	int (*p)(int, int);				//定义指向一个整形函数的指针变量p 后面的（int ,int）代表p所指向的函数的形参类型
//	int a, b, m;
//	p = max;						//使p指向函数max
//	cin >> a >> b;
//	m = p(a, b);					//该语句跟m=max(a,b)等价
//	cout << "max= " << m;
//	return 0;
//}
//int max(int x, int y) {
//	int z;
//	z = (x > y) ? x : y;
//	return z;
//}