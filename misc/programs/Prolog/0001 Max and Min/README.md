# Max and Min of two numbers

Here we will see one Prolog program, that can find the `minimum` of two numbers and the `maximum` of two numbers. First, we will create two predicates, `find_max(X,Y,Max)`. This takes X and Y values, and stores the maximum value into the `Max`. Similarly `find_min(X,Y,Min)` takes X and Y values, and store the minimum value into the `Min` variable.

## Output

```prolog
| ?- find_max(100,200,Max).

Max = 200

yes
| ?- find_max(40,10,Max).

Max = 40

yes
| ?- find_min(40,10,Min).

Min = 10

yes
| ?- find_min(100,200,Min).

Min = 100

yes
| ?-
```
