// A Dynamic Programming based solution for 0-1 Knapsack problem
#include <iostream>
 
using namespace std;
 
// A utility function that returns maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}
 
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
