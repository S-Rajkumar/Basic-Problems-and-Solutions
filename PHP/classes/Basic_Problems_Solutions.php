<?php
class Basic_Problems_Solutions {
	public $vcd;

	public function vowels_Consonents_Digits() {
		$n = strlen($this->vcd);
		$output = array();
		$output['input'] = $this->vcd;
		$res = array();
		for($i = 0; $i < $n; $i++) {
			$c = $this->vcd[$i];
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
}
?>
