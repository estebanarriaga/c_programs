# Calcular el mayor de tres numeros enteros:

numero1 = int(input("Escribe el numero 1: "))
numero2 = int(input("Escribe el numero 2: "))
numero3 = int(input("Escribe el numero 3: "))

#if [numero1 !0 or numero2 !0 or numero3 !0]:
#    print("Error, no valen los numeros negativos ni el 0")
if [numero1 > numero2 and numero1 > numero3]:
    print("El numero mayor es el: " , numero1)
else:
    if [numero2 > numero1 and numero2 > numero3]:
        print("El numero mayor es el: " , numero2)
    else:
        print("El numero mayor es el: " , numero3)



