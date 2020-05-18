from colorama import Fore
class Basic_Problems_Solutions :
	def vowels(self,str) :
		for i in str :
			if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U' :
				print(i,": vowel")
			elif ord(i) >= 48 and ord(i) <= 57 :
				print(i,": digit")
			else :
				print(i,": consonents")

a = Basic_Problems_Solutions()
print(Fore.RED + "\t Basic Problems and Solutions")
print(Fore.WHITE + " 1.Vowels, Consonets and Digits")
print(Fore.GREEN + "\n Enter Your Choice : ",end="")
choice = int(input())
if choice == 1 :
	vcd = input("Enter a String : ")
	a.vowels(vcd)
else :
	print("Error : Invalid Choice");
