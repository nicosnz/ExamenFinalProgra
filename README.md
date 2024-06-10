# Database

## 📑Problema  
Las empresas, especialmente las que manejan un gran volumen de eventos, enfrentan diversos desafíos en la gestión eficiente y efectiva de estos datos. Las bases de datos existentes presentan una serie de problemas significativos para la gestión de eventos. En primer lugar, muchas de ellas son complejas de usar y configurar, insuficiente flexibilidad para adaptarse a diversos requisitos, integración complicada con otros sistemas empresariales, costos prohibitivos lo que resulta especialmente problemático para las empresas. Por otro lado, el nuevo desarrollo de una base de datos nueva **clave-valor** ofrece ventajas clave: es fácil de usar, se configura rápidamente, está optimizada para consultas rápidas, es flexible y adaptable a diferentes necesidades, se integra fácilmente con otros sistemas, es más económica y. Estas ventajas permitirán a las empresas gestionar eventos de manera más eficiente y segura.
## 💻Bases de Datos Existentes 

| **Criterio**               | **MySQL**                             | **MongoDB**                         | **PostgreSQL**                     | **Database**                |
|----------------------------|---------------------------------------|-------------------------------------|------------------------------------|-----------------------------------|
| **Tipo de Base de Datos**   | Relacional                            | No Relacional                       | Relacional                         | No relacional                     |
| **Facilidad de Uso**       | Moderada                              | Alta                                | Moderada                           | Muy Alta                          |
| **Configuración**          | Compleja                              | Moderada                            | Compleja                           | Sencilla                          |
| **Optimización de Consultas** | Buena                                | Variable                            | Excelente                          | Excelente                         |
| **Integración**            | Moderada                              | Alta                                | Alta                               | Sencilla                          |
| **Costo**                  | Bajo                                  | Variable                            | Bajo                               | Bajo                              |

## 📘Justificación del Nuevo Proyecto

1. **Facilidad de Uso**: A diferencia de MySQL y PostgreSQL, que requieren un conocimiento técnico considerable, el nuevo sistema está diseñado con una interfaz amigable que simplifica la administración y consulta de eventos, reduciendo la curva de aprendizaje y aumentando la productividad.

2. **Configuración Sencilla**: Mientras que MySQL y PostgreSQL requieren configuraciones complejas y MongoDB es moderadamente sencillo, el nuevo sistema puede ser configurado rápidamente, permitiendo una implementación más ágil y eficiente.

3. **Optimización de Consultas**: El nuevo sistema está específicamente optimizado para consultas rápidas y eficientes, comparable a PostgreSQL, lo que reduce el tiempo de respuesta y mejora la eficiencia operativa, especialmente para consultas de eventos.

4. **Integración Sencilla**: El nuevo sistema está diseñado para integrarse fácilmente con otros sistemas empresariales, facilitando la interoperabilidad y la cohesión del entorno tecnológico, lo cual puede ser más complejo con MySQL y PostgreSQL.

5. **Costo Efectivo**: Es más económico en comparación con muchas bases de datos, incluidas MongoDB (que puede tener costos variables dependiendo del uso), reduciendo los costos operativos y de mantenimiento.

Las bases de datos clave-valor son altamente escalables y pueden manejar grandes volúmenes de tráfico, lo que las hace ideales para procesos como la gestión de sesiones para aplicaciones web, sesiones de usuario para juegos masivos en línea y carritos de compra en línea.

## 🏗️Estructura del Repositorio
Tenemos 3 archivos principales donde esta todo el código fuente del programa.
- **main.cpp** : El archivo principal que contiene la función "main" del programa.
- **funciones.cpp** : El archivo que contiene todo el cuerpo de las funciones que se implemento en el proyecto.
- **funciones.h** : El archivo de cabecera que contiene toda las declaraciones de las funciones del archivo "funciones.cpp".
## ⚒️Funciones
### void transformadorAñosMesesDias
* La función transformadorAñosMesesDias toma una fecha en formato YYYY-MM-DD, la valida y formatea adecuadamente, y luego convierte los componentes de la fecha en enteros para su posterior uso.
### void deleteEvents
* Esta función basicamente borra un evento de una determinada fecha que ingreso el usuario. El usuario debe ingresar la fecha y el evento que quiere borrar, si habia solo un evento en esa fecha, se borra toda la fecha.
## 📊Diagrama de Flujo
## 👱Créditos
## 🧰Herramientas


