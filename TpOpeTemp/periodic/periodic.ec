node periodic
  (c: bool;
  n: int)
returns
  (clock: bool;
  counter: int);

let
  clock = (if (counter >= n) then true else false);
  counter = ((if c then n else 1) -> (if ((pre counter) >= n) then 1 else (if c 
  then ((pre counter) + 1) else (pre counter))));
tel

