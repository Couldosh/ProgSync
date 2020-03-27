node sync
  (a: bool;
  b: bool)
returns
  (isSync: bool);

var
  V32_countA: int;
  V33_countB: int;
  V42_countA: int;
  V43_countB: int;

let
  isSync = ((V32_countA >= V33_countB) and (V42_countA >= V43_countB));
  V32_countA = ((if a then 1 else 0) -> (if a then ((pre V32_countA) + 1) else 
  (pre V32_countA)));
  V33_countB = ((if b then 1 else 0) -> (if b then ((pre V33_countB) + 1) else 
  (pre V33_countB)));
  V42_countA = ((if b then 1 else 0) -> (if b then ((pre V42_countA) + 1) else 
  (pre V42_countA)));
  V43_countB = ((if a then 1 else 0) -> (if a then ((pre V43_countB) + 1) else 
  (pre V43_countB)));
tel

