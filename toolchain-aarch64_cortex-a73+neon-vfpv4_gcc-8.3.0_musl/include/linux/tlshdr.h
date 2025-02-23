#ifndef _LINUX_TLSHDR_H
#define _LINUX_TLSHDR_H

#include <linux/types.h>

struct tlshdr {
	__u8 type;
	__be16 version;
	__be16 len;
} __attribute__((packed));

#define TLSHDR_REC_TYPE_CCS 20		/* TLS packet is change cipher specification */
#define TLSHDR_REC_TYPE_ALERT 21	/* TLS packet is Alert */
#define TLSHDR_REC_TYPE_HANDSHAKE 22	/* TLS packet is Handshake */
#define TLSHDR_REC_TYPE_DATA 23		/* TLS packet is Application data */

#define TLSHDR_VERSION_1_1 0x0302 /* TLS Header Version(tls 1.1) */
#define TLSHDR_VERSION_1_2 0x0303 /* TLS Header Version(tls 1.2) */

#endif /* _LINUX_TLSHDR_H */
