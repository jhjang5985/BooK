#include <stdio.h>
#include <stdlib.h>
int x,y;
 struct Person;
 struct BooK;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct BooK
{
	int isbn;// å�� isbn ��ȣ  
	char title[31];//å�� ���� 
	char state;//å�� ���� 
	char author[11];//å�� ���� ��� 
    
};
struct Person
{
	int number;//��ȣ  
	char name[11];//��� �̸� 
	int landbookisbn[3];
    char landbooks;
};
void input(struct BooK *a,struct Person *b)
{
 FILE *fp=fopen("")
}

int main(int argc, char *argv[])
{
struct BooK *a;
struct Person *b;
input(a,b);
}
