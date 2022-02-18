print ("Hello world")

def cero():
    return "cero"

def obtener_nombre_dia(numero_dia):
    dias = {
        0: "Domingo",
        1: "Lunes",
        2: "Martes",
        3: "Miercoles",
        4: "Jueves",
        5: "Viernes",
        6: "Sabado",
    }

    return dias.get(numero_dia, "Desconocido")