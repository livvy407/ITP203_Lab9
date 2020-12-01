#include <stdio.h>
#include <conio.h>

struct hotel
{
	char name[20];
	char add[20];
	int grade;
	int arc;
	int rooms;
};
void output();
void out();

struct hotel inn[]={
	{"Ludrong Hotel","Thimphu",4,4600,60},
	{"Hotel Pelri","Gelephu",5,4600,10},
	{"Zhingkham Resort","Punakha",3,4000,40},
	{"Hotel Ugyen Ling","Bumthang",5,6000,20},
	{"Hotel Palm","Phuntsholing",2,3500,50}
};

void main()
{
	int go;
	printf("Enter 1 to show the hotels of a given grade in order of charges\n");
	printf("Enter 2 to show hotels with room charges less than a given values: \n\n");
	scanf("%d",&go);
	switch(go)
	{
	case 1: output();
	break;
	case 2: out();
	break;
	default:printf("Wrong input");
	break;
	}
	getch();
}

void output()
{
	int gr,i;
	printf("Enter Grade 1 to 5:");
	scanf("%d",&gr);
	if(gr>=1||gr<=5)
	{
		for(i=0;i<=4;i++)
		{
		if(inn[i].grade==gr)
		printf("Hotel Name: %s\nAddress:%s\nGrade:%d\nAverage Room charge:%d\n\n ",inn[i].name,inn[i].add,inn[i].grade,inn[i].arc,inn[i].rooms);
		}
	}
	else
	printf("Wrong grade input!");
}

void out()
{
	int ch,i=0;
	printf("Enter the Room charges not greater than 6000:");
	scanf("%d",&ch);
	while(i<5)
	{
	if(inn[i].arc<ch)
	printf("Hotel Name: %s\nAddress:%s\nGrade:%d\nAverage Room charge:%d\n",inn[i].name,inn[i].add,inn[i].grade,inn[i].arc,inn[i].rooms);
	i++;
	}
}