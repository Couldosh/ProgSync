node MainMuxN
  (a_0: bool;
  a_1: bool;
  b_0: bool;
  b_1: bool;
  set: bool)
returns
  (out_0: bool;
  out_1: bool);

let
  out_0 = (if set then a_0 else b_0);
  out_1 = (if set then a_1 else b_1);
tel

