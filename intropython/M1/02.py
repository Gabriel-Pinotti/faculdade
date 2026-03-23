n1 = 1001

buscando = True

while buscando:
    
    #n2 = n1+2
    n1_primo = True
    for i in range(2, int(n1**0.5) + 1):
        if n1 % i == 0:
            n1_primo = False
            break

    # pula se o for achar um divisor pra n1
    if n1_primo:
        n2_primo = True
        n2 = n1 + 2
        for i in range(2, int(n2**0.5) + 1):
            if n2 % i == 0:
                n2_primo = False
                break
        
        if n2_primo:
            print(f"Primeiros primos gêmeos maiores que 1000: {n1} e {n2}")
            buscando = False
    
    n1 += 2 # n tem pq buscar em número par
