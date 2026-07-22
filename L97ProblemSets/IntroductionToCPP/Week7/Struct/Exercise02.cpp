#include <iostream>
#include <cmath>
using namespace std;

struct Monomial
{
    double coefficient;
    int exponent;
};

void inputMonomialUsingPointer(Monomial *m)
{
    cout << "Coefficient: ";
    cin >> m -> coefficient;
    cout << "Exponent: ";
    cin >> m -> exponent;
}

void inputMonomialUsingReference(Monomial &m)
{
    cout << "Coefficient: ";
    cin >> m.coefficient;
    cout << "Exponent: ";
    cin >> m.exponent;
}

void printMonomial(Monomial m)
{
    if (m.coefficient != 0)
    {
        if (m.exponent == 0)
        {
            cout << "Monomial: " << m.coefficient << endl;

        } else
        {
            cout << m.coefficient << "x^" << m.exponent << endl;
        }
    } else
    {
        cout << "Monomial: 0" << endl;
    }
}

Monomial addition(Monomial m1, Monomial m2)
{
    Monomial result = {0,0};
    if (m1.exponent == m2.exponent)
    {
        result.coefficient = m1.coefficient + m2.coefficient;
        result.exponent = m1.exponent;
        return result;
    }
    cout << "Two monomials have different exponents and cannot be added to form a new monomial."<<endl;
    return result;
}

Monomial subtraction(Monomial m1, Monomial m2)
{
    Monomial result = {0,0};
    if (m1.exponent == m2.exponent)
    {
        result.coefficient = m1.coefficient - m2.coefficient;
        result.exponent = m1.exponent;
        return result;
    }
    cout << "Two monomials have different exponents and cannot be subtracted to form a new monomial."<<endl;
    return result;
}

Monomial multiplication(Monomial m1, Monomial m2)
{
    Monomial result = {0,0};
    result.coefficient = m1.coefficient * m2.coefficient;
    result.exponent = m1.exponent + m2.exponent;
    return result;
}

Monomial division(Monomial m1, Monomial m2)
{
    Monomial result = {0,0};
    if (m2.coefficient == 0)
    {
        cout << "Second monomial has coefficient of zero, devision is not allowed."<<endl;
    } else
    {
        result.coefficient = m1.coefficient / m2.coefficient;
        result.exponent = m1.exponent - m2.exponent;
    }
    return result;
}

double value(Monomial m, double x)
{
    return m.coefficient * std::pow(x, m.exponent);
}

Monomial deriativeLevel1(Monomial m)
{
    Monomial result = {0,0};
    result.coefficient = m.exponent * m.coefficient;
    result.exponent = m.exponent - 1;
    return result;
}

int main()
{
    Monomial m1;
    Monomial m2;
    inputMonomialUsingReference(m1);
    inputMonomialUsingPointer(&m2);
    printMonomial(m1);
    printMonomial(m2);

    cout<<"Addition: ";
    printMonomial(addition(m1, m2));

    cout<<"Subtraction: ";
    printMonomial(subtraction(m1, m2));

    cout<<"Multiplication: ";
    printMonomial(multiplication(m1, m2));

    cout<<"Division: ";
    printMonomial(division(m1, m2));

    cout<<"Value of monomial m1 at x = 4: "<<value(m1, 4)<<endl;
    cout<<"1st Derivative of monomial m1: "<<endl;
    printMonomial(deriativeLevel1(m1));

    return 0;
}
