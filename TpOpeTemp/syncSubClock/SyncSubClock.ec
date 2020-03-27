node SyncSubClock
  (a: bool;
  b: bool)
returns
  (isSync: bool);

var
  V40_isSubClock: bool;
  V48_isSubClock: bool;

let
  isSync = (V40_isSubClock and V48_isSubClock);
  V40_isSubClock = ((not (b and (not a))) -> (if (b and (not a)) then false 
  else (pre V40_isSubClock)));
  V48_isSubClock = ((not (a and (not b))) -> (if (a and (not b)) then false 
  else (pre V48_isSubClock)));
tel

