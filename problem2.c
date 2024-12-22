// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 


// By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
// find the sum of the even-valued terms.
#include <stdio.h>

int main()  {
    int a = 1, b = 2 , c = 3;
    int even = b;
    while (even <= 4000000) {
        c = a + b;
        if (c % 2 == 0) {
            even += c;
        }
        a = b;
        b = c;
    }
    printf("%d", even);
}