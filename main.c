#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a,b;
	float c;
	
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d",&a);
	
	printf("�и� �Է��ϼ���:");
	scanf("%d",&b);
	
	c=(float)a/b;
	printf("�������� �����%.6f �Դϴ�.\n",c);
	
	return 0;
}
