node Dmux
  (in: bool;
  sel: bool)
returns
  (a: bool;
  b: bool);

let
  a = (if (not sel) then in else false);
  b = (if sel then in else false);
tel

