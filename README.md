# hexdigit
A 4-bit hex seven-segment display decoder.

Hex decoding by default, with blanking signal and an option to force decimal
display only.

Once the hardware is made, a range of additional features are planned, taking
advantage of the daisy chaining feature using UART.

# Hardware
![Hardware](https://electronics.digital/img/3d-render.png "KiCAD 3D render")

The above render shows the basic goal of the product - to
fit entirley in the space of the seven-segment display, and
also have a DIP footprint for breadboarding.

The harware is based on an ATTiny1634, which has a whole 
host of capacity for future expansion.
