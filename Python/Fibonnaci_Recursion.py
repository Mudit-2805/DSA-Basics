n = int(input("Enter the nth number: "))
x = -1

def fib(n):
    
    if n == 0:
        return 0
    elif n == 1:
        return 1
    elif n > 1:
        return fib(n-2)+fib(n-1)
    else:
        print("Invalid Input")


for i in range(n):
    x = x+1
    print(fib(x), end = " ")
