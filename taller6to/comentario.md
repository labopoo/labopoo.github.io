## Recomendación

En caso de no poder leer sus archivos csv, utilizar lo siguiente para lograr configurar 
la forma de lectura. 

``` python
 
 import pandas as pd
 
 df = pd.read_csv("../data/datos.csv",sep=",",engine="python")
 
```

