'''Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
deduzir a fórmula de Celsius para Fahrenheit):'''

C: float; F: float; sel : str;

sel = input("Voce vai digitar a temperatura em qual escala (C/F)? ")

if sel == 'F' or sel == 'f':
    F = float(input("Digite a temperatura em Fahrenheit: "))
    C = 5 / 9 * (F - 32)
    print(f"Temperatura equivalente em Celsius: {C:.2f}")
elif sel == 'C' or sel == 'c':
    C = float(input("Digite a temperatura em Celsius: "))
    F = 9 * C / 5 + 32
    print(f"Temperatura equivalente em Fahrenheit: {F:.2f}")