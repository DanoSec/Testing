# Pruebas con C

Repositorio simple para hacer pruebas básicas con C y GitHub.

Ahora mismo el proyecto incluye un único programa, `calc.c`, que:

- solicita dos números enteros por consola,
- realiza la suma,
- muestra el resultado en pantalla.

## Contenido

```text
.
├── calc.c
└── README.md
```

## Requisitos

- Un compilador de C como `gcc`

## Compilación

```bash
gcc calc.c -o calc
```

## Ejecución

```bash
./calc
```

## Ejemplo de uso

```text
Introduce el primer número: 5
Introduce el segundo número: 8
El resultado de la suma es: 13
```

## Objetivo del repositorio

Este repositorio parece pensado como entorno de pruebas: subir ejemplos pequeños, validar compilaciones y practicar flujo básico con Git/GitHub.

## Posibles siguientes pasos

- añadir resta, multiplicación y división,
- validar errores de entrada en `scanf`,
- separar la lógica en funciones,
- añadir un `Makefile`,
- incluir más ejemplos pequeños en C.
