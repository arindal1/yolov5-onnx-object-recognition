# Resistance and Resistive Circuits [L-B]

In this section, we will see how to write a prolog program that will help us find the equivalent resistance of a resistive circuit.

Let us consider the following circuit to understand this concept −

![image](https://www.tutorialspoint.com/prolog/images/resistance_and_resistive_circuits.jpg)

We have to find the equivalent resistance of this network. At first, we will try to get the result by hand, then try to see whether the result is matching with the prolog output or not.

We know that there are two rules −

- If R1 and R2 are in Series, then equivalent resistor Re = R1 + R2.

- If R1 and R2 are in Parallel, then equivalent resistor Re = (R1 * R2)/(R1 + R2).

Here 10 Ohm and 40 Ohm resistors are in parallel, then that is in series with 12 Ohm, and the equivalent resistor of the lower half is parallel with 30 Ohm. So let’s try to calculate the equivalent resistance.

- R3 = (10 * 40)/(10 + 40) = 400/50 = 8 Ohm

- R4 = R3 + 12 = 8 + 12 = 20 Ohm

- R5 = (20 * 30)/(20 + 30) = 12 Ohm

## Output

``prolog
| ?- [resistance].
compiling D:/TP Prolog/Sample_Codes/resistance.pl for byte code...
D:/TP Prolog/Sample_Codes/resistance.pl compiled, 1 lines read - 804 bytes written, 14 ms

yes
| ?- parallel(10,40,R3).

R3 = 8.0

yes
| ?- series(8,12,R4).

R4 = 20

yes
| ?- parallel(20,30,R5).

R5 = 12.0

yes
| ?- parallel(10,40,R3),series(R3,12,R4),parallel(R4,30,R5).

R3 = 8.0
R4 = 20.0
R5 = 12.0

yes
| ?-
```
