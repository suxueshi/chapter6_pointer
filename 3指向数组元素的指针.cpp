//#include<iostream>
//using namespace std;
//int main() {
//	int a[10], i;
//	int* p = a;			//指针变量p指向数组a的首元素p[0]
//	for (i = 0; i < 10; i++)
//		cin >> *(p+i);		//输入十个元素
//	cout << endl;
//	for (p = a; p < (a + 10); p++)				//（a+10）这种形式代表地址，  *（a+10）等价于a[10] 注意这里的a[10]指的是数组a的第十一个元素
//		cout << *p;				//使得p先后指向a[0]到a[9]			这种用指针变量直接指向元素比 输出a[i]这样的形式快
//	cout << endl;
//	return 0;
//}