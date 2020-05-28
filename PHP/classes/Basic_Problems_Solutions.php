<?php
class Basic_Problems_Solutions {
	public $str;
	public $num;

	public function vowels_Consonents_Digits() {
		$n = strlen($this->str);
		$output = array();
		$output['input'] = $this->str;
		$res = array();
		for($i = 0; $i < $n; $i++) {
			$c = $this->str[$i];
			$d = ord($c);
			if($c == 'a' || $c == 'e' || $c == 'i' || $c == 'o' || $c == 'u' || $c == 'A' || $c == 'E' || $c == 'I' || $c == 'O' || $c == 'U')
				$res[$c] = 'vowel';
			else if($d >= 48 && $d <= 57)
				$res[$c] = 'digit';
			else
				$res[$c] = 'consonent';
		}
		$output['output'] = $res;
		return $output;
	}

	public function reverse_number() {
		$n = (int) $this->num;
		$r = 0;
		$d = 0;
		$output = array();
		$output['input'] = $n;
		
		while($n != 0) {
			$d = $n % 10;
			$r = $r * 10 + $d;
			$n = (int) ($n / 10);
		}
		$output['output'] = $r;
		return $output;
	}

	public function decimalToBinary() {
		$n = (int) $this->num;
		$i = 0;
		$binStr = '';
		$output = array();
		$output['input'] = $this->num;
		while($n > 0) {
			$bin = $n % 2;
			$n = (int) ($n / 2) ;
			$binStr .= $bin;
		}
		$output['output'] = $binStr;
		return $output;
	}

	public function find_next_20_leap_year() {
		$y = (int) $this->num;
		$i = 1;
		$output = array();
		$output['input'] = $this->num;
		$res = array();

		while( $i <= 20 ) {
			if( ($y % 4 == 0 && $y % 100 != 0) || $y % 400 == 0 ) {
				$res[$i] = "next leap year is ".$y;
				$i++;
			}
			$y++;
		}
		$output['output'] = $res;
		return $output;
	}
}
?>
