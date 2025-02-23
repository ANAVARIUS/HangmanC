# Ahorcado en C

Este es un sencillo juego de Ahorcado desarrollado en ANSI C. Fue mi primer proyecto de programación y funciona completamente en la consola.

## Características

- Permite ingresar una palabra al inicio del juego.
- Limpia la pantalla después de ingresar la palabra para que el jugador no pueda verla.
- Muestra guiones bajos (`_`) en lugar de cada letra oculta.
- A medida que el jugador adivina letras correctas, estas aparecen en su posición correspondiente.
- Se permiten hasta **5 errores**; si el jugador falla **6 veces**, pierde el juego.
- Se lleva un registro de las letras incorrectas e intenta adivinadas.
- Si el jugador intenta una letra ya ingresada, se le notifica sin restar intentos.

## Cómo jugar

1. Ejecuta el programa.
2. Ingresa una palabra oculta (otro jugador deberá intentar adivinarla).
3. El juego limpiará la pantalla y mostrará los guiones bajos (`_`).
4. Ingresa letras una por una.
5. El juego actualizará la palabra mostrada y registrará los errores.
6. Si adivinas todas las letras antes de cometer 6 errores, ganas.
7. Si alcanzas 6 errores, pierdes.

## Requisitos

- Un compilador de C compatible con ANSI C (GCC recomendado).
- Consola de comandos para ejecutar el programa.

## Compilación y ejecución

Para compilar el programa, usa GCC:

```sh
gcc -o ahorcado main.c
```

Para ejecutarlo:

```sh
./ahorcado
```

## Notas

- El juego se ejecuta completamente en la consola.
- Todo el código está contenido en un solo archivo `main.c`.

---

### Autor
Desarrollado como mi primer proyecto de programación en C.

