a = float(input('Qual a area do local? Por gentileza informe em metros quadrados. \nArea: '))

if a<12.3:
    print('Para a área=', a, ': Recomendamos 9200 BTU/h')
elif a>=12.3 and a<17.3:
    print('Para a área=', a, ': Recomendamos 12200 BTU/h')
elif a>=17.3 and a<22.3:
    print('Para a área=', a, ': Recomendamos 15200 BTU/h')
elif a>=22.3 and a<27.3:
    print('Para a área=', a, ': Recomendamos 18200 BTU/h')
elif a>= 27.3 and a<=32.3:
    print('Para a área=', a, ': Recomendamos 21200 BTU/h')
else:
    print('Para a área=', a, ': Sem recomendacao')

