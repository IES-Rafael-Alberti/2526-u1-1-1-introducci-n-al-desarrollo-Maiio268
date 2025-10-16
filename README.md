[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/F4zkDqTW)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=21100694&assignment_repo_type=AssignmentRepo)
# Práctica 2: Introducción al desarrollo. Ponlo en práctica.

Apoyate en los siguientes recursos para realizar la práctica:

[Descripción de la práctica](https://revilofe.github.io/section3/u01/practica/EDES-U1.-Practica011/)


---

# Título de la Actividad

## Identificación de la Actividad
- **ID de la Actividad:** [ID de la actividad]
- **Módulo:** EDES
- **Unidad de Trabajo:** U1: Introducción al desarrollo de software
- **Fecha de Creación:** 15/10/25
- **Fecha de Entrega:** 16/10/25
- **Alumno(s):** 
  - **Nombre y Apellidos:** Mario Montes Bermúdez
  - **Correo electrónico:** mmonber326@g.educaand.es
  - **Iniciales del Alumno/Grupo:** MMB
## Descripción de la Actividad
- Descripción: Trabajar con tres lenguajes de programación diferentes: uno compilado, uno interpretado y uno que genera código intermedio ejecutado en una máquina virtual, escribiendo un pequeño programa en cada lenguaje y respondiendo a las preguntas en el README.md, usando capturas de pantalla para ilustrar las respuestas y el lenguaje de marcas markdown para formatear el texto. 
- Objetivos: Evaluar la relación entre software y hardware, clasificar lenguajes de programación y comprender los diferentes procesos de ejecución (compilación, interpretación y máquinas virtuales), utilizando ejemplos de lenguajes interpretados, compilados y que generan código intermedio para su ejecución en una máquina virtual. 
[Descripción detallada de la actividad, objetivos, y contexto necesario para comprenderla. Explicar en qué consiste la actividad y qué se espera que el alumno desarrolle o implemente.]

## Instrucciones de Compilación y Ejecución
1. **Requisitos Previos:**
   - [Lenguaje de programación y versión]
   - [Entorno de desarrollo o dependencias necesarias]

2. **Pasos para Compilar el Código:**
   ```bash
   [Comando para compilar el código]
   ```

3. **Pasos para Ejecutar el Código:**
   ```bash
   [Comando para ejecutar la aplicación]
   ```

4. **Ejecución de Pruebas:**
   ```bash
   [Comandos para ejecutar pruebas, si las hubiera]
   ```

## Desarrollo de la Actividad
### Descripción del Desarrollo
Se ha abordado el desarrollo de la actividad creando 3 archivos y escribiendo el programa en 3 lenguajes de programación diferentes, contestando a las preguntas propuestas por el docente en este mismo archivo readme formateando el texto con el lenguaje de marcas markdown.

### Código Fuente
[Código en Python](/src/programa.py)
[Código en Java](/src/programa.jav)
[Código en C](/src/programa.c)

### Ejemplos de Ejecución
- **Entrada 1:** Descripción de la entrada y valor de prueba.
- **Salida Esperada 1:** Explicación de la salida esperada y el resultado de la prueba.

### Resultados de Pruebas
[Aquí se detallará cómo se ha verificado la funcionalidad del código, incluyendo resultados de pruebas automatizadas o manuales, en caso de que las haya.]

## Documentación Adicional
- **Manual de Usuario:** [Enlace a la documentación del usuario, si existe]
- **Autorización de Permisos:** Verificar que el profesor tenga permisos de lectura en el repositorio para revisar el código.

## Conclusiones
[Resumen de las conclusiones alcanzadas al desarrollar la actividad, las lecciones aprendidas, y posibles mejoras que se puedan implementar en futuras entregas.]

## Referencias y Fuentes
Apuntes del docente.

### Notas Adicionales:
1. **Nombres de Archivos y Repositorios:**
   - Asegúrate de que el nombre del archivo o repositorio siga la estructura definida: `XXX-idActividad-Iniciales`.
2. **Permisos:**
   - Verifica que el profesor tenga los permisos necesarios para acceder al repositorio o documento.
3. **Formato:**
   - Si se entrega en formato PDF o Google Docs, asegúrate de cumplir con el mínimo y máximo de folios establecidos.
4. **Compilación y Ejecución:**
   - Detalla claramente cómo compilar y ejecutar el código, incluyendo las instrucciones en el archivo `README.md`.

## | Capturas Ejecuciones | 
### Ejecución del programa en Python:
![Imagen ejecucion Python](/capturas/ejec_python.png)

### Ejecución del programa en Java:
![Imagen ejecucion java](/capturas/ejec_java.png)

### Ejecución del programa en C:
![Imagen ejecucion C](/capturas/ejec_c.png)


# PREGUNTAS
## 5.1. Criterio de Evaluación 1.a: Relación entre Software y Hardware

1. **Describe cómo el software que has creado se ha relacionado con los componentes físicos del dispositivo (memoria RAM, procesador, periféricos, etc.) durante la ejecución de los tres lenguajes (interpretado, compilado y en máquina virtual). Puntos a incluir:**
- **Cómo se almacenaron los datos en memoria.**
- **Qué hizo el procesador con el código.**
- **Si se interactuó con periféricos, como la pantalla para mostrar la salida.**
Cuando el usuario escribe, el teclado (dispositivo de entrada) detecta una pulsación y envía señales al ordenador, estas señales se convierten en datos que el software puede usar, y estos datos se recogen y se almacenan temporalmente en la memoria RAM, después la CPU lee y ejecuta las instrucciones almacenadas en la RAM, procesa esos datos de entrada y produce la salida a través de la pantalla (dispositivo de salida).

## 5.2. Criterio de Evaluación 1.c: Diferenciación entre Código Fuente, Código Objeto y Ejecutable
**Preguntas:**

1. **Explica cómo el código fuente que escribiste se transformó en código objeto y ejecutable en el caso de los lenguajes compilados. ¿Generaste archivos intermedios (código objeto)? ¿Qué nombres tomaron estos archivos?**
El código fuente es compilado (traducido) por un programa (que es el compilador), que transforma el código fuente en código objeto, que es un formato intermedio que la máquina está más cerca de entender. Al compilar un programa en un lenguaje compilado (C), se generan archivos intermedios de código objeto, estos archivos tienen la extensión .o o .obj, depende del sistema operativo. El código objeto es transformado en código ejecutable (ya la máquina puede entenderlo) mediante un proceso llamado enlazado (linking), el enlazador es una herramienta que coge los archivos de código objeto y los une en un solo archivo ejecutable.

2. **Para los lenguajes interpretados, describe cómo el código fuente se ejecutó directamente, sin generar archivos de código objeto o ejecutable.**
En los lenguajes interpretados (Python), el código fuente se ejecuta directamente gracias a un intérprete, que es un programa que lee el código línea por línea y ejecuta las instrucciones en tiempo real, no se crean archivos intermedios como en los lenguajes compilados.

3. **Para el lenguaje que genera código intermedio (Java, C#), explica cómo el código fuente se transformó en código intermedio (bytecode) y cómo este fue ejecutado por la máquina virtual.**
Una vez escrito el código fuente, se compila a código intermedio, en Java, este código se llama bytecode (se guarda en un archivo .class) y está diseñado para ser ejecutado por una máquina virtual (en el caso de Java, la JVM), la JVM (Java Virtual Machine) carga el archivo .class en memoria, verifica que el bytecode sea correcto e interpreta línea por línea las instrucciones del bytecode, también puede compilar partes de cñodigo con un compilador Just-In-Time (JIT), por último, la JVM ejecuta las instrucciones traducidas por el intérprete o el compilador JIT.

## 5.3. Criterio de Evaluación 1.d: Generación de Código Intermedio para Máquinas Virtuales
**Preguntas:**

1. **Describe el proceso de generación de código intermedio (bytecode) en el lenguaje que utilizaste que emplea una máquina virtual (por ejemplo, Java o C#).**
Vamos a tomar como ejemplo Java, el código fuente se compila con javac, un compilador que lo transforma a código intermedio (llamado bytecode) que está guardado dentro de un archivo .class, este archivo es cargado en memoria por la JVM, la cual verifica que el bytecode es correcto y lo interpreta línea a línea.

2. **Explica qué rol juega la máquina virtual en la ejecución del código y cómo difiere de la ejecución directa en un sistema operativo como ocurre con los lenguajes compilados e interpretados.**
La máquina virtual juega un papel muy importante en la ejecución del código, su rol es interpretar o compilar el código intermedio y traducirlo en instrucciones que el procesador puede entender. A diferencia de la ejecución directa si hablamos de los lenguajes compilados, la máquina virtual tiene una ventaja muy grande: la portabilidad, permite que el mismo código intermedio pueda ser ejecutado en cualquier plataforma (siempre que la plataforma tenga una máquina virtual compatible), es decir, no hace falta modificiar el código intermedio.
## 5.4. Criterio de Evaluación 1.e: Clasificación de Lenguajes de Programación
**Preguntas:**

1. **Clasifica los tres lenguajes utilizados (interpretado, compilado y en máquina virtual) según su:**
- **Modo de ejecución (interpretado vs compilado vs máquina virtual).**
- **Nivel de abstracción (alto nivel vs bajo nivel).**
- **Paradigma de programación (imperativo, orientado a objetos, funcional,...).**
2. **Explica qué características de estos lenguajes influyeron en su clasificación. Es decir, ahonde en las razones por las que cada lenguaje pertenece a una categoría específica.**
1) **Python:**
- **Interpretado:** ya que el código fuente de este lenguaje es interpretado por un intérprete, es un programa que lee línea por línea y ejecuta al instante. Es lento en tiempo de ejecución pero más flexible y fácil de probar, ya que no hay compilación.
- **Alto nivel:** porque es un lenguaje diseñado para que sea fácil de entender y de escribir, aunque tiene un control menos profundo sobre los detalles de bajo nivel del hardware.
- **Soporta varios paradigmas: Imperativo**, (Python puede ser usado en estilo imperativo) el programador da instrucciones detalladas para que el programa se ejecute (ejemplo: al sumar 2 números en Python, es imperativo porque especifica los pasos exactos). **Orientado a objetos:** en Python también se puede organizar el código en objetos, los cuales encapsulan datos y comportamientos. **Funcional:** no es un lenguaje puramente funcional, pero tiene muchas características propias de la programación funcional: permite crear funciones pequeñas sin nombre, útil para operaciones rápidas, las funciones se pueden asignar a variables, pasar como argumentos y devolver desde otras funciones...
2) **C:**
- **Compilado:** ya que el código fuente que se escribe en C es compilado (traducido) a código máquina y una vez compilado, se genera un archivo ejecutable que el procesador puede entender y ejecutar, además, es un lenguaje rápido respecto al tiempo de ejecución y necesita ser recompilado para cada plataforma.
- **Bajo nivel:** porque es un lenguaje que está más cerca del lenguaje máquina, por lo que es más difícil de escribir y entender, aunque ofrece acceso directo a los recursos del sistema.
- **Imperativo:** el programador da instrucciones detalladas para que el programa se ejecute (ejemplo: al sumar 2 números en C, es imperativo porque especifica los pasos exactos).
3) **Java:**
- **Compilado a bytecode y ejecutado en la JVM:** el código fuente se compila con javac, se convierte en bytecode y la JMV interpreta o compila ese bytecode a código máquina para que después, finalmente, sea ejecutado.
- **Alto nivel:** porque es un lenguaje diseñado para ser fácil de entender y escribir por los humanos, ofrece muchas funcionalidades que ayudan a los desarrolladores, aunque tiene menos control sobre los detalles de bajo nivel del hardware.
- **Orientado a objetos:** Java organiza el código en objetos (son instancias de clases), los cuales encapsulan datos y comportamientos.

