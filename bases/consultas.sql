SELECT * FROM alumnos
WHERE NOT edad = 12;

SELECT * FROM alumnos WHERE nombre LIKE 'a%';

SELECT * FROM alumnos WHERE nombre LIKE '%a';

SELECT * FROM alumnos WHERE nombre LIKE '%a%';

SELECT * FROM alumnos WHERE nombre LIKE 'g%a';

SELECT * FROM alumnos
ORDER BY edad;

SELECT * FROM alumnos
ORDER BY edad DESC;

SELECT * FROM alumnos
ORDER BY nombre;
                                                                                       
SELECT * FROM alumnos
ORDER BY nombre DESC;
                                                                                       
SELECT *
FROM alumnos
WHERE edad IS NULL; 

SELECT *
FROM alumnos
WHERE edad IS NOT NULL; 
                                                                                 
UPDATE alumnos
SET nombre = "Alfredo", edad = 12
WHERE id = 1;
                                                                                       
UPDATE alumnos
SET nombre = "Alfredo", edad = 12
WHERE id IS NULL;                                                                                    

SELECT * FROM alumnos
LIMIT 3; 

SELECT * FROM alumnos
WHERE edad > 12
LIMIT 3; 



