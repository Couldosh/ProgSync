node Mux
  (a: bool;
  b: bool;
  set: bool)
returns
  (out: bool);

let
  out = (if set then a else b);
tel