## 5.5. Criterio de Evaluación 1.f: Evaluación de Herramientas Utilizadas en el Desarrollo
**Preguntas:**

1. **Para cada uno de los tres lenguajes (interpretado, compilado y en máquina virtual), describe las herramientas que utilizaste en el proceso de desarrollo:**
- **Sistema operativo (¿en qué sistema ejecutaste el programa?):** He ejecutado los 3 programas en Windows

- **Editor de texto o IDE (¿dónde escribiste el código?):** He utilizado el IDE Visual Studio Code para escribir los 3 códigos.

- **Compilador o intérprete (¿cómo se transformó o ejecutó el código?):** Depende del lenguaje, en Python, el código se ejecutó directamente al pulsar en ejecutar, en C, el código se compiló a código máquina y se crearon archivos .obj, el código objeto se transforma en código ejecutable creándose un archivo ejecutable gracias al proceso llamado linking, en Java el código fuente se compiló con javac, se conviertió en bytecode y la JMV convirtió ese ese bytecode a código máquina, por último, el procesador ejecuta ese código. 

- **Depurador (si lo usaste, ¿cómo lo empleaste para encontrar errores?):** Lo he usado para familiarizarme con la depurazión, he podido encontrar errores poniendo puntos de ruptura en ciertas líneas del código para ver cómo se iba ejecutando el programa, en un programa así de pequeño no es tan útil ya que no es necesario usarlo para entender la ejecución, pero sería gran ayuda en programas más grandes que contengan más operaciones.

