node faster
  (a: bool;
  b: bool)
returns
  (aFaster: bool;
  countA: int;
  countB: int);

let
  aFaster = (countA >= countB);
  countA = ((if a then 1 else 0) -> (if a then ((pre countA) + 1) else (pre 
  countA)));
  countB = ((if b then 1 else 0) -> (if b then ((pre countB) + 1) else (pre 
  countB)));
tel

