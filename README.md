Write a function named "reduce" that takes two positive integer arguments, call them "num" and "denom", treats them as the numerator and denominator of a fraction, and reduces the fraction. That is to say, each of the two arguments will be modified by dividing it by the greatest common divisor of the two integers. The function should return the value 0 (to indicate failure to reduce) if either of the two arguments is zero or negative, and should return the value 1 otherwise. 
#### Thus, for example, if m and n have been declared to be integer variables in a program, then
    m = 25; n = 15;
    if (reduce(m,n))
    cout << m << '/' << n << endl; else cout << "fraction error" << endl; will produce the following output:
    5/3
#### Note that the values of m and n were modified by the function call. Similarly,
    m = 63; n = 210; if (reduce (m,n))
    cout << m << '/' << n << endl; else
    cout << "fraction error" << endl;
##### will produce the following output:
    3/10
#### Here is another example.
    m = 25; n = 0;
    if (reduce(m,n))
    cout << m << '/' << n << endl; else cout << "fraction error" << endl;
#### will produce the following output:
    fraction error
The function reduce is allowed to make calls to other functions that you have written.