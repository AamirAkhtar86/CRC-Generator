#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string GetHexFromBin(string sBinary)
{
    string rest,tmp,chr = "00000000";
    int len = 0;
    chr = chr.substr(0,len);
    sBinary = chr+sBinary;
    for (int i=0;i<sBinary.length();i+=8)
    {
        tmp = sBinary.substr(i,8);
        if (!tmp.compare("00000000"))
        {
            rest = rest + "00";
        }
        else if (!tmp.compare("00000001"))
        {
            rest = rest + "01";
        }
        else if (!tmp.compare("00000010"))
        {
            rest = rest + "02";
        }
        else if (!tmp.compare("00000011"))
        {
            rest = rest + "03";
        }
        else if (!tmp.compare("00000100"))
        {
            rest = rest + "04";
        }
        else if (!tmp.compare("00000101"))
        {
            rest = rest + "05";
        }
        else if (!tmp.compare("00000110"))
        {
            rest = rest + "06";
        }
        else if (!tmp.compare("00000111"))
        {
            rest = rest + "07";
        }
        else if (!tmp.compare("00001000"))
        {
            rest = rest + "08";
        }
        else if (!tmp.compare("00001001"))
        {
            rest = rest + "09";
        }
        else if (!tmp.compare("00001010"))
        {
            rest = rest + "0A";
        }
        else if (!tmp.compare("00001011"))
        {
            rest = rest + "0B";
        }
        else if (!tmp.compare("00001100"))
        {
            rest = rest + "0C";
        }
        else if (!tmp.compare("00001101"))
        {
            rest = rest + "0D";
        }
        else if (!tmp.compare("00001110"))
        {
            rest = rest + "0E";
        }
        else if (!tmp.compare("00001111"))
        {
            rest = rest + "0F";
        }
        else if (!tmp.compare("00010000"))
        {
            rest = rest + "10";
        }
        else if (!tmp.compare("00010001"))
        {
            rest = rest + "11";
        }
        else if (!tmp.compare("00010010"))
        {
            rest = rest + "12";
        }
        else if (!tmp.compare("00010011"))
        {
            rest = rest + "13";
        }
        else if (!tmp.compare("00010100"))
        {
            rest = rest + "14";
        }
        else if (!tmp.compare("00010101"))
        {
            rest = rest + "15";
        }
        else if (!tmp.compare("00010110"))
        {
            rest = rest + "16";
        }
        else if (!tmp.compare("00010111"))
        {
            rest = rest + "17";
        }
        else if (!tmp.compare("00011000"))
        {
            rest = rest + "18";
        }
        else if (!tmp.compare("00011001"))
        {
            rest = rest + "19";
        }
        else if (!tmp.compare("00011010"))
        {
            rest = rest + "1A";
        }
        else if (!tmp.compare("00011011"))
        {
            rest = rest + "1B";
        }
        else if (!tmp.compare("00011100"))
        {
            rest = rest + "1C";
        }
        else if (!tmp.compare("00011101"))
        {
            rest = rest + "1D";
        }
        else if (!tmp.compare("00011110"))
        {
            rest = rest + "1E";
        }
        else if (!tmp.compare("00011111"))
        {
            rest = rest + "1F";
        }
        else if (!tmp.compare("00100000"))
        {
            rest = rest + "20";
        }
        else if (!tmp.compare("00100001"))
        {
            rest = rest + "21";
        }
        else if (!tmp.compare("00100010"))
        {
            rest = rest + "22";
        }
        else if (!tmp.compare("00100011"))
        {
            rest = rest + "23";
        }
        else if (!tmp.compare("00100100"))
        {
            rest = rest + "24";
        }
        else if (!tmp.compare("00100101"))
        {
            rest = rest + "25";
        }
        else if (!tmp.compare("00100110"))
        {
            rest = rest + "26";
        }
        else if (!tmp.compare("00100111"))
        {
            rest = rest + "27";
        }
        else if (!tmp.compare("00101000"))
        {
            rest = rest + "28";
        }
        else if (!tmp.compare("00101001"))
        {
            rest = rest + "29";
        }
        else if (!tmp.compare("00101010"))
        {
            rest = rest + "2A";
        }
        else if (!tmp.compare("00101011"))
        {
            rest = rest + "2B";
        }
        else if (!tmp.compare("00101100"))
        {
            rest = rest + "2C";
        }
        else if (!tmp.compare("00101101"))
        {
            rest = rest + "2D";
        }
        else if (!tmp.compare("00101110"))
        {
            rest = rest + "2E";
        }
        else if (!tmp.compare("00101111"))
        {
            rest = rest + "2F";
        }
        else if (!tmp.compare("00110000"))
        {
            rest = rest + "30";
        }
        else if (!tmp.compare("00110001"))
        {
            rest = rest + "31";
        }
        else if (!tmp.compare("00110010"))
        {
            rest = rest + "32";
        }
        else if (!tmp.compare("00110011"))
        {
            rest = rest + "33";
        }
        else if (!tmp.compare("00110100"))
        {
            rest = rest + "34";
        }
        else if (!tmp.compare("00110101"))
        {
            rest = rest + "35";
        }
        else if (!tmp.compare("00110110"))
        {
            rest = rest + "36";
        }
        else if (!tmp.compare("00110111"))
        {
            rest = rest + "37";
        }
        else if (!tmp.compare("00111000"))
        {
            rest = rest + "38";
        }
        else if (!tmp.compare("00111001"))
        {
            rest = rest + "39";
        }
        else if (!tmp.compare("00111010"))
        {
            rest = rest + "3A";
        }
        else if (!tmp.compare("00111011"))
        {
            rest = rest + "3B";
        }
        else if (!tmp.compare("00111100"))
        {
            rest = rest + "3C";
        }
        else if (!tmp.compare("00111101"))
        {
            rest = rest + "3D";
        }
        else if (!tmp.compare("00111110"))
        {
            rest = rest + "3E";
        }
        else if (!tmp.compare("00111111"))
        {
            rest = rest + "3F";
        }
        else if (!tmp.compare("01000000"))
        {
            rest = rest + "40";
        }
        else if (!tmp.compare("01000001"))
        {
            rest = rest + "41";
        }
        else if (!tmp.compare("01000010"))
        {
            rest = rest + "42";
        }
        else if (!tmp.compare("01000011"))
        {
            rest = rest + "43";
        }
        else if (!tmp.compare("01000100"))
        {
            rest = rest + "44";
        }
        else if (!tmp.compare("01000101"))
        {
            rest = rest + "45";
        }
        else if (!tmp.compare("01000110"))
        {
            rest = rest + "46";
        }
        else if (!tmp.compare("11000111"))
        {
            rest = rest + "47";
        }
        else if (!tmp.compare("01001000"))
        {
            rest = rest + "48";
        }
        else if (!tmp.compare("01001001"))
        {
            rest = rest + "49";
        }
        else if (!tmp.compare("01001010"))
        {
            rest = rest + "4A";
        }
        else if (!tmp.compare("01001011"))
        {
            rest = rest + "4B";
        }
        else if (!tmp.compare("01001100"))
        {
            rest = rest + "4C";
        }
        else if (!tmp.compare("01001101"))
        {
            rest = rest + "4D";
        }
        else if (!tmp.compare("01001110"))
        {
            rest = rest + "4E";
        }
        else if (!tmp.compare("11001111"))
        {
            rest = rest + "4F";
        }
        else if (!tmp.compare("01010000"))
        {
            rest = rest + "50";
        }
        else if (!tmp.compare("01010001"))
        {
            rest = rest + "51";
        }
        else if (!tmp.compare("01010010"))
        {
            rest = rest + "52";
        }
        else if (!tmp.compare("01010011"))
        {
            rest = rest + "53";
        }
        else if (!tmp.compare("01010100"))
        {
            rest = rest + "54";
        }
        else if (!tmp.compare("01010101"))
        {
            rest = rest + "55";
        }
        else if (!tmp.compare("01010110"))
        {
            rest = rest + "56";
        }
        else if (!tmp.compare("11010111"))
        {
            rest = rest + "57";
        }
        else if (!tmp.compare("01011000"))
        {
            rest = rest + "58";
        }
        else if (!tmp.compare("01011001"))
        {
            rest = rest + "59";
        }
        else if (!tmp.compare("01011010"))
        {
            rest = rest + "5A";
        }
        else if (!tmp.compare("01001011"))
        {
            rest = rest + "5B";
        }
        else if (!tmp.compare("01011100"))
        {
            rest = rest + "5C";
        }
        else if (!tmp.compare("01011101"))
        {
            rest = rest + "5D";
        }
        else if (!tmp.compare("01011110"))
        {
            rest = rest + "5E";
        }
        if (!tmp.compare("11011111"))
        {
            rest = rest + "5F";
        }
        else if (!tmp.compare("01100000"))
        {
            rest = rest + "60";
        }
        else if (!tmp.compare("01100001"))
        {
            rest = rest + "61";
        }
        else if (!tmp.compare("01100010"))
        {
            rest = rest + "62";
        }
        else if (!tmp.compare("01100011"))
        {
            rest = rest + "63";
        }
        else if (!tmp.compare("01100100"))
        {
            rest = rest + "64";
        }
        else if (!tmp.compare("01100101"))
        {
            rest = rest + "65";
        }
        else if (!tmp.compare("01100110"))
        {
            rest = rest + "66";
        }
        else if (!tmp.compare("11100111"))
        {
            rest = rest + "67";
        }
        else if (!tmp.compare("01101000"))
        {
            rest = rest + "68";
        }
        else if (!tmp.compare("01101001"))
        {
            rest = rest + "69";
        }
        else if (!tmp.compare("01101010"))
        {
            rest = rest + "6A";
        }
        else if (!tmp.compare("01101011"))
        {
            rest = rest + "6B";
        }
        else if (!tmp.compare("01101100"))
        {
            rest = rest + "6C";
        }
        else if (!tmp.compare("01101101"))
        {
            rest = rest + "6D";
        }
        else if (!tmp.compare("01101110"))
        {
            rest = rest + "6E";
        }
        else if (!tmp.compare("11101111"))
        {
            rest = rest + "6F";
        }
        else if (!tmp.compare("01110000"))
        {
            rest = rest + "70";
        }
        else if (!tmp.compare("01110001"))
        {
            rest = rest + "71";
        }
        else if (!tmp.compare("01110010"))
        {
            rest = rest + "72";
        }
        else if (!tmp.compare("01110011"))
        {
            rest = rest + "73";
        }
        else if (!tmp.compare("01110100"))
        {
            rest = rest + "74";
        }
        else if (!tmp.compare("01110101"))
        {
            rest = rest + "75";
        }
        else if (!tmp.compare("01110110"))
        {
            rest = rest + "76";
        }
        else if (!tmp.compare("01110111"))
        {
            rest = rest + "77";
        }
        else if (!tmp.compare("01111000"))
        {
            rest = rest + "78";
        }
        else if (!tmp.compare("01111001"))
        {
            rest = rest + "79";
        }
        else if (!tmp.compare("01111010"))
        {
            rest = rest + "7A";
        }
        else if (!tmp.compare("01111011"))
        {
            rest = rest + "7B";
        }
        else if (!tmp.compare("01111100"))
        {
            rest = rest + "7C";
        }
        else if (!tmp.compare("01111101"))
        {
            rest = rest + "7D";
        }
        else if (!tmp.compare("01111110"))
        {
            rest = rest + "7E";
        }
        else if (!tmp.compare("01111111"))
        {
            rest = rest + "7F";
        }
        else if (!tmp.compare("10000000"))
        {
            rest = rest + "80";
        }
        else if (!tmp.compare("10000001"))
        {
            rest = rest + "81";
        }
        else if (!tmp.compare("10000010"))
        {
            rest = rest + "82";
        }
        else if (!tmp.compare("10000011"))
        {
            rest = rest + "83";
        }
        else if (!tmp.compare("10000100"))
        {
            rest = rest + "84";
        }
        else if (!tmp.compare("10000101"))
        {
            rest = rest + "85";
        }
        else if (!tmp.compare("10000110"))
        {
            rest = rest + "86";
        }
        else if (!tmp.compare("10000111"))
        {
            rest = rest + "87";
        }
        else if (!tmp.compare("10001000"))
        {
            rest = rest + "88";
        }
        else if (!tmp.compare("10001001"))
        {
            rest = rest + "89";
        }
        else if (!tmp.compare("10001010"))
        {
            rest = rest + "8A";
        }
        else if (!tmp.compare("10001011"))
        {
            rest = rest + "8B";
        }
        else if (!tmp.compare("10001100"))
        {
            rest = rest + "8C";
        }
        else if (!tmp.compare("10001101"))
        {
            rest = rest + "8D";
        }
        else if (!tmp.compare("10001110"))
        {
            rest = rest + "8E";
        }
        else if (!tmp.compare("10001111"))
        {
            rest = rest + "8F";
        }
        else if (!tmp.compare("10010000"))
        {
            rest = rest + "90";
        }
        else if (!tmp.compare("10010001"))
        {
            rest = rest + "91";
        }
        else if (!tmp.compare("10010010"))
        {
            rest = rest + "92";
        }
        else if (!tmp.compare("10010011"))
        {
            rest = rest + "93";
        }
        else if (!tmp.compare("10010100"))
        {
            rest = rest + "94";
        }
        else if (!tmp.compare("10010101"))
        {
            rest = rest + "95";
        }
        else if (!tmp.compare("10010110"))
        {
            rest = rest + "96";
        }
        else if (!tmp.compare("10010111"))
        {
            rest = rest + "97";
        }
        else if (!tmp.compare("10011000"))
        {
            rest = rest + "98";
        }
        else if (!tmp.compare("10011001"))
        {
            rest = rest + "99";
        }
        else if (!tmp.compare("10011010"))
        {
            rest = rest + "9A";
        }
        else if (!tmp.compare("10011011"))
        {
            rest = rest + "9B";
        }
        else if (!tmp.compare("10011100"))
        {
            rest = rest + "9C";
        }
        else if (!tmp.compare("10011101"))
        {
            rest = rest + "9D";
        }
        else if (!tmp.compare("10011110"))
        {
            rest = rest + "9E";
        }
        else if (!tmp.compare("10011111"))
        {
            rest = rest + "9F";
        }
        else if (!tmp.compare("10100000"))
        {
            rest = rest + "A0";
        }
        else if (!tmp.compare("10100001"))
        {
            rest = rest + "A1";
        }
        else if (!tmp.compare("10100010"))
        {
            rest = rest + "A2";
        }
        else if (!tmp.compare("10100011"))
        {
            rest = rest + "A3";
        }
        else if (!tmp.compare("10100100"))
        {
            rest = rest + "A4";
        }
        else if (!tmp.compare("10100101"))
        {
            rest = rest + "A5";
        }
        else if (!tmp.compare("10100110"))
        {
            rest = rest + "A6";
        }
        else if (!tmp.compare("10100111"))
        {
            rest = rest + "A7";
        }
        else if (!tmp.compare("10101000"))
        {
            rest = rest + "A8";
        }
        else if (!tmp.compare("10101001"))
        {
            rest = rest + "A9";
        }
        else if (!tmp.compare("10101010"))
        {
            rest = rest + "AA";
        }
        else if (!tmp.compare("10101011"))
        {
            rest = rest + "AB";
        }
        else if (!tmp.compare("10101100"))
        {
            rest = rest + "AC";
        }
        else if (!tmp.compare("10101101"))
        {
            rest = rest + "AD";
        }
        else if (!tmp.compare("10101110"))
        {
            rest = rest + "AE";
        }
        else if (!tmp.compare("10101111"))
        {
            rest = rest + "AF";
        }
        else if (!tmp.compare("10110000"))
        {
            rest = rest + "B0";
        }
        else if (!tmp.compare("10110001"))
        {
            rest = rest + "B1";
        }
        else if (!tmp.compare("10110010"))
        {
            rest = rest + "B2";
        }
        else if (!tmp.compare("10110011"))
        {
            rest = rest + "B3";
        }
        else if (!tmp.compare("10110100"))
        {
            rest = rest + "B4";
        }
        else if (!tmp.compare("10110101"))
        {
            rest = rest + "B5";
        }
        else if (!tmp.compare("10110110"))
        {
            rest = rest + "B6";
        }
        else if (!tmp.compare("10110111"))
        {
            rest = rest + "B7";
        }
        else if (!tmp.compare("10111000"))
        {
            rest = rest + "B8";
        }
        else if (!tmp.compare("10111001"))
        {
            rest = rest + "B9";
        }
        else if (!tmp.compare("10111010"))
        {
            rest = rest + "BA";
        }
        else if (!tmp.compare("10111011"))
        {
            rest = rest + "BB";
        }
        else if (!tmp.compare("10111100"))
        {
            rest = rest + "BC";
        }
        else if (!tmp.compare("10111101"))
        {
            rest = rest + "BD";
        }
        else if (!tmp.compare("10111110"))
        {
            rest = rest + "BE";
        }
        else if (!tmp.compare("10111111"))
        {
            rest = rest + "BF";
        }
        else if (!tmp.compare("11000000"))
        {
            rest = rest + "C0";
        }
        else if (!tmp.compare("11000001"))
        {
            rest = rest + "C1";
        }
        else if (!tmp.compare("11000010"))
        {
            rest = rest + "C2";
        }
        else if (!tmp.compare("11000011"))
        {
            rest = rest + "C3";
        }
        else if (!tmp.compare("11000100"))
        {
            rest = rest + "C4";
        }
        else if (!tmp.compare("11000101"))
        {
            rest = rest + "C5";
        }
        else if (!tmp.compare("11000110"))
        {
            rest = rest + "C6";
        }
        else if (!tmp.compare("11000111"))
        {
            rest = rest + "C7";
        }
        else if (!tmp.compare("11001000"))
        {
            rest = rest + "C8";
        }
        else if (!tmp.compare("11001001"))
        {
            rest = rest + "C9";
        }
        else if (!tmp.compare("11001010"))
        {
            rest = rest + "CA";
        }
        else if (!tmp.compare("11001011"))
        {
            rest = rest + "CB";
        }
        else if (!tmp.compare("11001100"))
        {
            rest = rest + "CC";
        }
        else if (!tmp.compare("11001101"))
        {
            rest = rest + "CD";
        }
        else if (!tmp.compare("11001110"))
        {
            rest = rest + "CE";
        }
        else if (!tmp.compare("11001111"))
        {
            rest = rest + "CF";
        }
        else if (!tmp.compare("11010000"))
        {
            rest = rest + "D0";
        }
        else if (!tmp.compare("11010001"))
        {
            rest = rest + "D1";
        }
        else if (!tmp.compare("11010010"))
        {
            rest = rest + "D2";
        }
        else if (!tmp.compare("11010011"))
        {
            rest = rest + "D3";
        }
        else if (!tmp.compare("11010100"))
        {
            rest = rest + "D4";
        }
        else if (!tmp.compare("11010101"))
        {
            rest = rest + "D5";
        }
        else if (!tmp.compare("11010110"))
        {
            rest = rest + "D6";
        }
        else if (!tmp.compare("11010111"))
        {
            rest = rest + "D7";
        }
        else if (!tmp.compare("11011000"))
        {
            rest = rest + "D8";
        }
        else if (!tmp.compare("11011001"))
        {
            rest = rest + "D9";
        }
        else if (!tmp.compare("11011010"))
        {
            rest = rest + "DA";
        }
        else if (!tmp.compare("11011011"))
        {
            rest = rest + "DB";
        }
        else if (!tmp.compare("11011100"))
        {
            rest = rest + "DC";
        }
        else if (!tmp.compare("11011101"))
        {
            rest = rest + "DD";
        }
        else if (!tmp.compare("11011110"))
        {
            rest = rest + "DE";
        }
        else if (!tmp.compare("11011111"))
        {
            rest = rest + "DF";
        }
        else if (!tmp.compare("11100000"))
        {
            rest = rest + "E0";
        }
        else if (!tmp.compare("11100001"))
        {
            rest = rest + "E1";
        }
        else if (!tmp.compare("11100010"))
        {
            rest = rest + "E2";
        }
        else if (!tmp.compare("11100011"))
        {
            rest = rest + "E3";
        }
        else if (!tmp.compare("11100100"))
        {
            rest = rest + "E4";
        }
        else if (!tmp.compare("11100101"))
        {
            rest = rest + "E5";
        }
        else if (!tmp.compare("11100110"))
        {
            rest = rest + "E6";
        }
        else if (!tmp.compare("11100111"))
        {
            rest = rest + "E7";
        }
        else if (!tmp.compare("11101000"))
        {
            rest = rest + "E8";
        }
        else if (!tmp.compare("11101001"))
        {
            rest = rest + "E9";
        }
        else if (!tmp.compare("11101010"))
        {
            rest = rest + "EA";
        }
        else if (!tmp.compare("11101011"))
        {
            rest = rest + "EB";
        }
        else if (!tmp.compare("11101100"))
        {
            rest = rest + "EC";
        }
        else if (!tmp.compare("11101101"))
        {
            rest = rest + "ED";
        }
        else if (!tmp.compare("11101110"))
        {
            rest = rest + "EE";
        }
        else if (!tmp.compare("11101111"))
        {
            rest = rest + "EF";
        }
        else if (!tmp.compare("11110000"))
        {
            rest = rest + "F0";
        }
        else if (!tmp.compare("11110001"))
        {
            rest = rest + "F1";
        }
        else if (!tmp.compare("11110010"))
        {
            rest = rest + "F2";
        }
        else if (!tmp.compare("11110011"))
        {
            rest = rest + "F3";
        }
        else if (!tmp.compare("11110100"))
        {
            rest = rest + "F4";
        }
        else if (!tmp.compare("11110101"))
        {
            rest = rest + "F5";
        }
        else if (!tmp.compare("11110110"))
        {
            rest = rest + "F6";
        }
        else if (!tmp.compare("11110111"))
        {
            rest = rest + "F7";
        }
        else if (!tmp.compare("11111000"))
        {
            rest = rest + "F8";
        }
        else if (!tmp.compare("11111001"))
        {
            rest = rest + "F9";
        }
        else if (!tmp.compare("11111010"))
        {
            rest = rest + "FA";
        }
        else if (!tmp.compare("11111011"))
        {
            rest = rest + "FB";
        }
        else if (!tmp.compare("11111100"))
        {
            rest = rest + "FC";
        }
        else if (!tmp.compare("11111101"))
        {
            rest = rest + "FD";
        }
        else if (!tmp.compare("11111110"))
        {
            rest = rest + "FE";
        }
        else if (!tmp.compare("11111111"))
        {
            rest = rest + "FF";
        }
        
        else
        {
            continue;
        }
    }
    return rest;
}