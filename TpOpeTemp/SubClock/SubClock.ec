node SubClock
  (a: bool;
  b: bool)
returns
  (isSubClock: bool);

let
  isSubClock = ((not (b and (not a))) -> (if (b and (not a)) then false else 
  (pre isSubClock)));
tel

