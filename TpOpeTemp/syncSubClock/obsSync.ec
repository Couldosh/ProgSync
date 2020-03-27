node obsSync
  (a: bool;
  b: bool)
returns
  (isEqual: bool);

var
  V108_isSubClock: bool;
  V109_isSubClock: bool;
  V117_isSync: bool;
  V125_isSync: bool;
  V135_countA: int;
  V136_countB: int;
  V137_countA: int;
  V138_countB: int;

let
  isEqual = (((V108_isSubClock and V109_isSubClock) = V117_isSync) and (
  V125_isSync = ((V135_countA >= V136_countB) and (V137_countA >= V138_countB))
  ));
  V108_isSubClock = ((not (b and (not a))) -> (if (b and (not a)) then false 
  else (pre V108_isSubClock)));
  V109_isSubClock = ((not (a and (not b))) -> (if (a and (not b)) then false 
  else (pre V109_isSubClock)));
  V117_isSync = ((a = b) -> (if (a = (not b)) then false else (pre V117_isSync)
  ));
  V125_isSync = ((a = b) -> (if (a = (not b)) then false else (pre V125_isSync)
  ));
  V135_countA = ((if a then 1 else 0) -> (if a then ((pre V135_countA) + 1) 
  else (pre V135_countA)));
  V136_countB = ((if b then 1 else 0) -> (if b then ((pre V136_countB) + 1) 
  else (pre V136_countB)));
  V137_countA = ((if b then 1 else 0) -> (if b then ((pre V137_countA) + 1) 
  else (pre V137_countA)));
  V138_countB = ((if a then 1 else 0) -> (if a then ((pre V138_countB) + 1) 
  else (pre V138_countB)));
tel

