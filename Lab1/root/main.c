#include "address_mapping.h"
unsigned int state;
int main() {
	*SWITCHES_CONTROL = 0xFFFF;
	*LED_CONTROL = 0x0;
	while (1 == 1) {
		*LED_DATA = *SWITCHES_DATA;
	}
}
