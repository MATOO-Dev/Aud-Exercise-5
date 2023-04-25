#include <iostream>
#include "include/factorial.h"

/*Task 16
a)
u(n) ∈ o(^n1/2) => u(n)*u(n) ∈ O(n)

u(n) ∈ o(^n1/2) = f
u(n)*u(n) ∈ O(n) = f
Implikation f => f = w
Daher insgesamt bewiesen

b)
u(n) ∈ O(n^2) und v(n) ∈ Θ(n^2) => u(n)+v(n) ∈ O(n2)

u(n) ∈ O(n^2) = w
v(n) ∈ Θ(n^2) = f
u(n) ∈ O(n^2) und v(n) ∈ Θ(n^2) = f
u(n)+v(n) ∈ O(n2) = w
Implikation f => w = w
Daher insgesamt bewiesen
*/


/*Task 17
a)
u(n) ∈ O(n3) , v(n) ∈ O(n2) => u(n)+n*v(n) ∈ O(n3)

u(n) ∈ O(n3) = w
v(n) ∈ O(n2) = w
u(n)+n*v(n) ∈ O(n3) = w
Implikation w => w = w
Daher insgesamt bewiesen

b)
u(n) ∈ Ω(n) und v(n) ∈ Θ(n) => u(n)+v(n) ∈ Ω(n)

u(n) ∈ Ω(n) = w
v(n) ∈ Θ(n) = w
u(n) ∈ Ω(n) und v(n) ∈ Θ(n) = w
u(n)+v(n) ∈ Ω(n) = w
Implikation w => w = w
Daher insgesamt bewiesen
*/

int main()
{
    int userInput = 0;
    std::cout << "Enter a number n to calculate the factorial of:\n";
    std::cin >> userInput;
    //Task 18
    std::cout << "Recursive result:\n";
    std :: cout << factorial::fact(userInput) << std::endl;
    //Task 19
    std::cout << "Iterative result:\n";
    std :: cout << factorial::fact_it(userInput) << std::endl;
    return 0;
}