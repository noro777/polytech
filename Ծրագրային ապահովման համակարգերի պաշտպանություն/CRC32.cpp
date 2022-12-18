#include <stdint.h>
#include <iostream>
using namespace std;

void generate_table(uint32_t(&table)[256]){
	uint32_t polynomial = 0xEDB88320;
	for (uint32_t i = 0; i < 256; i++){
		uint32_t c = i;
		for (size_t j = 0; j < 8; j++){
			if (c & 1) {
				c = polynomial ^ (c >> 1);
			}
			else {
				c >>= 1;
			}
		}
		table[i] = c;
	}
}

uint32_t update(uint32_t(&table)[256], uint32_t initial, const void* buf, size_t len){
	uint32_t c = initial ^ 0xFFFFFFFF;
	const uint8_t* u = static_cast<const uint8_t*>(buf);
	for (size_t i = 0; i < len; ++i){
		c = table[(c ^ u[i]) & 0xFF] ^ (c >> 8);
	}
	return c ^ 0xFFFFFFFF;
}

int main() {
	uint32_t table[256];
	generate_table(table);

	struct DataStruct {
		uint16_t data1;
		uint16_t data2;
		float mypi;
		uint32_t myclock;
		bool begun;
	};

	struct DataStruct Data = { 42,17,3.14,123456789,false };
	char* ptr = (char*)&Data;
	uint16_t slen = sizeof(Data);
	cout << "Տվյալների կառուցվածքի չափը. " << slen << endl;                 

	uint32_t CRC = 0;
	for (int cnt = 0; cnt < slen; cnt++) {
		CRC = update(table, CRC, ptr, 1);
		ptr++;
	}

	cout << "Կառուցվածքի crc32-ի մասով տվյալները: " << CRC << endl;       

}