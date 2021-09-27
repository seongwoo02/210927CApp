#include <stdio.h>
typedef struct _point
{
	int x;
	int y;
} Point;
void InitPoint(Point* p, int x, int y)
{
	p->x = x;
	p->y = y;
}
void UninitPoint(Point* p)
{
	p->x = 0;
	p->y = 0;
}
void PrintPoint(const Point* p)
{
	printf("(%d,%d)\n", p->x, p->y);
}
void AddPoint(Point* p, int x, int y)
{
	p->x += x;
	p->y += y;
}
int main()
{
	Point pt;
	InitPoint(&pt, 2, 3);
	PrintPoint(&pt);
	AddPoint(&pt, 3, 3);
	PrintPoint(&pt);
	UninitPoint(&pt);
}

//#include <stdio.h>
//void Increment(int* pn)
//{
//	++* pn;
//}
//void Print(const int* pn)
//{
//	printf("int : %d\n", *pn);
//}
//void Decrement(int* pn)
//{
//	--* pn;
//}
//void Reset(int* pn)
//{
//	*pn = 0;
//}
//int main()
//{
//	int n = 0;
//
//	Increment(&n);
//	Increment(&n);
//	Increment(&n);
//	Print(&n);
//
//	Decrement(&n);
//	Print(&n);
//
//	Reset(&n);
//	Print(&n);
//}

//#include <stdio.h>
//void PrintArray(const int* arr, int size)
//{
//	for (int i = 0;i < size; ++i)
//		printf("[%d] : %d\n", i, arr[i]);
//}
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int arr2[5] = {100,200,300,400,500};
//
//	PrintArray(arr, 3);
//	PrintArray(arr2, 5);
//	PrintArray(arr2 + 2, 2);
//}

//#include <stdio.h>
//typedef struct _point
//{
//	int x;
//	int y;
//} Point;
//void PrintPoint(const Point* arg)
//{
//	printf("(%d, %d)\n", arg->x, arg->y);
//}
//int main()
//{
//	Point pt1 = { 2,3 };
//
//	PrintPoint(&pt1);
//}

//#include <stdio.h>
//void PrintString(const char* s)
//{
//	printf("String : %s\n", s);
//}
//int main()
//{
//	char buf1[] = "Hello!";
//	const char* buf2 = "Hello!";
//
//	PrintString(buf1);
//	PrintString(buf2);
//	PrintString("Hello!");
//}

//#include <stdio.h>
//void PrintInteger(int n)
//{
//	for (int i = 0; i < n; ++i)
//		printf("Hello : %d\n", i);
//}
//int main()
//{
//	PrintInteger(100);
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 10; ++i)
//		printf("Hello : %d\n", i);
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("Hello!\n");
//	printf("Hello!\n");
//	printf("Hello!\n");
//	printf("Hello!\n");
//	printf("Hello!\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("Hello!\n");
//}