/*
Question 1: Array Operations

Write a C program that takes an integer "n" as input, then reads n elements
into an array. Using separate functions, find and print:

1. The maximum element (findMax)
2. The minimum element (findMin)
3. The average of all elements (average)
4. The count of prime numbers in the array (countPrime)

Sample Input:
Enter n: 6
Enter 6 elements: 12 7 3 20 11 8

Sample Output:
Maximum = 20
Minimum = 3
Average = 10.17
Prime count = 3
*/

//Solution:

#include<stdio.h>

int findMax(int a[], int n)
{
    int max=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int findMin(int a[], int n)
{
    int min=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

float average(int a[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    return(float)sum/n;
}

int isPrime(int x)
{
    if(x<2)
    {
        return 0;
    }
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int countPrime(int a[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(isPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Maximum = %d\n", findMax(a, n));
    printf("Minimum = %d\n", findMin(a, n));
    printf("Average = %.2f\n", average(a, n));
    printf("Prime count = %d\n", countPrime(a, n));

    return 0;
}
