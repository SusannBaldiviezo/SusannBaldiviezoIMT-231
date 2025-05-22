def sumadiv(n):
    if n <= 0:
        print("El número debe ser un entero positivo.")
        return
    divp = []
    for i in range(1, n):
        if n % i == 0:
            divp.append(i)
    suma = sum(divp)
    print(f"Divisores propios de {n}: {divp}")
    print(f"Suma de los divisores propios: {suma}")
    return suma
