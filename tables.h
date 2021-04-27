#ifndef TABLES_H
#define	TABLES_H

constexpr unsigned int bitrates[3][15] = {
    { 0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448 },
    { 0, 32, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384 },
    { 0, 32, 40, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320 }
};

static const char slen[16][2] {
	{0, 0}, {0, 1}, {0, 2}, {0, 3}, {3, 0}, {1, 1}, {1, 2}, {1, 3},
	{2, 1}, {2, 2}, {2, 3}, {3, 1}, {3, 2}, {3, 3}, {4, 2}, {4, 3}
};

#endif
