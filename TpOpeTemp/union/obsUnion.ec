node obsUnion
  (a: bool;
  b: bool)
returns
  (out: bool);

var
  V13_unionOfAandB: bool;
  V47_isSubClock: bool;
  V59_isSubClock: bool;

let
  out = (V47_isSubClock and V59_isSubClock);
  V13_unionOfAandB = (a or b);
  V47_isSubClock = ((not (a and (not V13_unionOfAandB))) -> (if (a and (not 
  V13_unionOfAandB)) then false else (pre V47_isSubClock)));
  V59_isSubClock = ((not (b and (not V13_unionOfAandB))) -> (if (b and (not 
  V13_unionOfAandB)) then false else (pre V59_isSubClock)));
tel

