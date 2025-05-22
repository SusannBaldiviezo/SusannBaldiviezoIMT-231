def fibonacci(n):
    a, b = 0, 1
    print(f"Serie de Fibonacci (primeros {n} términos):")
    for i in range(n):
        print(f"Posición {i+1}: {a}")  
        a, b = b, a + b

fibonacci(5)