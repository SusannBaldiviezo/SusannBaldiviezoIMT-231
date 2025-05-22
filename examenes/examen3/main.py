from Funciones import (
    sumadiv,
    triangulo,
    priprimo,
    fiboinv
)

def ver():
    print("\n--- MENÚ DE OPCIONES ---")
    print("1. Calcular la suma de todos los divisores de un número N (excluyendo el propio número")
    print("2. Generar un triángulo con letras del alfabeto hasta una altura N")
    print("3. Mostrar los primeros N números primos")
    print("4. Generar la serie de Fibonacci inversa")
    print("5. Salir del programa")

def obtener_numero(mensaje):
    while True:
        n = int(input(mensaje))
        if n > 0:
            return n
        print("El número debe ser mayor que 0.")
while True:
    ver()
    opcion = input("Seleccione una opción (1-5): ")

    if opcion == "1":
        n = obtener_numero("Ingrese el valor de N: ")
        sumadiv(n)

    elif opcion == "2":
        n = obtener_numero("Ingrese la altura N del triángulo: ")
        triangulo(n)

    elif opcion == "3":
        n = obtener_numero("Ingrese la cantidad de números primos: ")
        priprimo(n)

    elif opcion == "4":
        n = obtener_numero("Ingrese la cantidad de términos de la serie: ")
        resultado = fiboinv(n)
        print("Serie de Fibonacci inversa:", resultado)

    elif opcion == "5":
        print("Chaucito")
        break

    else:
        print("Opción no válida")
