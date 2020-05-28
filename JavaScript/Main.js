function vcd_find() {
	var ascii_list = "aeiouAEIOU";
	var digit_list = "0123456789";
	var str = document.getElementById("vcd_input").value;
	var output = document.getElementById("vcd_output");
	output.innerHTML = "input : "+ str + "<br />";

	for(var i = 0; i<str.length; i++) {
		if(ascii_list.indexOf(str[i]) !== -1 )
			output.innerHTML += "<b>"+ str[i] + "</b> Vowel <br /> ";
		else if(digit_list.indexOf(str[i]) !== -1)
			output.innerHTML += "<b>"+ str[i] + "</b> Digit <br />";
		else
			output.innerHTML += "<b>"+ str[i] + "</b> Consonents <br />";
	}
}

function rev_convert() {
	var n = parseInt(document.getElementById("rev_input").value,10);
	var rev = 0;
	var d = 0;
	var output = document.getElementById("rev_output");
	output.innerHTML = "input : " + n + "<br />";

	while(n>0) {
		d = n % 10;
		rev = rev * 10 + d ;
		n = Math.floor(n / 10);
	}
	
	output.innerHTML += "output : " + rev;
}

function d2b_convert() {
	var n = parseInt(document.getElementById("d2b_input").value,10);
	var bin = 0;
	var binStr = '';
	var output = document.getElementById("d2b_output");
	output.innerHTML = "input  : "+ n +"<br />";
	
	while(n > 0) {
		bin = n % 2 ;
		n = Math.floor( n / 2 );
		binStr += bin;
	}
	output.innerHTML += "output : "+ binStr.split("").reverse().join("");
}

function find_next_20_leap_year() {
	var y = parseInt(document.getElementById("year_input").value,10);
	var i = 1;
	var output = document.getElementById("year_output");
	output.innerHTML = "input : "+ y + "<br />";

	while(i <= 20 ) {
		if( (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ) {
			output.innerHTML += i +". next leap year is "+ y +"<br />";
			i++;
		}
		y++;
	}
}
