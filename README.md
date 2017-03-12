# chaskey

http://mouha.be/chaskey/

A C implementation of the Chaskey MAC algorithm. Just a modification of the
reference implementation with a focus on improving usability and removing
unaligned accesses.

## Endianness Note

Untested on big endian systems, this may be broken. Note that keys are treated
as an array of integers rather than opaque binary data and therefore key data
representation will differ depending on system endianness.
