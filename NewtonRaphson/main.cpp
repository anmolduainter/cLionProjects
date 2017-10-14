// C++ program for implementation of Newton Raphson Method for
// solving equations
#include<bits/stdc++.h>
#define EPSILON 0.0001
using namespace std;

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2  + 2
double func(double x,int a)
{
    return x*x-a;
}

// Derivative of the above function which is 3*x^x - 2*x
double derivFunc(double x)
{
    return 2*x;
}

// Function to find the root
float newtonRaphson(float x,int a)
{
    float h = func(x,a) / derivFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x,a)/derivFunc(x);
        x = x - h;
    }

    return x;

}

// Driver program to test above
int main()
{
    double x0 = 10; // Initial values assumed

    int t;

    cin>>t;

    for (int i = 0; i < t ; ++i) {
        int a;
        cin>>a;
        float b=newtonRaphson(x0,a);
        printf("%0.4f \n",(b));
    }

    return 0;
}