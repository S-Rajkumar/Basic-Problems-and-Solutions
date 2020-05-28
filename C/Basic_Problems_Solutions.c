#include<stdio.h>
#include<string.h>

int get_choice();
void vowels_consonets_digits(char vcd[30]);
void reverse_number(int num);
void decimalToBinary(int num);
void find_next_20_leap_year(int num);

void main()
{
	char input[30];
	int choice,num;
	choice = get_choice();
	switch(choice)
	{
	case 1:
		printf("\n\t Vowels, Consonets and Digits \n");
		printf("Enter a string : ");
		scanf("%s",&input);
		vowels_consonets_digits(input);
		break;
	case 2:
		printf("\n\t Reverse a given number \n");
		printf("Enter a Number : ");
		scanf("%d",&num);
		reverse_number(num);
		break;
	case 3:
		printf("\n\t Decimal to Binary \n");
		printf("Enter a Number : ");
		scanf("%d",&num);
		decimalToBinary(num);
		break;
	case 4:
		printf("\n\t Print Next 20 Leap Year \n");
		printf("Enter year : ");
		scanf("%d",&num);
		find_next_20_leap_year(num);
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
	printf(" 2. Reverse a Given Number \n");
	printf(" 3. Decimal to Binary Convertor \n");
	printf(" 4. Print Next 20 Leap Years \n");
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

void reverse_number(int num)
{
	int n=num,r=0,d=0;
	while(n != 0)
	{
		d = n % 10 ;
		r = r * 10 + d ;
		n = n / 10 ;
	}
	printf("Reversed Number : %d \n",r);
}

void decimalToBinary(int num)
{
	int i = 0,j,bin[32],n=num;
	while(n > 0)
	{
		bin[i] = n % 2;
		n = n / 2;
		i++;
	}
	printf("Binary Value of %d : ",num);
	
	for(j=i-1; j>=0; j--)
	{
		printf("%d",bin[j]);
	}
	printf("\n");
}

void find_next_20_leap_year(int num)
{
	int y = num, i=0;
	while(i < 20)
	{
		if( (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 )
		{
			printf("%d. next leap year is %d \n",i+1,y);
			i++;
		}
		y++;
	}
}
