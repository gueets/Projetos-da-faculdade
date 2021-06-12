a = float(input('Qual a area do local? Por gentileza informe em metros quadrados. \nArea: '))

if a<10.2:
    print('Recomendamos 9000 BTU/h')
elif a>=10.2 and a<15.2:
    print('Recomendamos 12000 BTU/h')
elif a>=15.2 and a<20.2:
    print('Recomendamos 15000 BTU/h')
elif a>=20.2 and a<25.2:
    print('Recomendamos 18000 BTU/h')
elif a>= 25.2 and a<=30.2:
    print('Recomendamos 21000 BTU/h')
else:
    print('Sem recomendacao')

