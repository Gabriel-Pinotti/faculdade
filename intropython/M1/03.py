frase = input("Digite uma frase: ")

# remove espaços e deixa minúsculo
frase = frase.replace(" ", "").lower()

esarf = frase[::-1]

if esarf == frase:
    print("É palíndromo")
else:
    print("Não é palíndromo")
