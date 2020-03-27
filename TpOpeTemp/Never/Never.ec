node Never
  (a: bool)
returns
  (out: bool);

let
  out = ((not a) -> ((pre out) and (not a)));
tel

