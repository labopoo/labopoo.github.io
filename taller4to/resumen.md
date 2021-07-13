- Etiquetas principales de un archivo html  
```html
<!DOCTYPE html>
<html lang="es">
	<head>

	</head>
	
	<body>


	</body>
</html>
```
- Inserción de imágenes  
```html
<body>
	<img src="perro.jpeg" alt="imagen de perrito">
</body>
```
- Creación de links  
```html
<body>
	<a href="otraPagina.html"> se abre nueva página en la misma pestaña</a>
	
	<a href="otraPagina.html" target="_blank">se abre nueva página en otra pestaña</a>
	
	<a href="http://www.ipm.edu.ar/"> se abre la página del politécnico en la misma pestaña</a>
	
	<a href="http://www.ipm.edu.ar/" target="_blank"> se abre la página del politécnico en otra pestaña</a>
</body>
```
- Colocación de títulos  
```html
<head>
	<title>Experimentos</title>
</head>
```
```html
<body>
	<h1>Holaa!</h1>
	<h2>Holaa!</h2>
	<h3>Holaa!</h3>
	<h4>Holaa!</h4>
	<h5>Holaa!</h4>
	<h6>Holaa!</h6>
</body>
```
- Forma de relacionar un archivo html con un archivo .css  
```html
<head>
	<link rel="stylesheet" href="estilo.css">
</head>
```
- Atributo id  
```html
<body>
	<img src="perro.jpeg" alt="imagen de perrito" id="animal">
</body>
```
- Atributo class  
```html
<body>
	<img src="naranja.jpeg" alt="una naranja" class="frutas">
</body>
```
- Cambio de tamaño de elementos  
```css
#animal {
    width: 7cm;
    height: 4cm;
}

.frutas {
    width: 2cm;
    height: 2cm;
}
```
- Asignación de color de fondo  
``` css
body {
	background-color: blueviolet;
}
```
- Asignación de color de fuente  
``` css
h4 {
    color: blue;
}

p {
   color: green;
}

a {
   color: white;
}
```
- Asignación de tamaño de fuente
```css
h4 {
    font-size: 50px;
}

p {
   font-size: 60px;
}

a {
   font-size: 70px;
}
```
