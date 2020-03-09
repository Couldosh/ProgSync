node Logic
  (a: bool;
  b: bool)
returns
  (And: bool;
  Nand: bool;
  Or: bool;
  Xor: bool);

let
  And = (a and b);
  Nand = (not (a and b));
  Or = (a or b);
  Xor = ((a or b) and (not (a and b)));
tel

