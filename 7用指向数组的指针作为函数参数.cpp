//#include<iostream>
//using namespace std;
//void output(int(*p)[4]);
//int main() {			//输出二维数组各元素的值
//	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	output(a);			//多为数组名作为函数参数  a指向a[0] 作为实参把a[0]的地址传递给形参p
//	return 0;
//}
//void output(int(*p)[4]) {
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			cout << *(*(p + i) + j) << " ";
//	cout << endl;
//}