// Cassi Mason
// February 8, 2022
// Objective: create a program that solves quadratic equations with 3 separate cases: both solutions are real and different, both solutions are real and the same, and both solutions are complex (imaginary). 

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main() {
  // declare variables
  double a, b, c, discriminant, x1, x2, real, imaginary;

  //import variables
  cout << "please enter a:" << endl;
  cin >> a;
  cout << "please enter b:" << endl;
  cin >> b;
  cout << "please enter c:" << endl;
  cin >> c;

  //solve discriminant b^2 - 4ac
  discriminant = pow(b, 2) - 4*a*c;

  //if statements for the 3 cases
  // if statement 1, both solutions are real and different (discriminant is positive)
    if (discriminant > 0) 
    //solve the quadratic formula like in homework 2
    {
      x1 = (-b + sqrt(discriminant))/ (2*a);
      x2 = (-b - sqrt(discriminant)) / (2*a);
      //output answer
      cout << "This parabola crosses the x axis at two points: " << setprecision(3) << x1 << " and " << x2 <<endl;
  }
  
  //if statement 2, both solutions are the same (discriminant is 0)
    else if (discriminant == 0)
  //solve -b/2a without discriminant, and signify special cases
    {
      x1 = x2 = -b/(2*a);
      //output answer
      cout << "This parabola touches the x axis at 1 point, so there is only one solution for x: " << setprecision(3) << x1 << endl;
    }

  //if statement 3, both solutions are imaginary (discriminant is negative)
    else if (discriminant < 0)
  //break solutions into real and imaginary part -b/2a +/- sqrt(-b^2 +4ac) * i
    {
      real = -b / (2*a);
      imaginary = sqrt(-1*discriminant)/(2*a);
     
      //output answer
      cout << "This parabola does not touch the x axis. The imaginary roots are: " << setprecision(3) << real << "+" << imaginary << "i and " << real << "-" << imaginary << "i" << endl;
    }

  return 0;
}