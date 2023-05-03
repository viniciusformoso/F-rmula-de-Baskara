import math
print("-----FÓRMULA DE BASKARA-----")
a = int(input("Insira o valor de A: "))
b = int(input("Insira o valor de B: "))
c = int(input("Insira o valor de C: "))
delta = b ** 2 - 4 * a * c

print(" ")
print("O valor de delta é: {}".format(delta))
print(" ")

if delta < 0:
    print("Delta negativo, sem raízes reais.")
    print("-"*100)
else:
    x1 = (b + delta ** 1/2) / 2 * a
    x2 = (b - delta ** 1/2) / 2 * a

print("As raízes da equação são: {} e {}".format(x1, x2))
print("-"*100)