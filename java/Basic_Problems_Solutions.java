public class Basic_Problems_Solutions {
	public void vowels_Consonets_Digits(String vcd) {
		char t;
		int d;
		for(int i=0;i<vcd.length();i++) {
			t = vcd.charAt(i);
			d = (int)t;
			if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u' ||
                t ==  'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U')
                	        System.out.println(t+" : vowel");
	                else if( d >= 48 && d <= 58)
        	                System.out.println(t+" : digits");
	                else
        	                System.out.println(t+" : consonant");
		}
	}

	public void reverse_number(int num) {
		int n=num, r = 0, d = 0;
		while(n != 0) {
			d = n % 10;
			r = r * 10 + d;
			n = n / 10;
		}
		System.out.println("Reversed Number : "+r);
	}
}
