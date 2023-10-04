BIT MANIPULATION
- it is the act of algorithmically manipulating bit or other pieces of data shorter than a byte.
converting decimal number(base 10) into a binary number(base 2)
- utilizes successive division by 2
348 -> binary 
348 / 2 = 174 R0(Least significant Bit)
174 /2 = 87 R0
87 / 2 = 43 R1
43 / 2 = 21 R1
21 / 2 = 10 R1
10 / 2 = 5 R0
5 / 2 = 2 R1
2 / 2 = 1 R0
1 / 2 = 0 R1 (Most significant Bit)
ans -> 101011100
convering decimal in to octal(base 8)
- utilizes successive division by 8
- remeinder is multiplied by 8

converting decimal into hexadecimal
- utilizes successive division by 16
- remeinder is multiplied by 16
conversion of hexadecimal(base 16) in to decimal(base 10)
BITWISE OPERATORS
- a set of operators for working a values bit-level representation.
Three classes of bitwise operators
UNARY(~) - used as a prefix to a bit vector(like negation on a number)
this unary complemennt operator flips each bit in its operand
0s becomes 1s, 1s becomes 0s
Example ; [0, 1, 0, 1] -> [1, 0, 1, 0] 

BINARY OPERATORS - operating on two vectors of bits
& and
| or
^ exclusive
& AND
- the bitwise and operator takes two bit integers a and b and produces c
Each of a and b's place values bits i are  compared
when both a and b are 1, then c equals to 1
otherwise c is 0
Example;
a = [1, 1, 0, 0]
b = [1, 0, 1, 0]
c(a & b) = [1, 0, 0, 0]

| OR
- the bitiwse or operator takes two bit vectors a|b and produces c
Each a nd b's place value bits i are compared
when either a or b, or both are 1, then c is 1
otheriwse c is 0
Example;
a = [1, 1,0,0]
b = [1, 0, 1, 0]
a|b = [1, 1, 1, 0]
^ EXCLUSIVE OR OPERATOR
- the biwise operator takes two bit vectors a ^ b and produces c
Each a and b's place values bits i are compared
when a is not equal to b, then c is 1
otherwise c is 0
example;
a = [1, 1, 0, 0]
b = [1, 0, 1, 0]
a ^ b = [0, 1, 1, 0]

BINARY SHIFT OPERATORS - LHS is a bit vector and RHS is an integer
<< shift left
- takes abit vector a on the left handside
- a magnitude m integer on the right side
- produces a bit vector b
a(w-m) through a(w-1) are truncated
b(0) through b(m -1) are zeroed
>> shift right
- takes a bit vector a on the left hand side
- a magnitude m integer on the right handside
- produces a bit vector b

its effect ai = b(i -m)
a(m -1 ) through a(0) are truncated
b(w-1) through b(w-m) are sign extende
- if a(w-1) is 0 the 0s will fill
- if a(w-1) is 1, then 1s will fill
why? - to make sure negative numbers in two's complement retain their sign bit
 

