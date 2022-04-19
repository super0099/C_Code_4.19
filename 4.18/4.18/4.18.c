#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*练习题1:有0、1、2、3 四个数字，能组成多少个互不相同且无重复数字的四位数？全部输出在控制台*/
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

/*练习题2:输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。回车结束输入。
以"abcd -@ 123*5GXIT"为例*/
//int main()
//{
//    char c;
//    int letters = 0, spaces = 0, digits = 0, others = 0;
//    printf("请输入一串任意的字符：\n");
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
//    printf("字母有%d个，数字有%d个，空格有%d个，其他有%d个", letters, digits, spaces, others);
//    return 0;
//}

/*练习题3写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。（不可以使用
strlen函数*/
//int my_strlen(char* arr) {
//	//''和""是有区别的,
//	if (*arr != '\0') {
//		printf("%d\n", *arr);//指针位置,用ASCII码表示
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "yangxiongming";
//	int len = my_strlen(arr);//arr是个数组,数组传参,传过去的不是整个数组,而是第一个元素的地址
//	printf("数组长度为:%d\n", len);
//	return 0;
//}

/*练习四、字符串反转，如将字符串 "www.baidu.com" 反转为 "moc.udiab.www"。*/
//将字符串逆序,不使用库函数
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

/*练习题5.输入一个整数，并将其反转后输出*/
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
//	int newNumber = reverse(number); // 反转数字 
//	printf("%d =>\n", newNumber);
//}

/*练习八、*/
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

/*练习九、从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到文件"test.txt"中保
存。 输入的字符串以#结束*/


/*练习十、控制台输出**斐波那契数列，输出数量由控制台输入。*/
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

