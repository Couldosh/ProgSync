node Alt
  (a: bool;
  b: bool)
returns
  (err: bool);

var
  V5_turnA: bool;

let
  err = (false -> (if ((not a) and (not b)) then (pre err) else (((pre V5_turnA
  ) and a) or ((not (pre V5_turnA)) and b))));
  V5_turnA = (a -> (if (a and (not (pre V5_turnA))) then true else (if (b and 
  (pre V5_turnA)) then false else (pre V5_turnA))));
tel

