#include<stdio.h>
#include<string.h>

int get_choice();
void vowels_consonets_digits(char vcd[30]);


void main()
{
	char input[30];
	int choice;
	choice = get_choice();
	switch(choice)
	{
	case 1:
		printf("\n\t Vowels, Consonets and Digits \n");
		printf("Enter a string : ");
		scanf("%s",&input);
		vowels_consonets_digits(input);
		break;
	default :
		printf("Error : Invalid Choice\n");
		break;
	}
}

int get_choice()
{
	int choice;
	printf("\t Basic Problems and Solutions \n");
        printf(" 1. Vowels_Consonets_Digits \n");
	printf("Enter Your choice : ");
	scanf("%d",&choice);
	return choice;
}

void vowels_consonets_digits(char vcd[30])
{
	int i,d,n;
	char t;
	n = strlen(vcd);
        for(i=0;i<n;i++)
        {
                t = vcd[i]; // 'a' char
                d = vcd[i]; // 97 ascii for a char
                if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u' ||
                t ==  'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U')
                        printf(" %c : vowel\n",t);
                else if( d >= 48 && d <= 57) //digits 
                        printf(" %c : digits\n",t);
                else
                        printf(" %c : consonant\n",t);
        }
}
