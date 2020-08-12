//#include<iostream>
//using namespace std;
//int main() {						//若干字符串按字母由小到大输出
//	void sort(char* name[], int n);
//	void print(char* name[], int n);
//	char* name[] = { "BASIC","FORTRAN","C++","Pascal","COBOL" };		//定义指针数组,其初值分别是这五个字符串的起始地址，
//	int n = 5;
//	sort(name, n);
//	print(name, n);
//	return 0;
//}
//void sort(char* name[], int n) {									//sort函数的形参name是指针数组名，接受实参数组name的首元素地址 所以两个指的是同一个数组
//	char* temp;
//	int i, j, k;													//终于懂了  加了一个变量k记录最小的字符 能减少下面赋值语句的执行次数
//	for (i = 0; i < n - 1; i++) {
//		k = i;													//其实就相当于先假设第一个字符串最小
//		for (j = i + 1; j < n; j++)
//			if (strcmp(name[i], name[j]) > 0) {					//字符串比较函数strcmp 如果name[i]所指的字符串大于name[j]所指的字符串 则函数值大于0
//				k = j;											//从第i个串到第n个串的最小序号（i或者j）保留在k中
//				//temp = name[i];
//				//name[i] = name[j];
//				//name[j] = temp;
//			}													
//		if (k != i) {
//			temp = name[i];
//			name[i] = name[k];
//			name[k] = temp;
//		}	
//	}
//}
//void print(char* name[], int n) {
//	int i;
//	for (i = 0; i < n; i++)
//		cout << name[i] << endl;					//name0到name4分别是各个字符串的首地址	 ？有点不明白这里为什么就能输出地址对应的字符，而不是输出那个地址？
//}													//根据实验 如果cout<<*name[i]的话 会输出五个字符串的第一个字母