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
	printf("%f\n", 100);

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
	printf("====%x", &num);
	printf("\ndata=%o\n", data);
	printf("data addr=%x\n", &data);
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
	printf("%d\n", sizeof(long long));
	long int int_max = LONG_MAX;
	long long int long_max = LLONG_MAX;
	printf("%d %lld\n", int_max, long_max);
	system("pause");
}
void main6() {
	float ch = 10.7, am = 17, chd = 1.07, amd = 1.03;
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
	printf("f1=%f", f1);
	getchar();
}