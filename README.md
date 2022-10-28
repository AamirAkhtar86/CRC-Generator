# My-CRC-Generator

# Aamir Akhtar:
This file contains a custom created header, a text file for input, a cpp code and binary output file.

# Code explaination

Step 1: Upon execution, it asks user for data choice. User can choose from three options. Predefined data, random data or data from text file.

Step 2: Upon data selection, it appends the defined access code to the data.

Step 3: It then calculates CRC for chosen data using boost library for cpp

https://www.boost.org/doc/libs/1_68_0/boost/crc.hpp

Step 4: It appends access code, payload (data) and CRC.

Step 5: It then writes the appended output to binary file.
