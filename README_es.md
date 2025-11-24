<p align="right">
  <b><a href="./README.md">🇧🇷 Ler em Português</a></b> |
  <b><a href="./README_es.md">🇪🇸 Leer en Español</a></b>
</p>

# Elementos de Robótica

Repositorio destinado a la gestión de las actividades de la asignatura **Elementos de Robótica (2025.2)**, que contiene simulaciones y archivos utilizados en el desarrollo del robot recolector de metales.

## Simulación en CoppeliaSim

<img src="./figs/template.png" alt="template"/>

Modelo 3D desarrollado para el proyecto: [Tinkercad](https://www.tinkercad.com/things/0kurSNMwIgs/edit?sharecode=BUHMEo9sgqf5a5IYN_LZvXjRUPOJ2kw7aipZHsgBEIY).

El robot fue diseñado para desplazarse en terrenos irregulares e inestables, como áreas arenosas.

### Componentes del Robot
- **Detección**:
  - Sensor de proximidad para simular el electroimán  
  - Script para diferenciar objetos metálicos y no metálicos
- **Control**:
  - Script en Lua conectado a CoppeliaSim  
  - Comandos de movimiento por teclado

### Videos de la Simulación
<p align="center">
  <table>
    <tr>
      <td align="center">
        <img src="./figs/car_walk.gif" alt="Robot andando" width="500"/><br/>
        <sub><b>Robot moviéndose en terreno irregular</b></sub>
      </td>
      <td align="center">
        <img src="./figs/metal_catch.gif" alt="Robot recogiendo metales" width="500"/><br/>
        <sub><b>Robot recogiendo metales</b></sub>
      </td>
    </tr>
  </table>
</p>

### Controles
El control se realiza mediante las siguientes teclas:

- **W**: Movimiento hacia adelante  
- **S**: Movimiento hacia atrás  
- **A**: Girar a la izquierda  
- **D**: Girar a la derecha  
- **Espacio**: Detiene el robot  
- **Q**: Detiene la traslación del robot  
- **R**: Detiene la rotación del robot  
- **M**: Activar/desactivar electroimán

### Optimización de Energía

El objetivo es hacer que el robot recorra el **camino más corto** entre los materiales metálicos, para optimizar de la mejor manera posible el gasto energético.

<p align="center">
  <img src="./figs/energy_optimization.gif" alt="Optimización de energía" width="500"/><br/>
  <sub><b>Demostración del trayecto optimizado</b></sub>
</p>