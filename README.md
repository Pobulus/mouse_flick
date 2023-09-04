# mouse_flick
Simple utility for sending keystrokes with xdotool when the mouse is flicked in a certain direction

## Requirements
- [`SFML`](https://www.sfml-dev.org/index.php) for reading mouse movements
- [`xdotool`](https://github.com/jordansissel/xdotool) for sending keystrokes

## Parameters
- `delay` how long (in milliseconds) to wait before reading the mouse position again
- `threshold` how far (in pixels) must the mouse move for the flick to be detected


## Compiling
Assuming you have installed SFML, run: 

```c++ main.cpp -lsfml-window -lsfml-system -o mouse_flick```

## Usage
Add a shortcut in your system settings which launches the binary `mouse_flick` (make sure it's executable). 
You might want to copy it to your `PATH` directory for convenience. 

I use `Super+D` because my mouse has a button which sends it



