import java.util.Scanner;
class Main {
	public static void main(String argv[]) {
		Basic_Problems_Solutions s = new Basic_Problems_Solutions();
		Scanner in = new Scanner(System.in);
		System.out.println("\t Basic Problems and Solutions ");
                System.out.println(" 1. Vowels, Consonets and Digits");
                System.out.print("\nEnter Your Choice : ");
                int choice = in.nextInt();
		switch(choice) {
			case 1 :
				System.out.print("\nEnter String : ");
				String vcd = in.next();
				s.vowels_Consonets_Digits(vcd);
				break;
			default :
				System.out.println("\n Error : Invalid Choice ");
				break;
		}
		in.close();
	}
}
