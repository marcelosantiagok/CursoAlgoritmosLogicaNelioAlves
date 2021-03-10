'''Problema "aumento" (adaptado de URI 1048)
Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Salário atual                          Aumento
Até R$ 1000.00                          20%
Acima de R$ 1000.00 até R$ 3000.00      15%
Acima de R$ 3000.00 até R$ 8000.00      10%
Acima de R$ 8000.00                     5%
'''


salario: float; novo: float; aumento: float; porcentagem: int;

salario = float(input("Digite o salario da pessoa: "))

if salario < 1001.00:
    porcentagem = 20
elif salario < 3001.00:
    porcentagem = 15
elif salario < 8001.00:
    porcentagem = 10
else:
    porcentagem = 5

aumento = salario * porcentagem / 100
novo = salario + aumento

print(f"Novo salario = R$ {novo:.2f}")
print(f"Aumento = R$ {aumento:.2f}")
print(f"Porcentagem = {porcentagem}%")