- **Sistema de gestión de versiones (si lo usaste, ¿cómo guardaste las versiones del código?):** He guardado las versiones del código con los comandos de Git, que sirven para guardar el código en la staging area, después hacer commits y, por último, hacer varios push para subir los cambios al repositorio en GitHub.

- **Otras herramientas Añade alguna herramienta más a la lista. ¿Cómo te ayudó en el desarrollo?** Me han ayudado bastantes los pack de extensiones oficiales de Microsft de Python, Java y C/C++, ya que, por ejemplo, la de Python incluía la extensión oficial de Python pero también herramientas de depuración, linting, formateo de código y testing.

## Conclusión Final:
Respecto al rendimiento, los lenguajes compilados (como C), ofrecen un mejor rendimiento ya que el código fuente se traduce directamente a código máquina antes de ejecutarse. Mientras que los lenguajes interpretados (como Python) destacan por su facilidad de uso y flexibilidad durante el desarrollo, ya que se ejecutan línea a línea sin ser compilados, aunque tienen una menor velocidad de ejecución. Los lenguajes que usan máquina virtual (como Java) logran un equilibrio, porque generan un código intermedio (bytecode) que la JVM traduce a código máquina, estos lenguajes tienen ventajas como portabilidad y optimización. En resumen, cada lenguaje tiene sus ventajas y desventajas respecto a la velocidad, facilidad y compatibilidad, por eso mismo cada uno se usa según el objetivo que se quiera conseguir.