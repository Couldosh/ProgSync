node sync
  (a: bool;
  b: bool)
returns
  (isSync: bool);

let
  isSync = ((a = b) -> (if (a = (not b)) then false else (pre isSync)));
tel

