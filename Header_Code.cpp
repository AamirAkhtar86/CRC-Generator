#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <boost/crc.hpp>
#include <boost/cstdint.hpp>
#include <algorithm>
#include <cstddef>
#include <bits/stdc++.h>
#include "GetHexFromBin.h"
#include <sstream>

using namespace std;

int choice, data_size;
unsigned char* data;
unsigned char defined_data[] = {0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39};
unsigned char random_data[90] = {};
//unsigned char file_data[] = {};
string file_input;

/********* Function to convert integer to binary **********/
string toBin(long long int num)
{
	string bin = "";
	while (num)
	{
		if (num & 1)
			bin = "1"+bin;
		else
			bin = "0"+bin;
		num = num >> 1;
	}
	return bin;
}

int main()
{
    cout << "******************** Transmitter Side! ********************" << endl;
    cout << "Option1: Pre-defined data" << endl;
    cout << "Option2: Randomly generated data" << endl;
    cout << "Option3: Data from text file" << endl;
    cout << "Please enter 1, 2 or 3" << endl;
    cout<<"Choose option: ";
    cin>> choice;

    /********* Option 1 **********/
    if (choice == 1)
    {
        cout << "\nOption1: Pre-defined data" << endl;
        data = defined_data;
        data_size = sizeof(defined_data)/sizeof(defined_data[0]);
    }

    /********* Option 2 **********/
    else if (choice == 2)
    {
        cout << "\nOption2: Randomly generated data" << endl;
        random_data[90] = rand();
        data = random_data;
        data_size = sizeof(random_data)/sizeof(random_data[0]);
    }

    /********* Option 3 **********/
    else if (choice == 3)
    {
        cout << "Option3: Data from text file" << endl;
        const char *filename = "data_in.txt";
        ifstream file;
        file.open(filename,ios::in);
        if (!file)
        {
            cout << "Error in opening file!!" << endl;
            return -1;
        }
        while (!file.eof())
        {
            file >> noskipws >> file_input;
        }
        file.close();
        int file_size = file_input.length();
        unsigned char file_data[file_size];
        for (int i =0; i<file_size; i++)
        {
            file_data[i] = file_input[i];
        }
        data = file_data;
        data_size = sizeof(file_data)/sizeof(file_data[0]);
    }

    /********* if no option selected **********/
    else
    {
        cout << "\nPlease try again!!: " << endl;
    }
    
    cout << "\n******************** Payload ********************\n" << endl;
    cout << "\nPayload: " << endl;
    cout << data << endl;
    cout << "\nPayload Size: " << data_size << endl;

    /********* Access Code **********/
    cout << "\n******************** Access Code ********************\n" << endl;
    unsigned char access_code[] = {0x30, 0x31, 0x31, 0x30, 0x31, 0x31, 0x30, 0x30, 0x31, 0x30, 0x31, 0x30};
    int access_code_size = sizeof(access_code);
    cout << "\nAccess Code: " << endl;
    cout << access_code << endl;
    cout << "\nAccess Code Size: " << access_code_size << endl;

    /********* Appending access code and payload **********/
    cout << "\n******************** Access Code + Payload ********************\n" << endl;
    unsigned char access_payload_arr[data_size+access_code_size];
    for (int i=0; i<(data_size+access_code_size); i++)
    {
    	if (i < access_code_size)
    	{
    		access_payload_arr[i] = access_code[i];
    	}
    	else
    	{
    		access_payload_arr[i] = data[i - access_code_size];
    	}

    }

    int access_payload_size = sizeof(access_payload_arr)/sizeof(access_payload_arr[0]);

    cout << "\nAccess Code + Payload: " << endl;
	for (int i=0; i<(data_size+access_code_size); i++)
	{
		cout <<access_payload_arr[i];
	}
	cout << endl;

	cout << "\nAccess Code + Payload Size: " << access_payload_size << endl;

	/********* Calculating CRC **********/
    cout << "\n******************** Calculating CRC ********************\n" << endl;

    boost::crc_optimal<32, 0x04C11DB7, 0xFFFFFFFF, 0xFFFFFFFF, true, true>  crc_ccitt1;
    crc_ccitt1.process_bytes( data, data_size );
    cout << "\nCRC (Decimal): " << crc_ccitt1.checksum() << endl;

    string crc_bin = toBin(crc_ccitt1.checksum());
    cout << "CRC (Binary): " << crc_bin << endl;

    string crc_hex = GetHexFromBin(crc_bin);
    cout << "CRC (Hexadecimal): " << crc_hex << endl;

    char delim = ',';
    int len = crc_hex.length();
    for (int i=2; i<len; i+=3, ++len) crc_hex.insert(i,1,delim);
    	istringstream is(crc_hex);
    	ostringstream os;
    	is >> hex;
    	int n;
    	while (is >> n)
    	{
    		char c = (char)n;
    		os << string(&c, 1);
    		if (is.peek() == delim) is.ignore();
    	}

    string byte_string = os.str();

    unsigned char CRC_arr[byte_string.length()];
    for (int i=0; i<(byte_string.length()); i++)
    {
    	CRC_arr[i] = byte_string[i];
    }

    cout << "CRC (Bytes): " << CRC_arr << endl;

    int CRC_Size = sizeof(CRC_arr)/sizeof(CRC_arr[0]);
    cout << "CRC Size (Bytes): " << CRC_Size << endl;

    /********* Appending access code, payload and CRC **********/
    cout << "\n******************** Access Code + Payload + CRC ********************\n" << endl;
    unsigned char access_payload_crc_arr[access_payload_size+CRC_Size];
    for (int i=0; i<(access_payload_size+CRC_Size); i++)
    {
    	if (i < access_payload_size)
    	{
    		access_payload_crc_arr[i] = access_payload_arr[i];
    	}
    	else
    	{
    		access_payload_crc_arr[i] = CRC_arr[i - access_payload_size];
    	}
    }

    int access_payload_crc_size = sizeof(access_payload_crc_arr)/sizeof(access_payload_crc_arr[0]);

    cout << "\nAccess Code + Payload + CRC: " << endl;
	for (int i=0; i<(access_payload_size+CRC_Size); i++)
	{
		cout <<access_payload_crc_arr[i];
	}
	cout << endl;

	cout << "\nAccess Code + Payload + CRC Size: " << access_payload_crc_size << endl;

	/********* Writing data to binary file **********/
	//const unsigned long long size = 64ULL*1024ULL*1024ULL;
	const unsigned long long size = access_payload_crc_size;
	fstream myFile;
	myFile = fstream("output_file.binary", ios::out | ios::binary);
	for (int i=0; i<access_payload_crc_size; i++)
	{
		myFile.write((char*)&access_payload_crc_arr,size*sizeof(unsigned char));
	}


    return 0;
}