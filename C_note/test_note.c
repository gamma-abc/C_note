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
		printf("第%2d年，天朝的GDP=%f万亿", 2018 + i, ch*(pow(chd, i)));
		printf("  第%3d年，美帝的GDP=%f万亿,，差额是%f\n", 2018 + i, am*pow(amd, i), ch*(pow(chd, i)) - am * pow(amd, i));
		if ((ch*(pow(chd, i)) - (am * pow(amd, i)))>0)
		{
			printf("天朝将在%d超越美帝\n", 2018 + i);
			MessageBoxA(0, "恭喜天朝,第2018+i年超越美帝", "恭喜", 0);
			break;
		}
	}
	system("pause");
}

void main() {
	float f1 = 19.3e5;//e后只能为整数
	
	printf("f1=%f\n", f1);
	
	float div = 0,div1=0;
	div = 1 / 3;		//整数相除还是整数，之后再转换类型
	div1 = 1.0 / 3;		//此时会有类型转换，输正确的数
	printf("%f，%f\n", div, div1);
	//求余
	printf("%d\n", 5 % 3);		//2
	printf("%d\n", 5 % -3);		//2
	printf("%d\n", -5 % -3);	//-2
	printf("%d\n", -5 % 3);		//-2
	getchar();	//暂停到当前
}


void main8() {
	char f1 ='a';		//占一个字节
	char f3 = '1';		//一个字节
	int f4 = 1;			//四个字节
	wchar_t f2 = L'我';	//宽字符占两个字节，网页经常乱码的原因，其后要加L
	printf("char f1=%zd  wchar_t=%zd  int类型=%zd\n", sizeof(f1), sizeof(f2),sizeof('我'));	//sizeof('a')占四个字节,
	printf("%d",INT_MAX);
	getchar();													//	此时a是in类型,注意单双引号
}
void main9() {
	//字符1和整数1的区别
	char f1 = '1';
	int num = 1;
	printf("字符以整数打印为:%d 字符以字符形式打印：%c\n", f1, f1);
	printf("数字以整数打印：%d 数字以字符型打印：%c", num, num);
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
//有符号 --低字节数据向高字节数据转换填充符号位
//	char a=1;								  0000 0001	
//	int  b=a;	0000 0000 0000 0000 0000 0000 0000 0001
//	char a=-1;								  1111 1111	
//	int  b=a;	1111 1111 1111 1111 1111 1111 1111 1111

//无符号时全部填充0
//银行存钱舍弃问题，1.23==1.2	1.24==1.24

void main11() {
	double f1 = 1.23,f1_=f1;
	double f2 = (int)(f1 * 10+0.6)/10.0 ;
	printf("您输入的数=%lf\n", f1);
	if (f2<f1)
	{
		f1 = (int)(f1 * 10) / 10.0;
		printf("可以盗窃%.4f元",f1_-f2 );
	}
	printf("\n您存入=%.2f元", f1);
	getchar();
}

//将10进制转换成2进制并打印出来
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