'''Problema "pagamento"
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa, conforme exemplo.'''

valorPorHora: float; horas: float; nome: str;
nome = input("Nome: ")
valorPorHora = float(input("Valor por hora: "))
horas = float(input("Horas trabalhadas: "))

print(f"O pagamento para {nome} deve ser {valorPorHora*horas:.2f} ")