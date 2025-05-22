def generar_serie_alternada(n):
    serie = [i if i % 2 else -i for i in range(1, n+1)]
    print("Serie:", *serie, sep=', ')
    