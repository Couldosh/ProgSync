node FullAdder
  (a: bool;
  b: bool;
  c: bool)
returns
  (sum: bool;
  carry: bool);

let
  sum = ((a xor b) xor c);
  carry = (((a and b) or (a and c)) or (b and c));
tel

