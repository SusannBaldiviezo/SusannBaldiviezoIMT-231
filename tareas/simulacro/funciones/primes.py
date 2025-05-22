def contar_primos(n):
    if n < 2:
        print("No hay primos menores que 2")
        return
    contador = 0
    for num in range(2, n + 1):
        es_primo = True
        divisor = 2
        while divisor <= num // 2:
            if num % divisor == 0:
                es_primo = False
                break
            divisor += 1
        if es_primo:
            contador += 1
    print(f"Cantidad de primos hasta {n} es de : {contador}")