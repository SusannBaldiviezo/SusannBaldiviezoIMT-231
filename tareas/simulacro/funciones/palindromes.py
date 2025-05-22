def es_palindrome(num):
    numst = str(num)
    if numst == numst[::-1]:
        print(f"El número {num} es un palíndromo.")
    else:
        print(f"El número {num} no es un palíndromo.")