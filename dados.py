input()

lista = [int(x) for x in input().split()]

vetor = [-1,-1,-1,-1,-1,-1]
dic = {}
for i in range(len(lista)):
    if lista[i] not in dic:
        dic[lista[i]] = 1
        vetor[lista[i]-1] = 0
    else:
        dic[lista[i]] += 1

for x in dic:
    for y in dic:
        if x != y:
            if x == 1:
                if y==6:
                    vetor[x-1] += dic[y]*2
                else:
                    vetor[x-1] += dic[y]
            elif x == 2:
                if y==5:
                    vetor[x-1] += dic[y]*2
                else:
                    vetor[x-1] += dic[y]
            elif x == 3:
                if y==4:
                    vetor[x-1] += dic[y]*2
                else:
                    vetor[x-1] += dic[y]
            elif x == 6:
                if y==1:
                    vetor[x-1] += dic[y]*2
                else:
                    vetor[x-1] += dic[y]
            elif x == 5:
                if y==2:
                    vetor[x-1] += dic[y]*2
                else:
                    vetor[x-1] += dic[y]
            elif x == 4:
                if y==3:
                    vetor[x-1] += dic[y]*2
                else:
                    vetor[x-1] += dic[y]
            elif x == 1:
                if y==2:
                    vetor[x-1] += dic[y]*2
                else:
                    vetor[x-1] += dic[y]

for i in range(len(vetor)):
    if vetor[i] != -1:
        min = vetor[i]
        break

for i in range(1,len(vetor)):
    if vetor[i] != -1 and vetor[i] < min:
        min = vetor[i]

print(min)
