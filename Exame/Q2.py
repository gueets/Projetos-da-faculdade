#num +=1
totmai = totmen = 0 #func entre 18 e 23 anos e func com mais de 45 anos
salario = []
idade = []
galera = []
r = int(input('quantos funcionarios voce vai cadastrar? \ndigite o número inteiro, por favor: '))
for f in range(r):
    salario.append(float(input('digite o valor do salário do funcionario: '))
    while (salario < 827) or (salario > 24675):
        salario.pop()
        salario.append(float(input('ERRO! Tente novamente. \ndigite o valor do salário do funcionario: '))

    idade.append(int(input('digite a idade do funcionario: ')))
    while (idade >= 17) or (idade <75):
        idade.pop()
        idade.append(int(input('digite a idade do funcionario: ')))

        if idade >=18 and idade<24: #func entre 18 e 23 anos
            totmen += 1
        elif idade >= 45: #func com mais de 45 anos
            totmai += 1
        else:
            continue

        galera.append(salario[:], idade[:])
        salario.clear()
        idade.clear()

print(galera)
#for p in
print('func. entre 18 e 23 anos               =  ', totmen)
print('func. com mais de 45 anos               =  ', totmai)