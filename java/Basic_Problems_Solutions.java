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
}
