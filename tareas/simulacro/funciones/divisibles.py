def contar_divisibles_terminan_3(n):
    count = sum(1 for i in range(1, n+1) if i % 3 == 0 or i % 10 == 3)
    print(f"Cantidad: {count}")