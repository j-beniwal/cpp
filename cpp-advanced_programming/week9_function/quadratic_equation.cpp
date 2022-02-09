#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Constants representing type of solution. 
const int NO_SOLUTION = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTIONS = 2;
const int ALL_REALS = 3;

// quadratic: solves the quadratic equation of the form ax^2 + bx + c = 0
// input : a, b, c are the cofficients of the equation. 
// output : 1. Type of the Solution (return value)
//          2. outx1, outx2 - solutions to the equation (output perameters)
// Asumptions : 1. If the equation has one solution the solution will be returned in outx1.
//              2. If the equation does not have any solutions the value in x1 and x2 are not defined. 
int quadratic(double a, double b, double c, double & x1, double & x2);

// linear : solves a linear equation : ax + b = 0
// Input: a, b - cofficients of equation
// Output: 1. Type of solution (return value)
//         2. outx - solution of the equation (output perameter)
// Assumptions: If equation has no solutions the value returned at outx is not defined. 
int linear(double a, double b, double & outx);

// The program solves the quadratic equation. 
// Input from user: 3 real numbers representing the cofficients of the quadratic equation.
// Output to user : The solution of the equation, if there are any, or an appropriate message.
int main(){
    // take the user input
    double a, b, c, x1, x2;
    cout<<"Please enter the cofficents of the quadratic Equation : ";
    cin>>a>>b>>c;

    cout<<"The equation is : "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;

    switch (quadratic(a, b, c, x1, x2))
    {
    case TWO_REAL_SOLUTIONS:
        cout<<"The solutions are : "<<x1<<" and "<<x2<<endl;
        break;
    
    case ONE_REAL_SOLUTION:
        cout<<"One Solution: "<<x1<<endl;
        break;

    case NO_SOLUTION:
        cout<<"No Real Solution."<<endl;
        break;

    case ALL_REALS:
        cout<<"All real numbers are solutions"<<endl;
        break; 
    default:
        cout<<"Error"<<endl;
        break;
    }


    return 0;
}

int quadratic(double a, double b, double c, double & outx1, double & outx2){
    double delta, x1, x2;
    if (a != 0.0 ){
        delta = b*b - 4*a*c;
        if (delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            outx1 = x1;
            outx2 = x2;
            return TWO_REAL_SOLUTIONS;
        }
        else if (delta == 0){
            x1 = -b/(2*a);
            outx1 = x1;
            return ONE_REAL_SOLUTION;
        }
        else {
            return NO_SOLUTION;
        }
    }
    else {
        return linear(b, c, outx1);
    }
}

int linear(double a, double b, double & outx){
    double x;
    if (a != 0){
        x = -b/a;
        outx = x;
        return ONE_REAL_SOLUTION;
    }
    else if ((a ==0) && (b == 0)){
        x = 0;
        outx = x;
        return ALL_REALS;
    }
    else //in case a==0 and b!=0
        return NO_SOLUTION;
}