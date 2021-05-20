import pandas as pd
import matplotlib.pyplot as plt1
import matplotlib.pyplot as plt2
import matplotlib.pyplot as plt3
import numpy as np

df1 = pd.read_csv("../data/vacunasCovid19.csv")
df1 = df1.loc[0:10]
x_values = df1['grupo_etario'].unique()
y_values = df1['grupo_etario'].value_counts().tolist()
y_values.reverse()


x_posiciones = [0,4,8]
plt1.figure(figsize=(8,6))
plt1.xticks(x_posiciones, x_values)
plt1.barh(x_posiciones, y_values)
plt1.xticks(rotation=90,fontsize=10)
plt1.show()


x_values = df1['grupo_etario'].unique()
nombres_x = ["nombre \n largooooo",
"otro nombre \n largo",
"nombre largo\n my largo "]
x_values = np.array(nombres_x)
plt1.barh(x_values,y_values)
