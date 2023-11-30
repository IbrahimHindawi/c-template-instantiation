#include "templates.h"

int main(int argc, char **argv) {
	hkArrayF32 arrfloat = { 0 };
	hkArrayF32_init(&arrfloat, 8);
	for (int i = 0; i < arrfloat.size; ++i) {
		arrfloat.buffer[i] = .0f;
	}
	hkArrayF32_cleanup(&arrfloat);

	hkArrayVec3 arrvec3 = { 0 };
	hkArrayVec3_init(&arrvec3, 8);
	for (int i = 0; i < arrvec3.size; ++i) {
		arrvec3.buffer[i][0] = .0f;
		arrvec3.buffer[i][1] = .0f;
		arrvec3.buffer[i][2] = .0f;
	}
	hkArrayVec3_cleanup(&arrvec3);
	return 0;
}
