# ejemplo 1
def convertir_en_minusculas(valor):
  if type(valor) == str:
    return valor.lower()
  else:
    return valor

# ejemplo 2
def arreglar_fecha(valor): 
  valor = str(valor)
  for caracter in valor:
    if not caracter.isnumeric() and caracter != "/"
      valor = valor.replace(caracter,'/')
  return valor

# applymap, realiza la modificación en todos los elementos del dataframe
df2 = df1.applymap(convertir_en_minusculas)

# apply, realiza la modificación sólo en los elementos de una columna
df3 = df1['nombre_de_columna'].apply(convertir_en_minusculas)

df4['Precio'] = df1['Precio'].apply(float)
