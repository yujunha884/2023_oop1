﻿// 05_06_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

/// Ex.7-4.

typedef struct STag
{
	int				m;
	char			str1[4];
	const char*		str2;
} SType;


int main()
{
	SType s1;
	s1.m = 2017;
	memcpy(s1.str1, "C++", 4);
	s1.str2 = "World";		/// 상수화된 상태. Data 영역에 생성

	/// 각 멤버의 주소 값 출력
	printf("%p %p %p %p\n", &s1.m, &s1.str1, &s1.str2, s1.str2);
	//*s1.str2 = 'a';
	/// *( s1.str2 + 0 )

	SType s2;
	/// 구조체 변수끼리는 일반 변수처럼 대입이 가능하다!!! -> 다른 연산자는 사용 불가
	/// 각 요소의 값들은 모두 복사된다.
	s2 = s1;

	/*
	int a, b;
	if (a == b)
	{

	}
	if (s1 > s2)
	{

	}
	*/

	/// 각 멤버의 주소 값 출력
	printf("%p %p %p %p\n", &s2.m, &s2.str1, &s2.str2, s2.str2);

	cout << s2.m << " " << s2.str1 << " " << s2.str2 << endl;
}



/*
/// typedef : 자료형의 정의 
/// typedef A B;	---> 앞으로 A는 B로 사용한다.
typedef
/// A : 구조체명에 설명을 입력하면 나중에 확인이 쉽다.
struct example_for_5_6_oop_2_class
{
	int			x;
	int			y;
	int			z;
}
/// B : 대부분 모두 대문자로 사용
INT, *PINT;

int main()
{
	INT c;
	PINT p = &c;
	//INT *ptr = &c;
	/// 구조체 변수가 일반 변수처럼 선언된 경우의 멤버 접근 : . 연산자
	c.x = 10;
	c.y = 20;
	c.z = 30;
	printf("%d %d %d\n", c.x, c.y, c.z);
	/// 구조체 변수가 포인터 변수로 선언된 경우의 멤버 접근 : -> 연산자
	p->x = 1;
	p->y = 2;
	p->z = 3;
	printf("%d %d %d\n", c.x, c.y, c.z);
	printf("%d %d %d\n", p->x, p->y, p->z);
}


/ *
/// * 구조체의 사용 이유 : 다른 자료형을 하나의 자료형으로 사용하고자 할때
/// 선언 : 예약어 구조체명 { 구조체 멤버 리스트; ... };
struct example
{
	int				x;
	int				y;
	int				z;
};

int main()
{
	/// 구조체의 사용 : 예약어 구조체명 사용할변수명(구조체의대표이름)
	struct example ex;
	int *p = (int*)&ex;
	/// *구조체 멤버의 접근
	ex.x = 10;
	ex.y = 20;
	ex.z = 30;

	printf("%d %d %d\n", ex.x, ex.y, ex.z);
	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
	*p = 3;
	*(p + 1) = 5;
	*(p + 2) = 8;
	printf("%d %d %d\n", ex.x, ex.y, ex.z);
    std::cout << "Hello World!\n";
}
*/