#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <Windows.h>
#include<stdio.h>
#include<math.h>

void open() {
	ShellExecuteA(0, "open", "notepad.exe", 0, 0, 1);
}


void delay() {
	int i = 1;
	while (i<10)
	{
		Sleep(100);
		i++;
		printf("%d\n", i);
	}
}


void main1() {
	const int a = 20;
	unsigned int b = -7;
	printf("%d\n", a);
	*(int *)(&a) = -1;
	printf("%d\n", a);
	printf("%p\n", &b);
	printf("%u\n", b);
	printf("%d\n", 100);

	int c = -1;
	unsigned int c1 = -1;




	system("pause");



}
void main3() {
	int num = -1, b = 1, y = 0;
	char str[] = "hello world";
	//num++; y = num;
	int data = 0101u;
	int num1 = 0;
	printf("====%p", &num);
	printf("\ndata=%o\n", data);
	printf("data addr=%p\n", &data);
	printf("-1=%x\n", num);
	printf("y is =%d\n", y);
	printf("%4x%4x\n", 0xffffff, 0xcc);
	printf("str=%s\n", str);
	printf("\n%20s+%10s+\n", "------------------", "----------");
	printf("%20s|%10s|\n", "name", "ID");
	system("pause");
}
int add(int a, int b);
void main4() {
	int a = 1, b = 2;
	int y = add(a, b);
	printf("the num is %d\n", y);
	system("pause");
}
int add(int a, int b) {
	return a + b;
}
void main5() {
	long long int num = 13783961127001;
	printf("num=%lld\n", num);
	printf("%zd\n", sizeof(long long));
	long int int_max = LONG_MAX;
	long long int long_max = LLONG_MAX;
	printf("%d %lld\n", int_max, long_max);
	system("pause");
}
void main6() {
	double ch = 10.7, am = 17, chd = 1.07, amd = 1.03;
	for (int i = 0; i <= 100; i++)
	{
		printf("��%2d�꣬�쳯��GDP=%f����", 2018 + i, ch*(pow(chd, i)));
		printf("  ��%3d�꣬���۵�GDP=%f����,�������%f\n", 2018 + i, am*pow(amd, i), ch*(pow(chd, i)) - am * pow(amd, i));
		if ((ch*(pow(chd, i)) - (am * pow(amd, i)))>0)
		{
			printf("�쳯����%d��Խ����\n", 2018 + i);
			MessageBoxA(0, "��ϲ�쳯,��2018+i�곬Խ����", "��ϲ", 0);
			break;
		}
	}
	system("pause");
}

void main() {
	float f1 = 19.3e5;//e��ֻ��Ϊ����
	
	printf("f1=%f\n", f1);
	
	float div = 0,div1=0;
	div = 1 / 3;		//�����������������֮����ת������
	div1 = 1.0 / 3;		//��ʱ��������ת��������ȷ����
	printf("%f��%f\n", div, div1);
	//����
	printf("%d\n", 5 % 3);		//2
	printf("%d\n", 5 % -3);		//2
	printf("%d\n", -5 % -3);	//-2
	printf("%d\n", -5 % 3);		//-2
	getchar();	//��ͣ����ǰ
}


void main8() {
	char f1 ='a';		//ռһ���ֽ�
	char f3 = '1';		//һ���ֽ�
	int f4 = 1;			//�ĸ��ֽ�
	wchar_t f2 = L'��';	//���ַ�ռ�����ֽڣ���ҳ���������ԭ�����Ҫ��L
	printf("char f1=%zd  wchar_t=%zd  int����=%zd\n", sizeof(f1), sizeof(f2),sizeof('��'));	//sizeof('a')ռ�ĸ��ֽ�,
	printf("%d",INT_MAX);
	getchar();													//	��ʱa��in����,ע�ⵥ˫����
}
void main9() {
	//�ַ�1������1������
	char f1 = '1';
	int num = 1;
	printf("�ַ���������ӡΪ:%d �ַ����ַ���ʽ��ӡ��%c\n", f1, f1);
	printf("������������ӡ��%d �������ַ��ʹ�ӡ��%c", num, num);
	getchar();
}
void main10() {
	char str[5] = { 'a','b','c' };
	//str[0] +=1;
	//str[1] +=1; 
	//str[2] +=1;
	printf("%c\n", str[0]+10);
	char st[100] = { 0 };
	//sprintf(st, "color%s","jj");
	//system(st);
	char ch = 'a';
	printf("a=%zd", sizeof(ch));
	getchar();
}
//�з��� --���ֽ���������ֽ�����ת��������λ
//	char a=1;								  0000 0001	
//	int  b=a;	0000 0000 0000 0000 0000 0000 0000 0001
//	char a=-1;								  1111 1111	
//	int  b=a;	1111 1111 1111 1111 1111 1111 1111 1111

//�޷���ʱȫ�����0
//���д�Ǯ�������⣬1.23==1.2	1.24==1.24

void main11() {
	double f1 = 1.23,f1_=f1;
	double f2 = (int)(f1 * 10+0.6)/10.0 ;
	printf("���������=%lf\n", f1);
	if (f2<f1)
	{
		f1 = (int)(f1 * 10) / 10.0;
		printf("���Ե���%.4fԪ",f1_-f2 );
	}
	printf("\n������=%.2fԪ", f1);
	getchar();
}

//��10����ת����2���Ʋ���ӡ����
void main12() {
	double f1 = 1.24;
	double f2 = (int)(f1 * 10 + 0.6);
	int num = 0;
	char str[32] = { 0 };
	scanf("%i", &num);
	_itoa(num, str, 8);
	printf("%s\n", str);
	system("pause");
}