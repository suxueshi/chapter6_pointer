//#include<iostream>
//using namespace std;
//void swap(int* p1, int* p2);
//int main() {					//�����������Ӵ�С���
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
//void swap(int* p1, int* p2) {	//�����������ǽ�*p1��*p2   ��ֵ   ���л��� �����൱�ڰ�a  bֵ����   p1��Ȼ��a�ĵ�ַ
//	int temp;					// ������ͼ�ı��β�ָ�������ֵ��ʹʵ��ָ�������ֵ�ı�
//	temp = *p1;					//���ú���ʱ����ı�ʵ��ָ�������ֵ�����ǿ��Ըı�ʵ��ָ�������ָ��ı�����ֵ
//	*p1 = *p2;					// �������ÿ��ԣ�����ֻ���ԣ��õ�һ������ֵ�����ǿ���ͨ��ָ������ı����������б�����ֵ
//	*p2 = temp;
//}
//
//// ����˵����void swap(int x, int y){int temp; temp=x; x=y; y=temp  } ���ֽ��������Ǹı���x y��ֵ ���ǲ��ܸı�ab��ֵ  �β�ֵ�ĸı��޷�����ʵ��