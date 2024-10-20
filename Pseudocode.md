# Recursion

## Factorial
```c++
function factorial(n):
    if n equals 0 or 1:
        return 1
    else:
        return n * factorial(n - 1)
```

## Print Reverse Function (Array)
```c++
function printReverse(arr, size):
    if size equals 0:
        return
    else:
        print arr[size - 1]
        printReverse(arr, size - 1)
```

## Fibonacci Function:
```c++
function fibonacci(n):
    if n equals 0:
        return 0
    else if n equals 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
```

## Array Sum Function:
```c++
function arraySum(arr, size):
    if size equals 0:
        return 0
    else:
        return arr[size - 1] + arraySum(arr, size - 1)
```

## Power Function:
```c++
function power(base, exponent):
    if exponent equals 0:
        return 1
    else:
        return base * power(base, exponent - 1)
```

## Reverse String Function:
```c++
function reverseString(str, start, end):
    if start is greater than or equal to end:
        return
    else:
        swap characters at start and end indices in str
        reverseString(str, start + 1, end - 1)
```
