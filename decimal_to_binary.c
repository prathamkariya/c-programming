/*
Integer to Binary 
                 256     128     64      32      16      8       4       2      1

    eg.    103    0       0       1       1       0      0       1       1      1  
           105    0       0       1       1       0      1       0       1      0
           96     0       0       1       1       0      0       0       0      0

Decimal to Binary Conversion (Using Place Values)

1.Understanding Binary Place Values:
In binary, each digit represents a power of 2.
From left to right, the place values are:
256, 128, 64, 32, 16, 8, 4, 2, 1 for a 9-bit representation.
Each place can only be 0 or 1.

2.Conversion Steps:
Start with the decimal number you want to convert.
Compare it with the largest place value (e.g., 256).
If the number is greater than or equal to that place value, write 1 and subtract that value from the number.
If the number is less, write 0.
Move to the next smaller place value (128, 64, etc.) and repeat the process until you reach 1.



*/