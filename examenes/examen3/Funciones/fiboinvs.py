def fiboinv(n):
    fibo = [0, 1]
    for i in range(2, n):
        fibo.append(fibo[-1] + fibo[-2])
    resultado = fibo[:n][::-1]
    print("Serie de Fibonacci inversa:", resultado)
