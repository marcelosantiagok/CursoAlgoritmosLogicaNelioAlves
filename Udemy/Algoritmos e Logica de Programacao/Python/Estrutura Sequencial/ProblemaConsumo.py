'''Problema "consumo"
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.'''

distancia: float; combustivel: float;
distancia = float(input("Distancia percorrida: "))
combustivel = float(input("Combustivel gasto: "))
print(f"Consumo medio = {distancia / combustivel:.3f}")