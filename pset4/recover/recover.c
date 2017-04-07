#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER 512

typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{
    
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover infile\n");
        return 1;
    }
    char *infile = argv[1];

    FILE *inptr = fopen(infile, "rb");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 1;
    }

	size_t res;
	FILE *outptr = NULL;
	BYTE buffer[BUFFER];
	int f = 0;

	do
	{
		res = fread(&buffer, BUFFER, 1, inptr);

		if (buffer[0] == 0xff
			&& buffer[1] == 0xd8
			&& buffer[2] == 0xff
			&& (buffer[3] & 0xf0) == 0xe0)
		{
			if (outptr != NULL)
			{
				fclose(outptr);
			}

			char outfile[1024];
			sprintf(outfile, "%03i.jpg", f);

			outptr = fopen(outfile, "wb");

			f++;
		}

		if (outptr != NULL)
		{
            fwrite(&buffer, BUFFER, 1, outptr);
		}
	}
	while(res);

	fclose(inptr);
	if (outptr != NULL)
	{
		fclose(outptr);
	}
}
