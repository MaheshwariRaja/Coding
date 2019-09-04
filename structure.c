
/*** @file   :
 * @brief     :
 * @Author    : Vishruthy Krishnamoorthy [vishruthy.k@vvdntech.in]
 * @Copyright : (c) 2019-2020 , VVDN Technologies Pvt. Ltd.
 *              Permission is hereby granted to everyone in VVDN Technologies
 *              to use the Software without restriction, including without
 *              limitation the rights to use, copy, modify, merge, publish,
 *              distribute, distribute with modifications.
 */
/******************************************************************************

  Online C Compiler.
  Code, Compile, Run and Debug C program online.
  Write your code in this editor and press "Run" button to compile and execute it.

 *******************************************************************************/

#include <stdio.h>
struct student
{
	char *n;
	int rollno;
	union stud{
		int registerno;
	}st;
}s;
struct stude
{
	char nam[20];
	char *p;
}stt;

int main()
{
//	int i;
	s.rollno=12;
	s.st.registerno=23;
	s.n="mahesh";
	printf("Name : %s\n",s.n);
	printf("Hello World\n");
	printf("RollNo : %d\n",s.rollno);
	printf("Register No : %d\n",s.st.registerno);
/*for(i=0;i<=4;i++)
{
printf("Name is : %c",s.n[i]);
}*/
	// strcpy(s.n,"mahesh");
/*	for(i=0;i<=4;i++)
	{
		printf("Name is %c",s.n[i]);
	}*/
	stt.p=&stt.nam[20];
	stt.p = "KRISHNA";
    printf("String is %s",stt.nam);
	return 0;
}
