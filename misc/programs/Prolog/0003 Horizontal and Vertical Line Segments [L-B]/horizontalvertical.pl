vertical(seg(point(X,_),point(X,_))).

horizontal(seg(point(_,Y),point(_,Y))).

oblique(seg(point(X1,Y1),point(X2,Y2)))
   :-X1 \== X2,
      Y1 \== Y2.
