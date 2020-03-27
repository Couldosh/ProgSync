node inf_sup
  (a: bool;
  b: bool)
returns
  (inf: bool;
  sup: bool);

var
  V6_count: int;

let
  inf = (if (a and b) then true else (if ((not a) and (not b)) then false else 
  (if ((V6_count mod 2) = 1) then true else false)));
  sup = (if (a and b) then true else (if ((not a) and (not b)) then false else 
  (if ((V6_count mod 2) = 0) then true else false)));
  V6_count = ((if (a and b) then 2 else (if ((not a) and (not b)) then 0 else 1
  )) -> (if (a and b) then ((pre V6_count) + 2) else (if ((not a) and (not b)) 
  then (pre V6_count) else ((pre V6_count) + 1))));
tel

