node FullAdder2
  (a: bool;
  b: bool;
  c: bool)
returns
  (sum: bool;
  carry: bool);

var
  V12_sum1: bool;
  V13_carry1: bool;
  V14_carry2: bool;

let
  sum = (V12_sum1 xor c);
  carry = (V13_carry1 or V14_carry2);
  V12_sum1 = (a xor b);
  V13_carry1 = (a and b);
  V14_carry2 = (V12_sum1 and c);
tel

