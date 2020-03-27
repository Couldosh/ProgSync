node obsIntersection
  (a: bool;
  b: bool)
returns
  (out: bool);

var
  V13_intersectionOfAandB: bool;
  V47_isSubClock: bool;
  V59_isSubClock: bool;

let
  out = (V47_isSubClock and V59_isSubClock);
  V13_intersectionOfAandB = (a and b);
  V47_isSubClock = ((not (V13_intersectionOfAandB and (not a))) -> (if (
  V13_intersectionOfAandB and (not a)) then false else (pre V47_isSubClock)));
  V59_isSubClock = ((not (V13_intersectionOfAandB and (not b))) -> (if (
  V13_intersectionOfAandB and (not b)) then false else (pre V59_isSubClock)));
tel

