#include<stdio.h>
#include<string.h>
int main()
{
	char str[100] = { 0 };
	int i;
	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", str, sizeof(str));
	int len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("��� �빮�ڷ� ���� ����!\n");
	printf("%s", str, sizeof(str));
}