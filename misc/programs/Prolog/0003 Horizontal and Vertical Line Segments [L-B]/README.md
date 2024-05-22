# Horizontal and Vertical Line Segments [L-B]

There are three types of line segments, horizontal, vertical or oblique. This example verifies whether a line segment is horizontal, vertical or oblique.

![image](https://www.tutorialspoint.com/prolog/images/line_segments.jpg)

From this diagram we can understand that −

- For Horizontal lines, the y coordinate values of two endpoints are same.

- For Vertical lines, the x coordinate values of two endpoints are same.

- For Oblique lines, the (x,y) coordinates of two endpoints are different.

## Output

```prolog
| ?- [line_seg].
compiling D:/TP Prolog/Sample_Codes/line_seg.pl for byte code...
D:/TP Prolog/Sample_Codes/line_seg.pl compiled, 6 lines read - 1276 bytes written, 26 ms

yes
| ?- vertical(seg(point(10,20), point(10,30))).

yes
| ?- vertical(seg(point(10,20), point(15,30))).

no
| ?- oblique(seg(point(10,20), point(15,30))).

yes
| ?- oblique(seg(point(10,20), point(15,20))).

no
| ?- horizontal(seg(point(10,20), point(15,20))).

yes
| ?-
```
