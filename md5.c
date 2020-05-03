

MD5step(ds,ms,nb)
	uns8 *ds, *ms; //digerst string, message string
	unsigned int nb; //number of 64-byte message blcksks
{
	uns32 d[4];
	uns32 m[16];
	uns32 d0[4];
	unsigned int i,j;
	unsigned int n;
	uns32 x;
	static uns8 s1[] = {7,12,17,22};
	static uns8 s2[] = {5,9,14,20};
	static uns8 s3[] = {4, 11, 16, 23};
	static uns8 s4[] = {6, 10, 15, 21};
	static uns32 T[] = { 
	       		    0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
			    0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501, 
			    0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be, 
			    0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821, 

			   }
}
