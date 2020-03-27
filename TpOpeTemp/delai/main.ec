node main
  (c: bool)
returns
  (out: bool);

var
  V38_count: int;

let
  out = (if (V38_count = 2) then c else false);
  V38_count = (0 -> (if (((pre V38_count) = 2) or (not c)) then (pre V38_count) 
  else ((pre V38_count) + 1)));
tel

