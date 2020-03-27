node exclusive
  (a: bool;
  b: bool)
returns
  (exclusive: bool);

let
  exclusive = ((a xor b) -> (if (a and b) then false else (pre exclusive)));
tel

