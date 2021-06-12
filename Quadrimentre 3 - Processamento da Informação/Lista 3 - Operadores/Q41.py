import math
x = float(input('Digite a coordenada X: '))
y = float(input('Digite a coordenada Y: '))
eficiencia = float(input('Eficiencia do automovel: ')) # litros/km
litros = float(input('Litros que tem no automovel: '))

possopercorrer = litros*eficiencia #litros/eficacia -> descobre quantos km POSSO rodar
#print('p', p)
km = math.sqrt((math.pow(x)+math.pow(y))) #quantos km vão rodar

if possopercorrer>=km: #os km que VÃO rodar tem que ser MENOR OU IGUAL aos q eu POSSO rodar
    print('S')
else:
    print('N')