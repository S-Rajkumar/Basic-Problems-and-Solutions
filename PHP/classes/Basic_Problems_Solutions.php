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
}
?>
