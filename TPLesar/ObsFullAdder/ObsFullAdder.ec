node ObsFullAdder
  (a: bool;
  b: bool;
  Cin: bool)
returns
  (out: bool);

let
  out = (((a and b) or ((a xor b) and Cin)) = (((a and b) or (a and Cin)) or (b 
  and Cin)));
tel

