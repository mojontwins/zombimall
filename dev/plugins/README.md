# textbox plugin for MTE MK1

1. Crear directorio `/dev/plugins` y poner `textbox.h` dentro
2. Copiar `textstuffer.exe` en `/utils`
3. En `my/cy/extra_vars.h` añadir 

```c
	#include "plugins/textbox.h"
```

4. Para los textos, crear un archivo `/texts/texts.txt`; el directorio `/texts` a la misma altura que los otros diectorios (`/dev`, `/gfx`, `/util`...)
5. En `texts.txt` se pone el texto de la caja, uno por linea del archivo
6. En `compile.bat` añades una linea antes de zcc para que codifique el texto cada vez que construyas el juego:

```
	..\utils\textstuffer.exe ..\texts\texts.txt texts.bin 24
```

7. Desde donde necesites, llamas a `textbox (N)`, con N la linea - 1 (la primera linea es 0).

1. Create directory `/dev/plugins`, copy `textbox.h` inside
2. Copy `textstuffer.exe` in `/utils`.
3. Add this to `my/cy/extra_vars.h`

```c
	#include "plugins/textbox.h"
```

4. Make a `/texts` directory at the same level as `/dev`, `/utils`, etc. 
5. The text for your text boxes goes into `/texts/texts.txt`; use one line in this file for each text you want to display.
6. Add a line to `compile.bat` to re-encode texts every time you build your game:

```
	..\utils\textstuffer.exe ..\texts\texts.txt texts.bin 24
```

7. To display a text box, call `textbox (N)` with N the line number - 1 (first line contains text 0).