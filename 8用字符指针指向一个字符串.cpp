//#include<iostream>
//using namespace std;
//
//
////int main() {						//����һ���ַ�ָ���������ʼ����Ȼ�������ָ����ַ���
////	char* str = "i love China.";   //ʵ���ϰ��ַ�����һ��Ԫ�صĵ�ַ����str ,���ʱʹ��str�Զ���1  ֱ������'\0'
////	cout << str << endl;
////	return 0;
////}
//
//int main() {        //���ַ���str1����Ϊ�ַ���str2
//	char str1[] = " i love China", str2[20], * p1, * p2;
//	p1 = str1;
//	p2 = str2;
//	for (; *p1 != '\0'; p1++, p2++)	 //for���������ʽ������Ǻ��õ�++������ִ����ȫ��for�����֮��ִ�У���ˣ����˳�ѭ����ʱ��i��ֵ���������һ��ִ��ѭ��ʱ���n-1��������ѭ��֮���ּ���1������˳���ʱ��i��ֵΪn��
//		*p2 = *p1;
//	*p2 = '\0';
//	p1 = str1;
//	p2 = str2;
//	cout << "str1 is" << p1 << endl;
//	cout << "str2 is" << p2 << endl;
//	return 0;
//}