import math
x = float(input('Digite a coordenada X: '))
y = float(input('Digite a coordenada Y: '))
e = float(input('Eficiencia do automovel: ')) # litros/km
l = float(input('Litros que tem no automovel: '))

p = l/e #litros/eficacia -> descobre quantos km POSSO rodar
print('p', p)
k = x**2
k2 = y**2
soma = k+k2
print('k = ',k, '\nk2 = ', k2, '\nsoma = ', soma)
km = math.sqrt(soma) #quantos km vão rodar
print('km: ', km)

if p>km and p==km:
    print('S')
elif p<km: #os km que VÃO rodar tem que ser MENOR OU IGUAL aos q eu POSSO rodar
    print('N')
else:
    print('erro amiga')