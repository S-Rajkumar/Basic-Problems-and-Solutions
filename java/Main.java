import java.util.Scanner;
class Main {
	public static void main(String argv[]) {
		int num;
		String str;
		Basic_Problems_Solutions s = new Basic_Problems_Solutions();
		Scanner in = new Scanner(System.in);
		System.out.println("\t Basic Problems and Solutions ");
                System.out.println(" 1. Vowels, Consonets and Digits");
		System.out.println(" 2. Reverse a Number ");
		System.out.println(" 3. Decimal to Binary Convertor ");
                System.out.print("Enter Your Choice : ");
                int choice = in.nextInt();
		switch(choice) {
			case 1 :
				System.out.println("\n\t Vowels, Consonents and Digits");
				System.out.print("Enter String : ");
				str = in.next();
				s.vowels_Consonets_Digits(str);
				break;
			case 2 :
				System.out.println("\n\t Reverse a Number");
				System.out.print("Enter Number : ");
				num = in.nextInt();
				s.reverse_number(num);
				break;
			case 3 :
				System.out.println("\n\t Decimal to Binary ");
				System.out.print("Enter Number : ");
				num = in.nextInt();
				s.decimalToBinary(num);
				break;
			default :
				System.out.println("\n Error : Invalid Choice ");
				break;
		}
		in.close();
	}
}
