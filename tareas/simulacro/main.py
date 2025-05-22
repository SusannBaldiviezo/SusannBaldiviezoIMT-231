# from funciones import (
#     contar_divisibles_terminan_3,
#     imprimir_piramide,
#     generar_serie_alternada,
#     contar_primos,
#     es_palindrome
# )

# def ver():
#     print("\n--- MENÚ DE OPCIONES ---")
#     print("1. Contar números divisibles por 3 o que terminan en 3")
#     print("2. Imprimir pirámide de asteriscos")
#     print("3. Generar serie alternada")
#     print("4. Contar números primos")
#     print("5. Verificar si un número es palíndromo")
#     print("6. Salir del programa")

# def obtener_numero(mensaje):
#     while True:
#         try:
#             num = int(input(mensaje))
#             if num > 0:
#                 return num
#             print("El número debe ser mayor que 0.")
#         except ValueError:
#             print("Por favor ingrese un número válido.")
# while True:
#     ver()
#     opcion = input("Seleccione una opción: ")
        
#     if opcion == "1":
#         n = obtener_numero("Ingrese el valor de N: ")
#         contar_divisibles_terminan_3(n)
        
#     elif opcion == "2":
#         n = obtener_numero("Ingrese la altura de la pirámide: ")
#         imprimir_piramide(n)
        
#     elif opcion == "3":
#         n = obtener_numero("Ingrese cantidad de términos de la serie: ")
#         generar_serie_alternada(n)
        
#     elif opcion == "4":
#         n = obtener_numero("Ingrese el valor de N para buscar primos: ")
#         contar_primos(n)
        
#     elif opcion == "5":
#         n = obtener_numero("Ingrese un número para verificar si es palíndromo: ")
#         es_palindrome(n)
        
#     elif opcion == "6":
#         print("¡Gracias por usar el programa! ¡Hasta luego!")
#         break
        
#     else:
#         print("Opción no válida. Por favor seleccione 1-6.")


from funciones import (
    contar_divisibles_terminan_3,
    imprimir_piramide,
    generar_serie_alternada,
    contar_primos,
    es_palindrome
)
def ver():
    print("\n--- MENÚ DE OPtIONES ---")
    print("1. Contar números divisibles por 3 o que terminan en 3")
    print("2. Imprimir pirámide de asteriscos")
    print("3. Generar serie alternada")
    print("4. Contar números primos")
    print("5. Verificar si un número es palíndromo")
    print("6. Salir del programa")
while True:
    ver()
    opcion = input("Seleccione una opción (1-6): ")
    if opcion not in {'1','2','3','4','5','6'}:
        print("Opción no válida. Intente nuevamente.")
        continue
    if opcion == '6':
        print("Chaucito")
        break
    config = {
        '1': (contar_divisibles_terminan_3, "valor de N"),
        '2': (imprimir_piramide, "altura de la pirámide"),
        '3': (generar_serie_alternada, "cantidad de términos"),
        '4': (contar_primos, "valor para buscar primos"),
        '5': (es_palindrome, "número para verificar palíndromo")
    }
    funcion, descripcion = config[opcion]
    while True:
        try:
            n = int(input(f"Ingrese {descripcion}: "))
            if n > 0:
                break
            print("El número debe ser mayor que 0.")
        except ValueError:
            print("Por favor ingrese un número válido.")
    funcion(n)