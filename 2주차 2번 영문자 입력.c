#include<stdio.h>
int main() 
{
	char c = { 0 };
	char d = { 0 };
	while (1)
	{
		printf("�����ڸ� �Է��ϼ���:(0�� �Է��ϸ� ����) ");
		scanf_s("%c", &c);
		getchar();
		d = c;
		if (c >= 'A' && c <= 'Z')
		{
			c += 32;
			printf("�빮�� %c�� �ҹ��ڷδ� %c\n", d, c);
		}
		else if (c >= 'a' && c <= 'z')
		{
			c -= 32;
			printf("�ҹ��� %c�� �빮�ڷδ� %c\n", d, c);

		}
		else if (c == '0')
			printf("���α׷��� �����մϴ�.");
			return 0;
		else
		{
			printf("�߸� �Է�\n");
		}
	}
}