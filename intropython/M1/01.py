n = int(input("Digite um número: "))

a, b = 0, 1
fibonacci = [a, b]

while b < n:
    a, b = b, a + b
    fibonacci.append(b)
    # append na lista até chegar no n do input

menor_diferenca = n
mais_proximo = 0

for fib in fibonacci:
    diferenca = abs(n - fib)
    if diferenca < menor_diferenca:
        menor_diferenca = diferenca
        mais_proximo = fib

print(mais_proximo)
