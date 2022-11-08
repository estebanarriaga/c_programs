#Vamos a crear un programa en el que el usuario no pueda acceder a no ser que ponga la contraseña correcta 
# que ha introducido antes

contraseña = int(input("Crea una nueva contraseña: "))
escribe_contraseña = int(input("Escribe la contraseña que acabas de crear: "))
if contraseña == escribe_contraseña:
    print("Enhorabuena, acabas de pasar la prueba!")
else:
    print("La contraseña es incorrecta")
    