//#include<iostream>
//using namespace std;
//int main() {						//�����ַ�������ĸ��С�������
//	void sort(char* name[], int n);
//	void print(char* name[], int n);
//	char* name[] = { "BASIC","FORTRAN","C++","Pascal","COBOL" };		//����ָ������,���ֵ�ֱ���������ַ�������ʼ��ַ��
//	int n = 5;
//	sort(name, n);
//	print(name, n);
//	return 0;
//}
//void sort(char* name[], int n) {									//sort�������β�name��ָ��������������ʵ������name����Ԫ�ص�ַ ��������ָ����ͬһ������
//	char* temp;
//	int i, j, k;													//���ڶ���  ����һ������k��¼��С���ַ� �ܼ������渳ֵ����ִ�д���
//	for (i = 0; i < n - 1; i++) {
//		k = i;													//��ʵ���൱���ȼ����һ���ַ�����С
//		for (j = i + 1; j < n; j++)
//			if (strcmp(name[i], name[j]) > 0) {					//�ַ����ȽϺ���strcmp ���name[i]��ָ���ַ�������name[j]��ָ���ַ��� ����ֵ����0
//				k = j;											//�ӵ�i��������n��������С��ţ�i����j��������k��
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
//		cout << name[i] << endl;					//name0��name4�ֱ��Ǹ����ַ������׵�ַ	 ���е㲻��������Ϊʲô���������ַ��Ӧ���ַ�������������Ǹ���ַ��
//}													//����ʵ�� ���cout<<*name[i]�Ļ� ���������ַ����ĵ�һ����ĸ