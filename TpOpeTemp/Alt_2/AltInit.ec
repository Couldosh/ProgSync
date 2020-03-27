node AltInit
  (a: bool;
  b: bool)
returns
  (err: bool);

var
  V5_turnA: bool;
  V6_init: bool;

let
  err = (false -> (if ((not a) and (not b)) then (pre err) else ((not V6_init) 
  and ((V5_turnA and a) or ((not V5_turnA) and b)))));
  V5_turnA = (false -> ((((pre V6_init) and b) or ((pre V5_turnA) and a)) or (
  (not (pre V5_turnA)) and b)));
  V6_init = (true -> (((pre V6_init) and (not a)) and (not b)));
tel

