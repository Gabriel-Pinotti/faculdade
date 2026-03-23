frase = input("Digite a frase: ")
n = int(input("Digite o número do deslocamento: "))

alfabeto = "abcdefghijklmnopqrstuvwxyz"
frase_criptografada = ""

for caractere in frase:
    if caractere in alfabeto:
        indice = alfabeto.index(caractere)
        # mod 26 pra circular
        novo_indice = (indice + n) % 26
        frase_criptografada += alfabeto[novo_indice]
    else:
        # mantém espaços etc.
        frase_criptografada += caractere

print(f"Frase criptografada: {frase_criptografada}")