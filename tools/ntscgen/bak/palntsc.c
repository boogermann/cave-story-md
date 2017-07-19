#include "common.h"
#include "palntsc.h"

const uint16_t ntsctab[0x400][4] = {
	0x0000, 0x0000, 0x0000, 0x0000, 
	0x0001, 0x0001, 0x000d, 0x0001, 
	0x0002, 0x0002, 0x001b, 0x0002, 
	0x0003, 0x0003, 0x0028, 0x0004, 
	0x0004, 0x0003, 0x0035, 0x0005, 
	0x0005, 0x0004, 0x0043, 0x0006, 
	0x0006, 0x0005, 0x0050, 0x0007, 
	0x0007, 0x0006, 0x005d, 0x0008, 
	0x0008, 0x0007, 0x006b, 0x000a, 
	0x0009, 0x0008, 0x0078, 0x000b, 
	0x000a, 0x0008, 0x0085, 0x000c, 
	0x000b, 0x0009, 0x0093, 0x000d, 
	0x000c, 0x000a, 0x00a0, 0x000e, 
	0x000d, 0x000b, 0x00ad, 0x0010, 
	0x000e, 0x000c, 0x00bb, 0x0011, 
	0x000f, 0x000d, 0x00c8, 0x0012, 
	0x0010, 0x000d, 0x00d5, 0x0013, 
	0x0011, 0x000e, 0x00e3, 0x0014, 
	0x0012, 0x000f, 0x00f0, 0x0016, 
	0x0013, 0x0010, 0x00fd, 0x0017, 
	0x0014, 0x0011, 0x010b, 0x0018, 
	0x0015, 0x0012, 0x0118, 0x0019, 
	0x0016, 0x0012, 0x0125, 0x001a, 
	0x0017, 0x0013, 0x0133, 0x001c, 
	0x0018, 0x0014, 0x0140, 0x001d, 
	0x0019, 0x0015, 0x014d, 0x001e, 
	0x001a, 0x0016, 0x015b, 0x001f, 
	0x001b, 0x0017, 0x0168, 0x0020, 
	0x001c, 0x0017, 0x0175, 0x0022, 
	0x001d, 0x0018, 0x0183, 0x0023, 
	0x001e, 0x0019, 0x0190, 0x0024, 
	0x001f, 0x001a, 0x019d, 0x0025, 
	0x0020, 0x001b, 0x01ab, 0x0026, 
	0x0021, 0x001c, 0x01b8, 0x0028, 
	0x0022, 0x001c, 0x01c5, 0x0029, 
	0x0023, 0x001d, 0x01d3, 0x002a, 
	0x0024, 0x001e, 0x01e0, 0x002b, 
	0x0025, 0x001f, 0x01ed, 0x002c, 
	0x0026, 0x0020, 0x01fb, 0x002e, 
	0x0027, 0x0021, 0x0208, 0x002f, 
	0x0028, 0x0021, 0x0215, 0x0030, 
	0x0029, 0x0022, 0x0223, 0x0031, 
	0x002a, 0x0023, 0x0230, 0x0032, 
	0x002b, 0x0024, 0x023d, 0x0034, 
	0x002c, 0x0025, 0x024b, 0x0035, 
	0x002d, 0x0026, 0x0258, 0x0036, 
	0x002e, 0x0026, 0x0265, 0x0037, 
	0x002f, 0x0027, 0x0273, 0x0038, 
	0x0030, 0x0028, 0x0280, 0x003a, 
	0x0031, 0x0029, 0x028d, 0x003b, 
	0x0032, 0x002a, 0x029b, 0x003c, 
	0x0033, 0x002b, 0x02a8, 0x003d, 
	0x0034, 0x002b, 0x02b5, 0x003e, 
	0x0035, 0x002c, 0x02c3, 0x0040, 
	0x0036, 0x002d, 0x02d0, 0x0041, 
	0x0037, 0x002e, 0x02dd, 0x0042, 
	0x0038, 0x002f, 0x02eb, 0x0043, 
	0x0039, 0x0030, 0x02f8, 0x0044, 
	0x003a, 0x0030, 0x0305, 0x0046, 
	0x003b, 0x0031, 0x0313, 0x0047, 
	0x003c, 0x0032, 0x0320, 0x0048, 
	0x003d, 0x0033, 0x032d, 0x0049, 
	0x003e, 0x0034, 0x033b, 0x004a, 
	0x003f, 0x0035, 0x0348, 0x004c, 
	0x0040, 0x0035, 0x0355, 0x004d, 
	0x0041, 0x0036, 0x0363, 0x004e, 
	0x0042, 0x0037, 0x0370, 0x004f, 
	0x0043, 0x0038, 0x037d, 0x0050, 
	0x0044, 0x0039, 0x038b, 0x0052, 
	0x0045, 0x003a, 0x0398, 0x0053, 
	0x0046, 0x003a, 0x03a5, 0x0054, 
	0x0047, 0x003b, 0x03b3, 0x0055, 
	0x0048, 0x003c, 0x03c0, 0x0056, 
	0x0049, 0x003d, 0x03cd, 0x0058, 
	0x004a, 0x003e, 0x03db, 0x0059, 
	0x004b, 0x003f, 0x03e8, 0x005a, 
	0x004c, 0x003f, 0x03f5, 0x005b, 
	0x004d, 0x0040, 0x0403, 0x005c, 
	0x004e, 0x0041, 0x0410, 0x005e, 
	0x004f, 0x0042, 0x041d, 0x005f, 
	0x0050, 0x0043, 0x042b, 0x0060, 
	0x0051, 0x0044, 0x0438, 0x0061, 
	0x0052, 0x0044, 0x0445, 0x0062, 
	0x0053, 0x0045, 0x0453, 0x0064, 
	0x0054, 0x0046, 0x0460, 0x0065, 
	0x0055, 0x0047, 0x046d, 0x0066, 
	0x0056, 0x0048, 0x047b, 0x0067, 
	0x0057, 0x0049, 0x0488, 0x0068, 
	0x0058, 0x0049, 0x0495, 0x006a, 
	0x0059, 0x004a, 0x04a3, 0x006b, 
	0x005a, 0x004b, 0x04b0, 0x006c, 
	0x005b, 0x004c, 0x04bd, 0x006d, 
	0x005c, 0x004d, 0x04cb, 0x006e, 
	0x005d, 0x004e, 0x04d8, 0x0070, 
	0x005e, 0x004e, 0x04e5, 0x0071, 
	0x005f, 0x004f, 0x04f3, 0x0072, 
	0x0060, 0x0050, 0x0500, 0x0073, 
	0x0061, 0x0051, 0x050d, 0x0074, 
	0x0062, 0x0052, 0x051b, 0x0076, 
	0x0063, 0x0053, 0x0528, 0x0077, 
	0x0064, 0x0053, 0x0535, 0x0078, 
	0x0065, 0x0054, 0x0543, 0x0079, 
	0x0066, 0x0055, 0x0550, 0x007a, 
	0x0067, 0x0056, 0x055d, 0x007c, 
	0x0068, 0x0057, 0x056b, 0x007d, 
	0x0069, 0x0058, 0x0578, 0x007e, 
	0x006a, 0x0058, 0x0585, 0x007f, 
	0x006b, 0x0059, 0x0593, 0x0080, 
	0x006c, 0x005a, 0x05a0, 0x0082, 
	0x006d, 0x005b, 0x05ad, 0x0083, 
	0x006e, 0x005c, 0x05bb, 0x0084, 
	0x006f, 0x005d, 0x05c8, 0x0085, 
	0x0070, 0x005d, 0x05d5, 0x0086, 
	0x0071, 0x005e, 0x05e3, 0x0088, 
	0x0072, 0x005f, 0x05f0, 0x0089, 
	0x0073, 0x0060, 0x05fd, 0x008a, 
	0x0074, 0x0061, 0x060b, 0x008b, 
	0x0075, 0x0062, 0x0618, 0x008c, 
	0x0076, 0x0062, 0x0625, 0x008e, 
	0x0077, 0x0063, 0x0633, 0x008f, 
	0x0078, 0x0064, 0x0640, 0x0090, 
	0x0079, 0x0065, 0x064d, 0x0091, 
	0x007a, 0x0066, 0x065b, 0x0092, 
	0x007b, 0x0067, 0x0668, 0x0094, 
	0x007c, 0x0067, 0x0675, 0x0095, 
	0x007d, 0x0068, 0x0683, 0x0096, 
	0x007e, 0x0069, 0x0690, 0x0097, 
	0x007f, 0x006a, 0x069d, 0x0098, 
	0x0080, 0x006b, 0x06ab, 0x009a, 
	0x0081, 0x006c, 0x06b8, 0x009b, 
	0x0082, 0x006c, 0x06c5, 0x009c, 
	0x0083, 0x006d, 0x06d3, 0x009d, 
	0x0084, 0x006e, 0x06e0, 0x009e, 
	0x0085, 0x006f, 0x06ed, 0x00a0, 
	0x0086, 0x0070, 0x06fb, 0x00a1, 
	0x0087, 0x0071, 0x0708, 0x00a2, 
	0x0088, 0x0071, 0x0715, 0x00a3, 
	0x0089, 0x0072, 0x0723, 0x00a4, 
	0x008a, 0x0073, 0x0730, 0x00a6, 
	0x008b, 0x0074, 0x073d, 0x00a7, 
	0x008c, 0x0075, 0x074b, 0x00a8, 
	0x008d, 0x0076, 0x0758, 0x00a9, 
	0x008e, 0x0076, 0x0765, 0x00aa, 
	0x008f, 0x0077, 0x0773, 0x00ac, 
	0x0090, 0x0078, 0x0780, 0x00ad, 
	0x0091, 0x0079, 0x078d, 0x00ae, 
	0x0092, 0x007a, 0x079b, 0x00af, 
	0x0093, 0x007b, 0x07a8, 0x00b0, 
	0x0094, 0x007b, 0x07b5, 0x00b2, 
	0x0095, 0x007c, 0x07c3, 0x00b3, 
	0x0096, 0x007d, 0x07d0, 0x00b4, 
	0x0097, 0x007e, 0x07dd, 0x00b5, 
	0x0098, 0x007f, 0x07eb, 0x00b6, 
	0x0099, 0x0080, 0x07f8, 0x00b8, 
	0x009a, 0x0080, 0x0805, 0x00b9, 
	0x009b, 0x0081, 0x0813, 0x00ba, 
	0x009c, 0x0082, 0x0820, 0x00bb, 
	0x009d, 0x0083, 0x082d, 0x00bc, 
	0x009e, 0x0084, 0x083b, 0x00be, 
	0x009f, 0x0085, 0x0848, 0x00bf, 
	0x00a0, 0x0085, 0x0855, 0x00c0, 
	0x00a1, 0x0086, 0x0863, 0x00c1, 
	0x00a2, 0x0087, 0x0870, 0x00c2, 
	0x00a3, 0x0088, 0x087d, 0x00c4, 
	0x00a4, 0x0089, 0x088b, 0x00c5, 
	0x00a5, 0x008a, 0x0898, 0x00c6, 
	0x00a6, 0x008a, 0x08a5, 0x00c7, 
	0x00a7, 0x008b, 0x08b3, 0x00c8, 
	0x00a8, 0x008c, 0x08c0, 0x00ca, 
	0x00a9, 0x008d, 0x08cd, 0x00cb, 
	0x00aa, 0x008e, 0x08db, 0x00cc, 
	0x00ab, 0x008f, 0x08e8, 0x00cd, 
	0x00ac, 0x008f, 0x08f5, 0x00ce, 
	0x00ad, 0x0090, 0x0903, 0x00d0, 
	0x00ae, 0x0091, 0x0910, 0x00d1, 
	0x00af, 0x0092, 0x091d, 0x00d2, 
	0x00b0, 0x0093, 0x092b, 0x00d3, 
	0x00b1, 0x0094, 0x0938, 0x00d4, 
	0x00b2, 0x0094, 0x0945, 0x00d6, 
	0x00b3, 0x0095, 0x0953, 0x00d7, 
	0x00b4, 0x0096, 0x0960, 0x00d8, 
	0x00b5, 0x0097, 0x096d, 0x00d9, 
	0x00b6, 0x0098, 0x097b, 0x00da, 
	0x00b7, 0x0099, 0x0988, 0x00dc, 
	0x00b8, 0x0099, 0x0995, 0x00dd, 
	0x00b9, 0x009a, 0x09a3, 0x00de, 
	0x00ba, 0x009b, 0x09b0, 0x00df, 
	0x00bb, 0x009c, 0x09bd, 0x00e0, 
	0x00bc, 0x009d, 0x09cb, 0x00e2, 
	0x00bd, 0x009e, 0x09d8, 0x00e3, 
	0x00be, 0x009e, 0x09e5, 0x00e4, 
	0x00bf, 0x009f, 0x09f3, 0x00e5, 
	0x00c0, 0x00a0, 0x0a00, 0x00e6, 
	0x00c1, 0x00a1, 0x0a0d, 0x00e8, 
	0x00c2, 0x00a2, 0x0a1b, 0x00e9, 
	0x00c3, 0x00a3, 0x0a28, 0x00ea, 
	0x00c4, 0x00a3, 0x0a35, 0x00eb, 
	0x00c5, 0x00a4, 0x0a43, 0x00ec, 
	0x00c6, 0x00a5, 0x0a50, 0x00ee, 
	0x00c7, 0x00a6, 0x0a5d, 0x00ef, 
	0x00c8, 0x00a7, 0x0a6b, 0x00f0, 
	0x00c9, 0x00a8, 0x0a78, 0x00f1, 
	0x00ca, 0x00a8, 0x0a85, 0x00f2, 
	0x00cb, 0x00a9, 0x0a93, 0x00f4, 
	0x00cc, 0x00aa, 0x0aa0, 0x00f5, 
	0x00cd, 0x00ab, 0x0aad, 0x00f6, 
	0x00ce, 0x00ac, 0x0abb, 0x00f7, 
	0x00cf, 0x00ad, 0x0ac8, 0x00f8, 
	0x00d0, 0x00ad, 0x0ad5, 0x00fa, 
	0x00d1, 0x00ae, 0x0ae3, 0x00fb, 
	0x00d2, 0x00af, 0x0af0, 0x00fc, 
	0x00d3, 0x00b0, 0x0afd, 0x00fd, 
	0x00d4, 0x00b1, 0x0b0b, 0x00fe, 
	0x00d5, 0x00b2, 0x0b18, 0x0100, 
	0x00d6, 0x00b2, 0x0b25, 0x0101, 
	0x00d7, 0x00b3, 0x0b33, 0x0102, 
	0x00d8, 0x00b4, 0x0b40, 0x0103, 
	0x00d9, 0x00b5, 0x0b4d, 0x0104, 
	0x00da, 0x00b6, 0x0b5b, 0x0106, 
	0x00db, 0x00b7, 0x0b68, 0x0107, 
	0x00dc, 0x00b7, 0x0b75, 0x0108, 
	0x00dd, 0x00b8, 0x0b83, 0x0109, 
	0x00de, 0x00b9, 0x0b90, 0x010a, 
	0x00df, 0x00ba, 0x0b9d, 0x010c, 
	0x00e0, 0x00bb, 0x0bab, 0x010d, 
	0x00e1, 0x00bc, 0x0bb8, 0x010e, 
	0x00e2, 0x00bc, 0x0bc5, 0x010f, 
	0x00e3, 0x00bd, 0x0bd3, 0x0110, 
	0x00e4, 0x00be, 0x0be0, 0x0112, 
	0x00e5, 0x00bf, 0x0bed, 0x0113, 
	0x00e6, 0x00c0, 0x0bfb, 0x0114, 
	0x00e7, 0x00c1, 0x0c08, 0x0115, 
	0x00e8, 0x00c1, 0x0c15, 0x0116, 
	0x00e9, 0x00c2, 0x0c23, 0x0118, 
	0x00ea, 0x00c3, 0x0c30, 0x0119, 
	0x00eb, 0x00c4, 0x0c3d, 0x011a, 
	0x00ec, 0x00c5, 0x0c4b, 0x011b, 
	0x00ed, 0x00c6, 0x0c58, 0x011c, 
	0x00ee, 0x00c6, 0x0c65, 0x011e, 
	0x00ef, 0x00c7, 0x0c73, 0x011f, 
	0x00f0, 0x00c8, 0x0c80, 0x0120, 
	0x00f1, 0x00c9, 0x0c8d, 0x0121, 
	0x00f2, 0x00ca, 0x0c9b, 0x0122, 
	0x00f3, 0x00cb, 0x0ca8, 0x0124, 
	0x00f4, 0x00cb, 0x0cb5, 0x0125, 
	0x00f5, 0x00cc, 0x0cc3, 0x0126, 
	0x00f6, 0x00cd, 0x0cd0, 0x0127, 
	0x00f7, 0x00ce, 0x0cdd, 0x0128, 
	0x00f8, 0x00cf, 0x0ceb, 0x012a, 
	0x00f9, 0x00d0, 0x0cf8, 0x012b, 
	0x00fa, 0x00d0, 0x0d05, 0x012c, 
	0x00fb, 0x00d1, 0x0d13, 0x012d, 
	0x00fc, 0x00d2, 0x0d20, 0x012e, 
	0x00fd, 0x00d3, 0x0d2d, 0x0130, 
	0x00fe, 0x00d4, 0x0d3b, 0x0131, 
	0x00ff, 0x00d5, 0x0d48, 0x0132, 
	0x0100, 0x00d5, 0x0d55, 0x0133, 
	0x0101, 0x00d6, 0x0d63, 0x0134, 
	0x0102, 0x00d7, 0x0d70, 0x0136, 
	0x0103, 0x00d8, 0x0d7d, 0x0137, 
	0x0104, 0x00d9, 0x0d8b, 0x0138, 
	0x0105, 0x00da, 0x0d98, 0x0139, 
	0x0106, 0x00da, 0x0da5, 0x013a, 
	0x0107, 0x00db, 0x0db3, 0x013c, 
	0x0108, 0x00dc, 0x0dc0, 0x013d, 
	0x0109, 0x00dd, 0x0dcd, 0x013e, 
	0x010a, 0x00de, 0x0ddb, 0x013f, 
	0x010b, 0x00df, 0x0de8, 0x0140, 
	0x010c, 0x00df, 0x0df5, 0x0142, 
	0x010d, 0x00e0, 0x0e03, 0x0143, 
	0x010e, 0x00e1, 0x0e10, 0x0144, 
	0x010f, 0x00e2, 0x0e1d, 0x0145, 
	0x0110, 0x00e3, 0x0e2b, 0x0146, 
	0x0111, 0x00e4, 0x0e38, 0x0148, 
	0x0112, 0x00e4, 0x0e45, 0x0149, 
	0x0113, 0x00e5, 0x0e53, 0x014a, 
	0x0114, 0x00e6, 0x0e60, 0x014b, 
	0x0115, 0x00e7, 0x0e6d, 0x014c, 
	0x0116, 0x00e8, 0x0e7b, 0x014e, 
	0x0117, 0x00e9, 0x0e88, 0x014f, 
	0x0118, 0x00e9, 0x0e95, 0x0150, 
	0x0119, 0x00ea, 0x0ea3, 0x0151, 
	0x011a, 0x00eb, 0x0eb0, 0x0152, 
	0x011b, 0x00ec, 0x0ebd, 0x0154, 
	0x011c, 0x00ed, 0x0ecb, 0x0155, 
	0x011d, 0x00ee, 0x0ed8, 0x0156, 
	0x011e, 0x00ee, 0x0ee5, 0x0157, 
	0x011f, 0x00ef, 0x0ef3, 0x0158, 
	0x0120, 0x00f0, 0x0f00, 0x015a, 
	0x0121, 0x00f1, 0x0f0d, 0x015b, 
	0x0122, 0x00f2, 0x0f1b, 0x015c, 
	0x0123, 0x00f3, 0x0f28, 0x015d, 
	0x0124, 0x00f3, 0x0f35, 0x015e, 
	0x0125, 0x00f4, 0x0f43, 0x0160, 
	0x0126, 0x00f5, 0x0f50, 0x0161, 
	0x0127, 0x00f6, 0x0f5d, 0x0162, 
	0x0128, 0x00f7, 0x0f6b, 0x0163, 
	0x0129, 0x00f8, 0x0f78, 0x0164, 
	0x012a, 0x00f8, 0x0f85, 0x0166, 
	0x012b, 0x00f9, 0x0f93, 0x0167, 
	0x012c, 0x00fa, 0x0fa0, 0x0168, 
	0x012d, 0x00fb, 0x0fad, 0x0169, 
	0x012e, 0x00fc, 0x0fbb, 0x016a, 
	0x012f, 0x00fd, 0x0fc8, 0x016c, 
	0x0130, 0x00fd, 0x0fd5, 0x016d, 
	0x0131, 0x00fe, 0x0fe3, 0x016e, 
	0x0132, 0x00ff, 0x0ff0, 0x016f, 
	0x0133, 0x0100, 0x0ffd, 0x0170, 
	0x0134, 0x0101, 0x100b, 0x0172, 
	0x0135, 0x0102, 0x1018, 0x0173, 
	0x0136, 0x0102, 0x1025, 0x0174, 
	0x0137, 0x0103, 0x1033, 0x0175, 
	0x0138, 0x0104, 0x1040, 0x0176, 
	0x0139, 0x0105, 0x104d, 0x0178, 
	0x013a, 0x0106, 0x105b, 0x0179, 
	0x013b, 0x0107, 0x1068, 0x017a, 
	0x013c, 0x0107, 0x1075, 0x017b, 
	0x013d, 0x0108, 0x1083, 0x017c, 
	0x013e, 0x0109, 0x1090, 0x017e, 
	0x013f, 0x010a, 0x109d, 0x017f, 
	0x0140, 0x010b, 0x10ab, 0x0180, 
	0x0141, 0x010c, 0x10b8, 0x0181, 
	0x0142, 0x010c, 0x10c5, 0x0182, 
	0x0143, 0x010d, 0x10d3, 0x0184, 
	0x0144, 0x010e, 0x10e0, 0x0185, 
	0x0145, 0x010f, 0x10ed, 0x0186, 
	0x0146, 0x0110, 0x10fb, 0x0187, 
	0x0147, 0x0111, 0x1108, 0x0188, 
	0x0148, 0x0111, 0x1115, 0x018a, 
	0x0149, 0x0112, 0x1123, 0x018b, 
	0x014a, 0x0113, 0x1130, 0x018c, 
	0x014b, 0x0114, 0x113d, 0x018d, 
	0x014c, 0x0115, 0x114b, 0x018e, 
	0x014d, 0x0116, 0x1158, 0x0190, 
	0x014e, 0x0116, 0x1165, 0x0191, 
	0x014f, 0x0117, 0x1173, 0x0192, 
	0x0150, 0x0118, 0x1180, 0x0193, 
	0x0151, 0x0119, 0x118d, 0x0194, 
	0x0152, 0x011a, 0x119b, 0x0196, 
	0x0153, 0x011b, 0x11a8, 0x0197, 
	0x0154, 0x011b, 0x11b5, 0x0198, 
	0x0155, 0x011c, 0x11c3, 0x0199, 
	0x0156, 0x011d, 0x11d0, 0x019a, 
	0x0157, 0x011e, 0x11dd, 0x019c, 
	0x0158, 0x011f, 0x11eb, 0x019d, 
	0x0159, 0x0120, 0x11f8, 0x019e, 
	0x015a, 0x0120, 0x1205, 0x019f, 
	0x015b, 0x0121, 0x1213, 0x01a0, 
	0x015c, 0x0122, 0x1220, 0x01a2, 
	0x015d, 0x0123, 0x122d, 0x01a3, 
	0x015e, 0x0124, 0x123b, 0x01a4, 
	0x015f, 0x0125, 0x1248, 0x01a5, 
	0x0160, 0x0125, 0x1255, 0x01a6, 
	0x0161, 0x0126, 0x1263, 0x01a8, 
	0x0162, 0x0127, 0x1270, 0x01a9, 
	0x0163, 0x0128, 0x127d, 0x01aa, 
	0x0164, 0x0129, 0x128b, 0x01ab, 
	0x0165, 0x012a, 0x1298, 0x01ac, 
	0x0166, 0x012a, 0x12a5, 0x01ae, 
	0x0167, 0x012b, 0x12b3, 0x01af, 
	0x0168, 0x012c, 0x12c0, 0x01b0, 
	0x0169, 0x012d, 0x12cd, 0x01b1, 
	0x016a, 0x012e, 0x12db, 0x01b2, 
	0x016b, 0x012f, 0x12e8, 0x01b4, 
	0x016c, 0x012f, 0x12f5, 0x01b5, 
	0x016d, 0x0130, 0x1303, 0x01b6, 
	0x016e, 0x0131, 0x1310, 0x01b7, 
	0x016f, 0x0132, 0x131d, 0x01b8, 
	0x0170, 0x0133, 0x132b, 0x01ba, 
	0x0171, 0x0134, 0x1338, 0x01bb, 
	0x0172, 0x0134, 0x1345, 0x01bc, 
	0x0173, 0x0135, 0x1353, 0x01bd, 
	0x0174, 0x0136, 0x1360, 0x01be, 
	0x0175, 0x0137, 0x136d, 0x01c0, 
	0x0176, 0x0138, 0x137b, 0x01c1, 
	0x0177, 0x0139, 0x1388, 0x01c2, 
	0x0178, 0x0139, 0x1395, 0x01c3, 
	0x0179, 0x013a, 0x13a3, 0x01c4, 
	0x017a, 0x013b, 0x13b0, 0x01c6, 
	0x017b, 0x013c, 0x13bd, 0x01c7, 
	0x017c, 0x013d, 0x13cb, 0x01c8, 
	0x017d, 0x013e, 0x13d8, 0x01c9, 
	0x017e, 0x013e, 0x13e5, 0x01ca, 
	0x017f, 0x013f, 0x13f3, 0x01cc, 
	0x0180, 0x0140, 0x1400, 0x01cd, 
	0x0181, 0x0141, 0x140d, 0x01ce, 
	0x0182, 0x0142, 0x141b, 0x01cf, 
	0x0183, 0x0143, 0x1428, 0x01d0, 
	0x0184, 0x0143, 0x1435, 0x01d2, 
	0x0185, 0x0144, 0x1443, 0x01d3, 
	0x0186, 0x0145, 0x1450, 0x01d4, 
	0x0187, 0x0146, 0x145d, 0x01d5, 
	0x0188, 0x0147, 0x146b, 0x01d6, 
	0x0189, 0x0148, 0x1478, 0x01d8, 
	0x018a, 0x0148, 0x1485, 0x01d9, 
	0x018b, 0x0149, 0x1493, 0x01da, 
	0x018c, 0x014a, 0x14a0, 0x01db, 
	0x018d, 0x014b, 0x14ad, 0x01dc, 
	0x018e, 0x014c, 0x14bb, 0x01de, 
	0x018f, 0x014d, 0x14c8, 0x01df, 
	0x0190, 0x014d, 0x14d5, 0x01e0, 
	0x0191, 0x014e, 0x14e3, 0x01e1, 
	0x0192, 0x014f, 0x14f0, 0x01e2, 
	0x0193, 0x0150, 0x14fd, 0x01e4, 
	0x0194, 0x0151, 0x150b, 0x01e5, 
	0x0195, 0x0152, 0x1518, 0x01e6, 
	0x0196, 0x0152, 0x1525, 0x01e7, 
	0x0197, 0x0153, 0x1533, 0x01e8, 
	0x0198, 0x0154, 0x1540, 0x01ea, 
	0x0199, 0x0155, 0x154d, 0x01eb, 
	0x019a, 0x0156, 0x155b, 0x01ec, 
	0x019b, 0x0157, 0x1568, 0x01ed, 
	0x019c, 0x0157, 0x1575, 0x01ee, 
	0x019d, 0x0158, 0x1583, 0x01f0, 
	0x019e, 0x0159, 0x1590, 0x01f1, 
	0x019f, 0x015a, 0x159d, 0x01f2, 
	0x01a0, 0x015b, 0x15ab, 0x01f3, 
	0x01a1, 0x015c, 0x15b8, 0x01f4, 
	0x01a2, 0x015c, 0x15c5, 0x01f6, 
	0x01a3, 0x015d, 0x15d3, 0x01f7, 
	0x01a4, 0x015e, 0x15e0, 0x01f8, 
	0x01a5, 0x015f, 0x15ed, 0x01f9, 
	0x01a6, 0x0160, 0x15fb, 0x01fa, 
	0x01a7, 0x0161, 0x1608, 0x01fc, 
	0x01a8, 0x0161, 0x1615, 0x01fd, 
	0x01a9, 0x0162, 0x1623, 0x01fe, 
	0x01aa, 0x0163, 0x1630, 0x01ff, 
	0x01ab, 0x0164, 0x163d, 0x0200, 
	0x01ac, 0x0165, 0x164b, 0x0202, 
	0x01ad, 0x0166, 0x1658, 0x0203, 
	0x01ae, 0x0166, 0x1665, 0x0204, 
	0x01af, 0x0167, 0x1673, 0x0205, 
	0x01b0, 0x0168, 0x1680, 0x0206, 
	0x01b1, 0x0169, 0x168d, 0x0208, 
	0x01b2, 0x016a, 0x169b, 0x0209, 
	0x01b3, 0x016b, 0x16a8, 0x020a, 
	0x01b4, 0x016b, 0x16b5, 0x020b, 
	0x01b5, 0x016c, 0x16c3, 0x020c, 
	0x01b6, 0x016d, 0x16d0, 0x020e, 
	0x01b7, 0x016e, 0x16dd, 0x020f, 
	0x01b8, 0x016f, 0x16eb, 0x0210, 
	0x01b9, 0x0170, 0x16f8, 0x0211, 
	0x01ba, 0x0170, 0x1705, 0x0212, 
	0x01bb, 0x0171, 0x1713, 0x0214, 
	0x01bc, 0x0172, 0x1720, 0x0215, 
	0x01bd, 0x0173, 0x172d, 0x0216, 
	0x01be, 0x0174, 0x173b, 0x0217, 
	0x01bf, 0x0175, 0x1748, 0x0218, 
	0x01c0, 0x0175, 0x1755, 0x021a, 
	0x01c1, 0x0176, 0x1763, 0x021b, 
	0x01c2, 0x0177, 0x1770, 0x021c, 
	0x01c3, 0x0178, 0x177d, 0x021d, 
	0x01c4, 0x0179, 0x178b, 0x021e, 
	0x01c5, 0x017a, 0x1798, 0x0220, 
	0x01c6, 0x017a, 0x17a5, 0x0221, 
	0x01c7, 0x017b, 0x17b3, 0x0222, 
	0x01c8, 0x017c, 0x17c0, 0x0223, 
	0x01c9, 0x017d, 0x17cd, 0x0224, 
	0x01ca, 0x017e, 0x17db, 0x0226, 
	0x01cb, 0x017f, 0x17e8, 0x0227, 
	0x01cc, 0x017f, 0x17f5, 0x0228, 
	0x01cd, 0x0180, 0x1803, 0x0229, 
	0x01ce, 0x0181, 0x1810, 0x022a, 
	0x01cf, 0x0182, 0x181d, 0x022c, 
	0x01d0, 0x0183, 0x182b, 0x022d, 
	0x01d1, 0x0184, 0x1838, 0x022e, 
	0x01d2, 0x0184, 0x1845, 0x022f, 
	0x01d3, 0x0185, 0x1853, 0x0230, 
	0x01d4, 0x0186, 0x1860, 0x0232, 
	0x01d5, 0x0187, 0x186d, 0x0233, 
	0x01d6, 0x0188, 0x187b, 0x0234, 
	0x01d7, 0x0189, 0x1888, 0x0235, 
	0x01d8, 0x0189, 0x1895, 0x0236, 
	0x01d9, 0x018a, 0x18a3, 0x0238, 
	0x01da, 0x018b, 0x18b0, 0x0239, 
	0x01db, 0x018c, 0x18bd, 0x023a, 
	0x01dc, 0x018d, 0x18cb, 0x023b, 
	0x01dd, 0x018e, 0x18d8, 0x023c, 
	0x01de, 0x018e, 0x18e5, 0x023e, 
	0x01df, 0x018f, 0x18f3, 0x023f, 
	0x01e0, 0x0190, 0x1900, 0x0240, 
	0x01e1, 0x0191, 0x190d, 0x0241, 
	0x01e2, 0x0192, 0x191b, 0x0242, 
	0x01e3, 0x0193, 0x1928, 0x0244, 
	0x01e4, 0x0193, 0x1935, 0x0245, 
	0x01e5, 0x0194, 0x1943, 0x0246, 
	0x01e6, 0x0195, 0x1950, 0x0247, 
	0x01e7, 0x0196, 0x195d, 0x0248, 
	0x01e8, 0x0197, 0x196b, 0x024a, 
	0x01e9, 0x0198, 0x1978, 0x024b, 
	0x01ea, 0x0198, 0x1985, 0x024c, 
	0x01eb, 0x0199, 0x1993, 0x024d, 
	0x01ec, 0x019a, 0x19a0, 0x024e, 
	0x01ed, 0x019b, 0x19ad, 0x0250, 
	0x01ee, 0x019c, 0x19bb, 0x0251, 
	0x01ef, 0x019d, 0x19c8, 0x0252, 
	0x01f0, 0x019d, 0x19d5, 0x0253, 
	0x01f1, 0x019e, 0x19e3, 0x0254, 
	0x01f2, 0x019f, 0x19f0, 0x0256, 
	0x01f3, 0x01a0, 0x19fd, 0x0257, 
	0x01f4, 0x01a1, 0x1a0b, 0x0258, 
	0x01f5, 0x01a2, 0x1a18, 0x0259, 
	0x01f6, 0x01a2, 0x1a25, 0x025a, 
	0x01f7, 0x01a3, 0x1a33, 0x025c, 
	0x01f8, 0x01a4, 0x1a40, 0x025d, 
	0x01f9, 0x01a5, 0x1a4d, 0x025e, 
	0x01fa, 0x01a6, 0x1a5b, 0x025f, 
	0x01fb, 0x01a7, 0x1a68, 0x0260, 
	0x01fc, 0x01a7, 0x1a75, 0x0262, 
	0x01fd, 0x01a8, 0x1a83, 0x0263, 
	0x01fe, 0x01a9, 0x1a90, 0x0264, 
	0x01ff, 0x01aa, 0x1a9d, 0x0265, 
	0x0200, 0x01ab, 0x1aab, 0x0266, 
	0x0201, 0x01ac, 0x1ab8, 0x0268, 
	0x0202, 0x01ac, 0x1ac5, 0x0269, 
	0x0203, 0x01ad, 0x1ad3, 0x026a, 
	0x0204, 0x01ae, 0x1ae0, 0x026b, 
	0x0205, 0x01af, 0x1aed, 0x026c, 
	0x0206, 0x01b0, 0x1afb, 0x026e, 
	0x0207, 0x01b1, 0x1b08, 0x026f, 
	0x0208, 0x01b1, 0x1b15, 0x0270, 
	0x0209, 0x01b2, 0x1b23, 0x0271, 
	0x020a, 0x01b3, 0x1b30, 0x0272, 
	0x020b, 0x01b4, 0x1b3d, 0x0274, 
	0x020c, 0x01b5, 0x1b4b, 0x0275, 
	0x020d, 0x01b6, 0x1b58, 0x0276, 
	0x020e, 0x01b6, 0x1b65, 0x0277, 
	0x020f, 0x01b7, 0x1b73, 0x0278, 
	0x0210, 0x01b8, 0x1b80, 0x027a, 
	0x0211, 0x01b9, 0x1b8d, 0x027b, 
	0x0212, 0x01ba, 0x1b9b, 0x027c, 
	0x0213, 0x01bb, 0x1ba8, 0x027d, 
	0x0214, 0x01bb, 0x1bb5, 0x027e, 
	0x0215, 0x01bc, 0x1bc3, 0x0280, 
	0x0216, 0x01bd, 0x1bd0, 0x0281, 
	0x0217, 0x01be, 0x1bdd, 0x0282, 
	0x0218, 0x01bf, 0x1beb, 0x0283, 
	0x0219, 0x01c0, 0x1bf8, 0x0284, 
	0x021a, 0x01c0, 0x1c05, 0x0286, 
	0x021b, 0x01c1, 0x1c13, 0x0287, 
	0x021c, 0x01c2, 0x1c20, 0x0288, 
	0x021d, 0x01c3, 0x1c2d, 0x0289, 
	0x021e, 0x01c4, 0x1c3b, 0x028a, 
	0x021f, 0x01c5, 0x1c48, 0x028c, 
	0x0220, 0x01c5, 0x1c55, 0x028d, 
	0x0221, 0x01c6, 0x1c63, 0x028e, 
	0x0222, 0x01c7, 0x1c70, 0x028f, 
	0x0223, 0x01c8, 0x1c7d, 0x0290, 
	0x0224, 0x01c9, 0x1c8b, 0x0292, 
	0x0225, 0x01ca, 0x1c98, 0x0293, 
	0x0226, 0x01ca, 0x1ca5, 0x0294, 
	0x0227, 0x01cb, 0x1cb3, 0x0295, 
	0x0228, 0x01cc, 0x1cc0, 0x0296, 
	0x0229, 0x01cd, 0x1ccd, 0x0298, 
	0x022a, 0x01ce, 0x1cdb, 0x0299, 
	0x022b, 0x01cf, 0x1ce8, 0x029a, 
	0x022c, 0x01cf, 0x1cf5, 0x029b, 
	0x022d, 0x01d0, 0x1d03, 0x029c, 
	0x022e, 0x01d1, 0x1d10, 0x029e, 
	0x022f, 0x01d2, 0x1d1d, 0x029f, 
	0x0230, 0x01d3, 0x1d2b, 0x02a0, 
	0x0231, 0x01d4, 0x1d38, 0x02a1, 
	0x0232, 0x01d4, 0x1d45, 0x02a2, 
	0x0233, 0x01d5, 0x1d53, 0x02a4, 
	0x0234, 0x01d6, 0x1d60, 0x02a5, 
	0x0235, 0x01d7, 0x1d6d, 0x02a6, 
	0x0236, 0x01d8, 0x1d7b, 0x02a7, 
	0x0237, 0x01d9, 0x1d88, 0x02a8, 
	0x0238, 0x01d9, 0x1d95, 0x02aa, 
	0x0239, 0x01da, 0x1da3, 0x02ab, 
	0x023a, 0x01db, 0x1db0, 0x02ac, 
	0x023b, 0x01dc, 0x1dbd, 0x02ad, 
	0x023c, 0x01dd, 0x1dcb, 0x02ae, 
	0x023d, 0x01de, 0x1dd8, 0x02b0, 
	0x023e, 0x01de, 0x1de5, 0x02b1, 
	0x023f, 0x01df, 0x1df3, 0x02b2, 
	0x0240, 0x01e0, 0x1e00, 0x02b3, 
	0x0241, 0x01e1, 0x1e0d, 0x02b4, 
	0x0242, 0x01e2, 0x1e1b, 0x02b6, 
	0x0243, 0x01e3, 0x1e28, 0x02b7, 
	0x0244, 0x01e3, 0x1e35, 0x02b8, 
	0x0245, 0x01e4, 0x1e43, 0x02b9, 
	0x0246, 0x01e5, 0x1e50, 0x02ba, 
	0x0247, 0x01e6, 0x1e5d, 0x02bc, 
	0x0248, 0x01e7, 0x1e6b, 0x02bd, 
	0x0249, 0x01e8, 0x1e78, 0x02be, 
	0x024a, 0x01e8, 0x1e85, 0x02bf, 
	0x024b, 0x01e9, 0x1e93, 0x02c0, 
	0x024c, 0x01ea, 0x1ea0, 0x02c2, 
	0x024d, 0x01eb, 0x1ead, 0x02c3, 
	0x024e, 0x01ec, 0x1ebb, 0x02c4, 
	0x024f, 0x01ed, 0x1ec8, 0x02c5, 
	0x0250, 0x01ed, 0x1ed5, 0x02c6, 
	0x0251, 0x01ee, 0x1ee3, 0x02c8, 
	0x0252, 0x01ef, 0x1ef0, 0x02c9, 
	0x0253, 0x01f0, 0x1efd, 0x02ca, 
	0x0254, 0x01f1, 0x1f0b, 0x02cb, 
	0x0255, 0x01f2, 0x1f18, 0x02cc, 
	0x0256, 0x01f2, 0x1f25, 0x02ce, 
	0x0257, 0x01f3, 0x1f33, 0x02cf, 
	0x0258, 0x01f4, 0x1f40, 0x02d0, 
	0x0259, 0x01f5, 0x1f4d, 0x02d1, 
	0x025a, 0x01f6, 0x1f5b, 0x02d2, 
	0x025b, 0x01f7, 0x1f68, 0x02d4, 
	0x025c, 0x01f7, 0x1f75, 0x02d5, 
	0x025d, 0x01f8, 0x1f83, 0x02d6, 
	0x025e, 0x01f9, 0x1f90, 0x02d7, 
	0x025f, 0x01fa, 0x1f9d, 0x02d8, 
	0x0260, 0x01fb, 0x1fab, 0x02da, 
	0x0261, 0x01fc, 0x1fb8, 0x02db, 
	0x0262, 0x01fc, 0x1fc5, 0x02dc, 
	0x0263, 0x01fd, 0x1fd3, 0x02dd, 
	0x0264, 0x01fe, 0x1fe0, 0x02de, 
	0x0265, 0x01ff, 0x1fed, 0x02e0, 
	0x0266, 0x0200, 0x1ffb, 0x02e1, 
	0x0267, 0x0201, 0x2008, 0x02e2, 
	0x0268, 0x0201, 0x2015, 0x02e3, 
	0x0269, 0x0202, 0x2023, 0x02e4, 
	0x026a, 0x0203, 0x2030, 0x02e6, 
	0x026b, 0x0204, 0x203d, 0x02e7, 
	0x026c, 0x0205, 0x204b, 0x02e8, 
	0x026d, 0x0206, 0x2058, 0x02e9, 
	0x026e, 0x0206, 0x2065, 0x02ea, 
	0x026f, 0x0207, 0x2073, 0x02ec, 
	0x0270, 0x0208, 0x2080, 0x02ed, 
	0x0271, 0x0209, 0x208d, 0x02ee, 
	0x0272, 0x020a, 0x209b, 0x02ef, 
	0x0273, 0x020b, 0x20a8, 0x02f0, 
	0x0274, 0x020b, 0x20b5, 0x02f2, 
	0x0275, 0x020c, 0x20c3, 0x02f3, 
	0x0276, 0x020d, 0x20d0, 0x02f4, 
	0x0277, 0x020e, 0x20dd, 0x02f5, 
	0x0278, 0x020f, 0x20eb, 0x02f6, 
	0x0279, 0x0210, 0x20f8, 0x02f8, 
	0x027a, 0x0210, 0x2105, 0x02f9, 
	0x027b, 0x0211, 0x2113, 0x02fa, 
	0x027c, 0x0212, 0x2120, 0x02fb, 
	0x027d, 0x0213, 0x212d, 0x02fc, 
	0x027e, 0x0214, 0x213b, 0x02fe, 
	0x027f, 0x0215, 0x2148, 0x02ff, 
	0x0280, 0x0215, 0x2155, 0x0300, 
	0x0281, 0x0216, 0x2163, 0x0301, 
	0x0282, 0x0217, 0x2170, 0x0302, 
	0x0283, 0x0218, 0x217d, 0x0304, 
	0x0284, 0x0219, 0x218b, 0x0305, 
	0x0285, 0x021a, 0x2198, 0x0306, 
	0x0286, 0x021a, 0x21a5, 0x0307, 
	0x0287, 0x021b, 0x21b3, 0x0308, 
	0x0288, 0x021c, 0x21c0, 0x030a, 
	0x0289, 0x021d, 0x21cd, 0x030b, 
	0x028a, 0x021e, 0x21db, 0x030c, 
	0x028b, 0x021f, 0x21e8, 0x030d, 
	0x028c, 0x021f, 0x21f5, 0x030e, 
	0x028d, 0x0220, 0x2203, 0x0310, 
	0x028e, 0x0221, 0x2210, 0x0311, 
	0x028f, 0x0222, 0x221d, 0x0312, 
	0x0290, 0x0223, 0x222b, 0x0313, 
	0x0291, 0x0224, 0x2238, 0x0314, 
	0x0292, 0x0224, 0x2245, 0x0316, 
	0x0293, 0x0225, 0x2253, 0x0317, 
	0x0294, 0x0226, 0x2260, 0x0318, 
	0x0295, 0x0227, 0x226d, 0x0319, 
	0x0296, 0x0228, 0x227b, 0x031a, 
	0x0297, 0x0229, 0x2288, 0x031c, 
	0x0298, 0x0229, 0x2295, 0x031d, 
	0x0299, 0x022a, 0x22a3, 0x031e, 
	0x029a, 0x022b, 0x22b0, 0x031f, 
	0x029b, 0x022c, 0x22bd, 0x0320, 
	0x029c, 0x022d, 0x22cb, 0x0322, 
	0x029d, 0x022e, 0x22d8, 0x0323, 
	0x029e, 0x022e, 0x22e5, 0x0324, 
	0x029f, 0x022f, 0x22f3, 0x0325, 
	0x02a0, 0x0230, 0x2300, 0x0326, 
	0x02a1, 0x0231, 0x230d, 0x0328, 
	0x02a2, 0x0232, 0x231b, 0x0329, 
	0x02a3, 0x0233, 0x2328, 0x032a, 
	0x02a4, 0x0233, 0x2335, 0x032b, 
	0x02a5, 0x0234, 0x2343, 0x032c, 
	0x02a6, 0x0235, 0x2350, 0x032e, 
	0x02a7, 0x0236, 0x235d, 0x032f, 
	0x02a8, 0x0237, 0x236b, 0x0330, 
	0x02a9, 0x0238, 0x2378, 0x0331, 
	0x02aa, 0x0238, 0x2385, 0x0332, 
	0x02ab, 0x0239, 0x2393, 0x0334, 
	0x02ac, 0x023a, 0x23a0, 0x0335, 
	0x02ad, 0x023b, 0x23ad, 0x0336, 
	0x02ae, 0x023c, 0x23bb, 0x0337, 
	0x02af, 0x023d, 0x23c8, 0x0338, 
	0x02b0, 0x023d, 0x23d5, 0x033a, 
	0x02b1, 0x023e, 0x23e3, 0x033b, 
	0x02b2, 0x023f, 0x23f0, 0x033c, 
	0x02b3, 0x0240, 0x23fd, 0x033d, 
	0x02b4, 0x0241, 0x240b, 0x033e, 
	0x02b5, 0x0242, 0x2418, 0x0340, 
	0x02b6, 0x0242, 0x2425, 0x0341, 
	0x02b7, 0x0243, 0x2433, 0x0342, 
	0x02b8, 0x0244, 0x2440, 0x0343, 
	0x02b9, 0x0245, 0x244d, 0x0344, 
	0x02ba, 0x0246, 0x245b, 0x0346, 
	0x02bb, 0x0247, 0x2468, 0x0347, 
	0x02bc, 0x0247, 0x2475, 0x0348, 
	0x02bd, 0x0248, 0x2483, 0x0349, 
	0x02be, 0x0249, 0x2490, 0x034a, 
	0x02bf, 0x024a, 0x249d, 0x034c, 
	0x02c0, 0x024b, 0x24ab, 0x034d, 
	0x02c1, 0x024c, 0x24b8, 0x034e, 
	0x02c2, 0x024c, 0x24c5, 0x034f, 
	0x02c3, 0x024d, 0x24d3, 0x0350, 
	0x02c4, 0x024e, 0x24e0, 0x0352, 
	0x02c5, 0x024f, 0x24ed, 0x0353, 
	0x02c6, 0x0250, 0x24fb, 0x0354, 
	0x02c7, 0x0251, 0x2508, 0x0355, 
	0x02c8, 0x0251, 0x2515, 0x0356, 
	0x02c9, 0x0252, 0x2523, 0x0358, 
	0x02ca, 0x0253, 0x2530, 0x0359, 
	0x02cb, 0x0254, 0x253d, 0x035a, 
	0x02cc, 0x0255, 0x254b, 0x035b, 
	0x02cd, 0x0256, 0x2558, 0x035c, 
	0x02ce, 0x0256, 0x2565, 0x035e, 
	0x02cf, 0x0257, 0x2573, 0x035f, 
	0x02d0, 0x0258, 0x2580, 0x0360, 
	0x02d1, 0x0259, 0x258d, 0x0361, 
	0x02d2, 0x025a, 0x259b, 0x0362, 
	0x02d3, 0x025b, 0x25a8, 0x0364, 
	0x02d4, 0x025b, 0x25b5, 0x0365, 
	0x02d5, 0x025c, 0x25c3, 0x0366, 
	0x02d6, 0x025d, 0x25d0, 0x0367, 
	0x02d7, 0x025e, 0x25dd, 0x0368, 
	0x02d8, 0x025f, 0x25eb, 0x036a, 
	0x02d9, 0x0260, 0x25f8, 0x036b, 
	0x02da, 0x0260, 0x2605, 0x036c, 
	0x02db, 0x0261, 0x2613, 0x036d, 
	0x02dc, 0x0262, 0x2620, 0x036e, 
	0x02dd, 0x0263, 0x262d, 0x0370, 
	0x02de, 0x0264, 0x263b, 0x0371, 
	0x02df, 0x0265, 0x2648, 0x0372, 
	0x02e0, 0x0265, 0x2655, 0x0373, 
	0x02e1, 0x0266, 0x2663, 0x0374, 
	0x02e2, 0x0267, 0x2670, 0x0376, 
	0x02e3, 0x0268, 0x267d, 0x0377, 
	0x02e4, 0x0269, 0x268b, 0x0378, 
	0x02e5, 0x026a, 0x2698, 0x0379, 
	0x02e6, 0x026a, 0x26a5, 0x037a, 
	0x02e7, 0x026b, 0x26b3, 0x037c, 
	0x02e8, 0x026c, 0x26c0, 0x037d, 
	0x02e9, 0x026d, 0x26cd, 0x037e, 
	0x02ea, 0x026e, 0x26db, 0x037f, 
	0x02eb, 0x026f, 0x26e8, 0x0380, 
	0x02ec, 0x026f, 0x26f5, 0x0382, 
	0x02ed, 0x0270, 0x2703, 0x0383, 
	0x02ee, 0x0271, 0x2710, 0x0384, 
	0x02ef, 0x0272, 0x271d, 0x0385, 
	0x02f0, 0x0273, 0x272b, 0x0386, 
	0x02f1, 0x0274, 0x2738, 0x0388, 
	0x02f2, 0x0274, 0x2745, 0x0389, 
	0x02f3, 0x0275, 0x2753, 0x038a, 
	0x02f4, 0x0276, 0x2760, 0x038b, 
	0x02f5, 0x0277, 0x276d, 0x038c, 
	0x02f6, 0x0278, 0x277b, 0x038e, 
	0x02f7, 0x0279, 0x2788, 0x038f, 
	0x02f8, 0x0279, 0x2795, 0x0390, 
	0x02f9, 0x027a, 0x27a3, 0x0391, 
	0x02fa, 0x027b, 0x27b0, 0x0392, 
	0x02fb, 0x027c, 0x27bd, 0x0394, 
	0x02fc, 0x027d, 0x27cb, 0x0395, 
	0x02fd, 0x027e, 0x27d8, 0x0396, 
	0x02fe, 0x027e, 0x27e5, 0x0397, 
	0x02ff, 0x027f, 0x27f3, 0x0398, 
	0x0300, 0x0280, 0x2800, 0x039a, 
	0x0301, 0x0281, 0x280d, 0x039b, 
	0x0302, 0x0282, 0x281b, 0x039c, 
	0x0303, 0x0283, 0x2828, 0x039d, 
	0x0304, 0x0283, 0x2835, 0x039e, 
	0x0305, 0x0284, 0x2843, 0x03a0, 
	0x0306, 0x0285, 0x2850, 0x03a1, 
	0x0307, 0x0286, 0x285d, 0x03a2, 
	0x0308, 0x0287, 0x286b, 0x03a3, 
	0x0309, 0x0288, 0x2878, 0x03a4, 
	0x030a, 0x0288, 0x2885, 0x03a6, 
	0x030b, 0x0289, 0x2893, 0x03a7, 
	0x030c, 0x028a, 0x28a0, 0x03a8, 
	0x030d, 0x028b, 0x28ad, 0x03a9, 
	0x030e, 0x028c, 0x28bb, 0x03aa, 
	0x030f, 0x028d, 0x28c8, 0x03ac, 
	0x0310, 0x028d, 0x28d5, 0x03ad, 
	0x0311, 0x028e, 0x28e3, 0x03ae, 
	0x0312, 0x028f, 0x28f0, 0x03af, 
	0x0313, 0x0290, 0x28fd, 0x03b0, 
	0x0314, 0x0291, 0x290b, 0x03b2, 
	0x0315, 0x0292, 0x2918, 0x03b3, 
	0x0316, 0x0292, 0x2925, 0x03b4, 
	0x0317, 0x0293, 0x2933, 0x03b5, 
	0x0318, 0x0294, 0x2940, 0x03b6, 
	0x0319, 0x0295, 0x294d, 0x03b8, 
	0x031a, 0x0296, 0x295b, 0x03b9, 
	0x031b, 0x0297, 0x2968, 0x03ba, 
	0x031c, 0x0297, 0x2975, 0x03bb, 
	0x031d, 0x0298, 0x2983, 0x03bc, 
	0x031e, 0x0299, 0x2990, 0x03be, 
	0x031f, 0x029a, 0x299d, 0x03bf, 
	0x0320, 0x029b, 0x29ab, 0x03c0, 
	0x0321, 0x029c, 0x29b8, 0x03c1, 
	0x0322, 0x029c, 0x29c5, 0x03c2, 
	0x0323, 0x029d, 0x29d3, 0x03c4, 
	0x0324, 0x029e, 0x29e0, 0x03c5, 
	0x0325, 0x029f, 0x29ed, 0x03c6, 
	0x0326, 0x02a0, 0x29fb, 0x03c7, 
	0x0327, 0x02a1, 0x2a08, 0x03c8, 
	0x0328, 0x02a1, 0x2a15, 0x03ca, 
	0x0329, 0x02a2, 0x2a23, 0x03cb, 
	0x032a, 0x02a3, 0x2a30, 0x03cc, 
	0x032b, 0x02a4, 0x2a3d, 0x03cd, 
	0x032c, 0x02a5, 0x2a4b, 0x03ce, 
	0x032d, 0x02a6, 0x2a58, 0x03d0, 
	0x032e, 0x02a6, 0x2a65, 0x03d1, 
	0x032f, 0x02a7, 0x2a73, 0x03d2, 
	0x0330, 0x02a8, 0x2a80, 0x03d3, 
	0x0331, 0x02a9, 0x2a8d, 0x03d4, 
	0x0332, 0x02aa, 0x2a9b, 0x03d6, 
	0x0333, 0x02ab, 0x2aa8, 0x03d7, 
	0x0334, 0x02ab, 0x2ab5, 0x03d8, 
	0x0335, 0x02ac, 0x2ac3, 0x03d9, 
	0x0336, 0x02ad, 0x2ad0, 0x03da, 
	0x0337, 0x02ae, 0x2add, 0x03dc, 
	0x0338, 0x02af, 0x2aeb, 0x03dd, 
	0x0339, 0x02b0, 0x2af8, 0x03de, 
	0x033a, 0x02b0, 0x2b05, 0x03df, 
	0x033b, 0x02b1, 0x2b13, 0x03e0, 
	0x033c, 0x02b2, 0x2b20, 0x03e2, 
	0x033d, 0x02b3, 0x2b2d, 0x03e3, 
	0x033e, 0x02b4, 0x2b3b, 0x03e4, 
	0x033f, 0x02b5, 0x2b48, 0x03e5, 
	0x0340, 0x02b5, 0x2b55, 0x03e6, 
	0x0341, 0x02b6, 0x2b63, 0x03e8, 
	0x0342, 0x02b7, 0x2b70, 0x03e9, 
	0x0343, 0x02b8, 0x2b7d, 0x03ea, 
	0x0344, 0x02b9, 0x2b8b, 0x03eb, 
	0x0345, 0x02ba, 0x2b98, 0x03ec, 
	0x0346, 0x02ba, 0x2ba5, 0x03ee, 
	0x0347, 0x02bb, 0x2bb3, 0x03ef, 
	0x0348, 0x02bc, 0x2bc0, 0x03f0, 
	0x0349, 0x02bd, 0x2bcd, 0x03f1, 
	0x034a, 0x02be, 0x2bdb, 0x03f2, 
	0x034b, 0x02bf, 0x2be8, 0x03f4, 
	0x034c, 0x02bf, 0x2bf5, 0x03f5, 
	0x034d, 0x02c0, 0x2c03, 0x03f6, 
	0x034e, 0x02c1, 0x2c10, 0x03f7, 
	0x034f, 0x02c2, 0x2c1d, 0x03f8, 
	0x0350, 0x02c3, 0x2c2b, 0x03fa, 
	0x0351, 0x02c4, 0x2c38, 0x03fb, 
	0x0352, 0x02c4, 0x2c45, 0x03fc, 
	0x0353, 0x02c5, 0x2c53, 0x03fd, 
	0x0354, 0x02c6, 0x2c60, 0x03fe, 
	0x0355, 0x02c7, 0x2c6d, 0x0400, 
	0x0356, 0x02c8, 0x2c7b, 0x0401, 
	0x0357, 0x02c9, 0x2c88, 0x0402, 
	0x0358, 0x02c9, 0x2c95, 0x0403, 
	0x0359, 0x02ca, 0x2ca3, 0x0404, 
	0x035a, 0x02cb, 0x2cb0, 0x0406, 
	0x035b, 0x02cc, 0x2cbd, 0x0407, 
	0x035c, 0x02cd, 0x2ccb, 0x0408, 
	0x035d, 0x02ce, 0x2cd8, 0x0409, 
	0x035e, 0x02ce, 0x2ce5, 0x040a, 
	0x035f, 0x02cf, 0x2cf3, 0x040c, 
	0x0360, 0x02d0, 0x2d00, 0x040d, 
	0x0361, 0x02d1, 0x2d0d, 0x040e, 
	0x0362, 0x02d2, 0x2d1b, 0x040f, 
	0x0363, 0x02d3, 0x2d28, 0x0410, 
	0x0364, 0x02d3, 0x2d35, 0x0412, 
	0x0365, 0x02d4, 0x2d43, 0x0413, 
	0x0366, 0x02d5, 0x2d50, 0x0414, 
	0x0367, 0x02d6, 0x2d5d, 0x0415, 
	0x0368, 0x02d7, 0x2d6b, 0x0416, 
	0x0369, 0x02d8, 0x2d78, 0x0418, 
	0x036a, 0x02d8, 0x2d85, 0x0419, 
	0x036b, 0x02d9, 0x2d93, 0x041a, 
	0x036c, 0x02da, 0x2da0, 0x041b, 
	0x036d, 0x02db, 0x2dad, 0x041c, 
	0x036e, 0x02dc, 0x2dbb, 0x041e, 
	0x036f, 0x02dd, 0x2dc8, 0x041f, 
	0x0370, 0x02dd, 0x2dd5, 0x0420, 
	0x0371, 0x02de, 0x2de3, 0x0421, 
	0x0372, 0x02df, 0x2df0, 0x0422, 
	0x0373, 0x02e0, 0x2dfd, 0x0424, 
	0x0374, 0x02e1, 0x2e0b, 0x0425, 
	0x0375, 0x02e2, 0x2e18, 0x0426, 
	0x0376, 0x02e2, 0x2e25, 0x0427, 
	0x0377, 0x02e3, 0x2e33, 0x0428, 
	0x0378, 0x02e4, 0x2e40, 0x042a, 
	0x0379, 0x02e5, 0x2e4d, 0x042b, 
	0x037a, 0x02e6, 0x2e5b, 0x042c, 
	0x037b, 0x02e7, 0x2e68, 0x042d, 
	0x037c, 0x02e7, 0x2e75, 0x042e, 
	0x037d, 0x02e8, 0x2e83, 0x0430, 
	0x037e, 0x02e9, 0x2e90, 0x0431, 
	0x037f, 0x02ea, 0x2e9d, 0x0432, 
	0x0380, 0x02eb, 0x2eab, 0x0433, 
	0x0381, 0x02ec, 0x2eb8, 0x0434, 
	0x0382, 0x02ec, 0x2ec5, 0x0436, 
	0x0383, 0x02ed, 0x2ed3, 0x0437, 
	0x0384, 0x02ee, 0x2ee0, 0x0438, 
	0x0385, 0x02ef, 0x2eed, 0x0439, 
	0x0386, 0x02f0, 0x2efb, 0x043a, 
	0x0387, 0x02f1, 0x2f08, 0x043c, 
	0x0388, 0x02f1, 0x2f15, 0x043d, 
	0x0389, 0x02f2, 0x2f23, 0x043e, 
	0x038a, 0x02f3, 0x2f30, 0x043f, 
	0x038b, 0x02f4, 0x2f3d, 0x0440, 
	0x038c, 0x02f5, 0x2f4b, 0x0442, 
	0x038d, 0x02f6, 0x2f58, 0x0443, 
	0x038e, 0x02f6, 0x2f65, 0x0444, 
	0x038f, 0x02f7, 0x2f73, 0x0445, 
	0x0390, 0x02f8, 0x2f80, 0x0446, 
	0x0391, 0x02f9, 0x2f8d, 0x0448, 
	0x0392, 0x02fa, 0x2f9b, 0x0449, 
	0x0393, 0x02fb, 0x2fa8, 0x044a, 
	0x0394, 0x02fb, 0x2fb5, 0x044b, 
	0x0395, 0x02fc, 0x2fc3, 0x044c, 
	0x0396, 0x02fd, 0x2fd0, 0x044e, 
	0x0397, 0x02fe, 0x2fdd, 0x044f, 
	0x0398, 0x02ff, 0x2feb, 0x0450, 
	0x0399, 0x0300, 0x2ff8, 0x0451, 
	0x039a, 0x0300, 0x3005, 0x0452, 
	0x039b, 0x0301, 0x3013, 0x0454, 
	0x039c, 0x0302, 0x3020, 0x0455, 
	0x039d, 0x0303, 0x302d, 0x0456, 
	0x039e, 0x0304, 0x303b, 0x0457, 
	0x039f, 0x0305, 0x3048, 0x0458, 
	0x03a0, 0x0305, 0x3055, 0x045a, 
	0x03a1, 0x0306, 0x3063, 0x045b, 
	0x03a2, 0x0307, 0x3070, 0x045c, 
	0x03a3, 0x0308, 0x307d, 0x045d, 
	0x03a4, 0x0309, 0x308b, 0x045e, 
	0x03a5, 0x030a, 0x3098, 0x0460, 
	0x03a6, 0x030a, 0x30a5, 0x0461, 
	0x03a7, 0x030b, 0x30b3, 0x0462, 
	0x03a8, 0x030c, 0x30c0, 0x0463, 
	0x03a9, 0x030d, 0x30cd, 0x0464, 
	0x03aa, 0x030e, 0x30db, 0x0466, 
	0x03ab, 0x030f, 0x30e8, 0x0467, 
	0x03ac, 0x030f, 0x30f5, 0x0468, 
	0x03ad, 0x0310, 0x3103, 0x0469, 
	0x03ae, 0x0311, 0x3110, 0x046a, 
	0x03af, 0x0312, 0x311d, 0x046c, 
	0x03b0, 0x0313, 0x312b, 0x046d, 
	0x03b1, 0x0314, 0x3138, 0x046e, 
	0x03b2, 0x0314, 0x3145, 0x046f, 
	0x03b3, 0x0315, 0x3153, 0x0470, 
	0x03b4, 0x0316, 0x3160, 0x0472, 
	0x03b5, 0x0317, 0x316d, 0x0473, 
	0x03b6, 0x0318, 0x317b, 0x0474, 
	0x03b7, 0x0319, 0x3188, 0x0475, 
	0x03b8, 0x0319, 0x3195, 0x0476, 
	0x03b9, 0x031a, 0x31a3, 0x0478, 
	0x03ba, 0x031b, 0x31b0, 0x0479, 
	0x03bb, 0x031c, 0x31bd, 0x047a, 
	0x03bc, 0x031d, 0x31cb, 0x047b, 
	0x03bd, 0x031e, 0x31d8, 0x047c, 
	0x03be, 0x031e, 0x31e5, 0x047e, 
	0x03bf, 0x031f, 0x31f3, 0x047f, 
	0x03c0, 0x0320, 0x3200, 0x0480, 
	0x03c1, 0x0321, 0x320d, 0x0481, 
	0x03c2, 0x0322, 0x321b, 0x0482, 
	0x03c3, 0x0323, 0x3228, 0x0484, 
	0x03c4, 0x0323, 0x3235, 0x0485, 
	0x03c5, 0x0324, 0x3243, 0x0486, 
	0x03c6, 0x0325, 0x3250, 0x0487, 
	0x03c7, 0x0326, 0x325d, 0x0488, 
	0x03c8, 0x0327, 0x326b, 0x048a, 
	0x03c9, 0x0328, 0x3278, 0x048b, 
	0x03ca, 0x0328, 0x3285, 0x048c, 
	0x03cb, 0x0329, 0x3293, 0x048d, 
	0x03cc, 0x032a, 0x32a0, 0x048e, 
	0x03cd, 0x032b, 0x32ad, 0x0490, 
	0x03ce, 0x032c, 0x32bb, 0x0491, 
	0x03cf, 0x032d, 0x32c8, 0x0492, 
	0x03d0, 0x032d, 0x32d5, 0x0493, 
	0x03d1, 0x032e, 0x32e3, 0x0494, 
	0x03d2, 0x032f, 0x32f0, 0x0496, 
	0x03d3, 0x0330, 0x32fd, 0x0497, 
	0x03d4, 0x0331, 0x330b, 0x0498, 
	0x03d5, 0x0332, 0x3318, 0x0499, 
	0x03d6, 0x0332, 0x3325, 0x049a, 
	0x03d7, 0x0333, 0x3333, 0x049c, 
	0x03d8, 0x0334, 0x3340, 0x049d, 
	0x03d9, 0x0335, 0x334d, 0x049e, 
	0x03da, 0x0336, 0x335b, 0x049f, 
	0x03db, 0x0337, 0x3368, 0x04a0, 
	0x03dc, 0x0337, 0x3375, 0x04a2, 
	0x03dd, 0x0338, 0x3383, 0x04a3, 
	0x03de, 0x0339, 0x3390, 0x04a4, 
	0x03df, 0x033a, 0x339d, 0x04a5, 
	0x03e0, 0x033b, 0x33ab, 0x04a6, 
	0x03e1, 0x033c, 0x33b8, 0x04a8, 
	0x03e2, 0x033c, 0x33c5, 0x04a9, 
	0x03e3, 0x033d, 0x33d3, 0x04aa, 
	0x03e4, 0x033e, 0x33e0, 0x04ab, 
	0x03e5, 0x033f, 0x33ed, 0x04ac, 
	0x03e6, 0x0340, 0x33fb, 0x04ae, 
	0x03e7, 0x0341, 0x3408, 0x04af, 
	0x03e8, 0x0341, 0x3415, 0x04b0, 
	0x03e9, 0x0342, 0x3423, 0x04b1, 
	0x03ea, 0x0343, 0x3430, 0x04b2, 
	0x03eb, 0x0344, 0x343d, 0x04b4, 
	0x03ec, 0x0345, 0x344b, 0x04b5, 
	0x03ed, 0x0346, 0x3458, 0x04b6, 
	0x03ee, 0x0346, 0x3465, 0x04b7, 
	0x03ef, 0x0347, 0x3473, 0x04b8, 
	0x03f0, 0x0348, 0x3480, 0x04ba, 
	0x03f1, 0x0349, 0x348d, 0x04bb, 
	0x03f2, 0x034a, 0x349b, 0x04bc, 
	0x03f3, 0x034b, 0x34a8, 0x04bd, 
	0x03f4, 0x034b, 0x34b5, 0x04be, 
	0x03f5, 0x034c, 0x34c3, 0x04c0, 
	0x03f6, 0x034d, 0x34d0, 0x04c1, 
	0x03f7, 0x034e, 0x34dd, 0x04c2, 
	0x03f8, 0x034f, 0x34eb, 0x04c3, 
	0x03f9, 0x0350, 0x34f8, 0x04c4, 
	0x03fa, 0x0350, 0x3505, 0x04c6, 
	0x03fb, 0x0351, 0x3513, 0x04c7, 
	0x03fc, 0x0352, 0x3520, 0x04c8, 
	0x03fd, 0x0353, 0x352d, 0x04c9, 
	0x03fe, 0x0354, 0x353b, 0x04ca, 
	0x03ff, 0x0355, 0x3548, 0x04cc, 
};
