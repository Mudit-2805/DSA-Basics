n = int(input("Enter the nth number: "))
a, b = 0, 1

def fib(n, a, b):
    
    if n == 1:
        print(0)
    elif n > 1:
        print(0, 1, end = " ")
        for i in range(n-2):
            j = a+b
            print(j,end = " ")
            a = b
            b = j    
            i += 1
    else:
        print("Invalid Input")

fib(n, a, b)
