//#include<iostream>
//using namespace std;
//void select_sort(int* p, int n);
//int main() {							//在5.7的基础上 将十个整数从小到大排列
//	int a[10], i;
//	cout << "please enter the original array: " << endl;
//	for (i = 0; i < 10; i++)
//		cin >> a[i]; 
//	select_sort(a, 10);					//  时刻记住 *p就是a
//	cout << "the sorted array: " << endl;
//	for (i = 0; i < 10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}
//
//void select_sort(int* p, int n) {		//形参数组名是指针变量可以改变  array++就是类似于p++    而实参数组名a是常量 不能改变 a++是不能用的
//	int i, j, k;						//还是不明白为什么要多出一个参数去等于i
//	for (i = 0; i < n - 1; i++) {		
//		for(j=i+1;j<n;j++)
//			if (*(p + j) < *(p + i)) {
//				k = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = k;
//			}
//	}
//}