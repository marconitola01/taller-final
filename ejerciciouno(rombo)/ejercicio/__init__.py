import random

matriz = []      #we create a empty list

filas = int(input("Tamano del arreglo: "))  #ask value for size of the array
columnas = filas   # 

for f in range(0,filas):   #cycle for 
    matriz.append([0]*columnas)  # we assing a empty list for each position
    
for f in range(0,filas):   #cycle for(filas)
    for c in range(0,filas):   #cycle for(columnas)
        matriz[f][c] = random.randint(1,9) #we generate ramdom numbers for the array
    
    
for f in matriz:  #cycle for
    for c in f:      #cycle for
        print(c,end=" ")   
    print("")

    
mt = (filas//2) #mt mt receives half the matrix to know where to start

if filas%2 != 0:  #the matrix must be square (par o impar)
  
    for f in range(0,filas): #par
        for c in range(0,filas):
            if (f+c>=(mt) and f+(mt)>= c and c+(mt)>= f and f+c<=(mt)+filas-1): #invert each position
                print(matriz[f][c],end=" ")
            else:
                matriz[f][c] = " "
                print(matriz[f][c],end=" ")
        print("")              
else: #impar
    for f in range(0,filas):
        for c in range(0,filas):
            if (f+c>=(mt)-1 and f+(mt)>= c and c+(mt)>= f and f+c<=(mt)+filas-1): #invert each position
                print(matriz[f][c],end=" ") #print each position
            else:
                matriz[f][c] = " "
                print(matriz[f][c],end=" ")  #print
        print("")   #print an space
