//#include<iostream>
//using namespace std;
//void select_sort(int* p, int n);
//int main() {							//��5.7�Ļ����� ��ʮ��������С��������
//	int a[10], i;
//	cout << "please enter the original array: " << endl;
//	for (i = 0; i < 10; i++)
//		cin >> a[i]; 
//	select_sort(a, 10);					//  ʱ�̼�ס *p����a
//	cout << "the sorted array: " << endl;
//	for (i = 0; i < 10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}
//
//void select_sort(int* p, int n) {		//�β���������ָ��������Ըı�  array++����������p++    ��ʵ��������a�ǳ��� ���ܸı� a++�ǲ����õ�
//	int i, j, k;						//���ǲ�����ΪʲôҪ���һ������ȥ����i
//	for (i = 0; i < n - 1; i++) {		
//		for(j=i+1;j<n;j++)
//			if (*(p + j) < *(p + i)) {
//				k = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = k;
//			}
//	}
//}