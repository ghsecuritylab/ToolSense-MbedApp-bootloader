mbed compile -m NUCLEO_L432KC -t GCC_ARM --source=mbed-os --source=src --app-config=mbed_app.json -N=blinky
xcopy /Y BUILD\NUCLEO_L432KC\GCC_ARM\blinky.bin release