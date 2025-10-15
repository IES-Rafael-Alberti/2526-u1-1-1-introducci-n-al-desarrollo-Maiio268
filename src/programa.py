# Muestre un mensaje que diga: "Hola [nombre del usuario], tienes [x] años. Este programa está hecho en el lenguaje de programación: [lenguaje]"
nombre = input("Introduce tu nombre: ")
año_nac = int(input("Introduce tu año de nacimiento: "))

edad = 2025 - año_nac

print("Hola", nombre, ", tienes", edad, "años. Este programa está hecho en el lenguaje de programación: Python")