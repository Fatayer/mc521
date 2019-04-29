
while(1):

    try:
        lista = [int(x) for x in input().split()]
        lista.sort()

        if lista[0]%2 ==0:
            ini = lista[0] +1
        else:
            ini = lista[0]
        contador=0

        while True:
            if ini > lista[1]:
                break
            divisao = ini

            while divisao > 0:
                contador += divisao%10
                divisao = divisao//10
            ini += 2


        print(contador)
        lista = []

    except Exception as e:
        quit()
