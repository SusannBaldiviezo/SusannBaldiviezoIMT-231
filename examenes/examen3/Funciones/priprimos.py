def priprimo(n):
    def pri(num):
        if num < 2:
            return False
        i = 2
        while i * i <= num: 
            if num % i == 0:
                return False
            i += 1
        return True
    count = 0
    num = 2
    while count < n:
        if pri(num):
            print(num)
            count += 1
        num += 1
