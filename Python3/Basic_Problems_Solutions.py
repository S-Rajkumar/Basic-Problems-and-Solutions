from colorama import Fore
class Basic_Problems_Solutions :
	def vowels_consonents_digits(self,str) :
		for i in str :
			if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U' :
				print(i,": vowel")
			elif ord(i) >= 48 and ord(i) <= 57 :
				print(i,": digit")
			else :
				print(i,": consonents")
	def reverse_number(self,num) :
		n,r,d = num,0,0
		while n != 0 :
			d = n % 10
			r = r * 10 + d
			n = int(n / 10)
		print("Reversed Number :",r)

a = Basic_Problems_Solutions()
print(Fore.RED + "\t Basic Problems and Solutions")
print(Fore.WHITE + " 1.Vowels, Consonets and Digits")
print(Fore.WHITE + " 2.Reverse a Number")
print(Fore.GREEN + "\n Enter Your Choice : ",end="")
choice = int(input())
if choice == 1 :
	print(Fore.YELLOW + "\n\t Vowels, Consonents and Digits")
	vcd = input(Fore.GREEN + "Enter a String : ")
	a.vowels_consonents_digits(vcd)
elif choice == 2 :
	print(Fore.YELLOW + "\n\t Reverse a Number ")
	num = int(input(Fore.GREEN + "Enter Number : "))
	a.reverse_number(num)
else :
	print("Error : Invalid Choice");
