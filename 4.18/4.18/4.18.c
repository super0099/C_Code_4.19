#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*��ϰ��1:��0��1��2��3 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ����ȫ������ڿ���̨*/
//int main() {
//	int arr[4] = {0,1,2,3};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			for (int k = 0; k < size; k++)
//			{
//				for (int h = 0; h < size; h++)
//				{
//					if (arr[i] != arr[j] && arr[i] != arr[k] && arr[i] != arr[h]&& arr[j]!= arr[k]&& arr[j]!= arr[h]&& arr[k]!= arr[h]) {
//						printf("%d%d%d%d\n", arr[i], arr[j], arr[k], arr[h]);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

/*��ϰ��2:����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ������س��������롣
��"abcd -@ 123*5GXIT"Ϊ��*/
//int main()
//{
//    char c;
//    int letters = 0, spaces = 0, digits = 0, others = 0;
//    printf("������һ��������ַ���\n");
//    while ((c = getchar()) != '\n')
//    {
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//            letters++;
//        else if (c >= '0' && c <= '9')
//            digits++;
//        else if (c == ' ')
//            spaces++;
//        else
//            others++;
//    }
//    printf("��ĸ��%d����������%d�����ո���%d����������%d��", letters, digits, spaces, others);
//    return 0;
//}

/*��ϰ��3дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ���������ʹ��
strlen����*/
//int my_strlen(char* arr) {
//	//''��""���������,
//	if (*arr != '\0') {
//		printf("%d\n", *arr);//ָ��λ��,��ASCII���ʾ
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "yangxiongming";
//	int len = my_strlen(arr);//arr�Ǹ�����,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//	printf("���鳤��Ϊ:%d\n", len);
//	return 0;
//}

/*��ϰ�ġ��ַ�����ת���罫�ַ��� "www.baidu.com" ��תΪ "moc.udiab.www"��*/
//���ַ�������,��ʹ�ÿ⺯��
//int main() {
//	char arr[] = "www.baidu.com";
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0; i < 13; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}

/*��ϰ��5.����һ�������������䷴ת�����*/
//int reverse(int num) {
//	static int result = 0;
//	if (num != 0) {
//		int i = num % 10;
//		result = result * 10 + i;
//		reverse(num / 10);
//	}
//	return result;
//}
//int main() {
//	int number = 12340;
//	printf("%d =>\n", number); //12340 
//	int newNumber = reverse(number); // ��ת���� 
//	printf("%d =>\n", newNumber);
//}

/*��ϰ�ˡ�*/
//int reverse(int num) {
//	static int a = 0;
//	static int c = 1000;
//	if (num != 0) {
//		int i = num / c;
//		int e = i * c;
//		num -= e;
//		int d = (i + 5)%10;
//		c /= 10;
//		a = a * 10 + d;
//		reverse(num);
//	}
//	return a;
//}
//int transposition(int num) {
//	int arr[4] = { 0 };
//	int a = 0;
//	while (num>0)
//	{
//		arr[a] = num % 10;
//		a++;
//		num = num / 10;
//	}
//	int test1 = arr[0];
//	int test2 = arr[2];
//	//6789
//	//9876
//	arr[0] = arr[1];
//	arr[1] = test1;
//	arr[2] = arr[3];
//	arr[3] = test2;
//	int f = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (i==0) {
//			f += (arr[i] * 1000);
//		}
//		if (i == 1) {
//			f += (arr[i] * 100);
//		}
//		if (i == 2) {
//			f += (arr[i] * 10);
//		}
//		if (i == 3) {
//			f += arr[i];
//		}
//	}
//	return f;
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int a = reverse(num);
//	int b = transposition(a);
//	printf("%d", b);
//	return 0;
//}

/*��ϰ�š��Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��Ȼ��������ļ�"test.txt"�б�
�档 ������ַ�����#����*/


/*��ϰʮ������̨���**쳲��������У���������ɿ���̨���롣*/
//void fs(int n, int m, int k) {
//	printf("%d,%d,", n, m);
//	if (k < 5) {
//		k++;
//		fs((n + m), m + (n + m), k);
//	}
//}
//int main() {
//	int left = 1;
//	int right = 1;
//	fs(left,right,1);
//	return 0;
//}

