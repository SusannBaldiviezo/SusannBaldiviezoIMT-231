def factorial(n):
    if n < 0:
        return "No existe factorial de números negativos"
    resultado = 1
    for i in range(1, n + 1):
        resultado *= i
    print(f"Factorial de {n}: {resultado}")
factorial(5) 