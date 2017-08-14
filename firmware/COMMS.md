In default 4-bit decode where no daisy chaining is required, there will be no UART communication.

Packet format:

Start of packet marker - 'P'
Mode - Mode ID
Position of the node sending the message first node sends it's position as zero.
Number of bytes to be sent of data.
The data itself. Typically there will be 4 bits added per node, though this will differ in analog mode.
Blank flag - if daisychanining is active, and member 0 is disabled, sleep the entire display.
End of packet marker - 'E'

Packets should be sent with a frequency of 10 Hz
9600 8n1 comms.

