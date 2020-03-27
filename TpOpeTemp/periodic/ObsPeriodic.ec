node ObsPeriodic
  (c: bool;
  n: int;
  m: int)
returns
  (out: bool);

var
  V34_counter: int;
  V43_counter: int;
  V36_c: bool;
  V53_counter: int;
  V47_n: int;

let
  out = ((if (V43_counter >= m) then true else false) = (if (V53_counter >= 
  V47_n) then true else false));
  V34_counter = ((if c then n else 1) -> (if ((pre V34_counter) >= n) then 1 
  else (if c then ((pre V34_counter) + 1) else (pre V34_counter))));
  V43_counter = ((if V36_c then m else 1) -> (if ((pre V43_counter) >= m) then 
  1 else (if V36_c then ((pre V43_counter) + 1) else (pre V43_counter))));
  V36_c = (if (V34_counter >= n) then true else false);
  V53_counter = ((if c then V47_n else 1) -> (if ((pre V53_counter) >= V47_n) 
  then 1 else (if c then ((pre V53_counter) + 1) else (pre V53_counter))));
  V47_n = (n * m);
tel

