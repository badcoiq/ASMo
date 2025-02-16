#include "ASMo.h"

int file_exist(const char* file)
{
	FILE* f = 0;
	fopen_s(&f, file, "rb");
	if (f)
	{
		fclose(f);
		return 1;
	}

	return 0;
}

int main(int argc, char* argv[])
{
	if (argc > 3)
	{
		if (file_exist(argv[1]))
		{
			return ASMo_doJob(argv[1], argv[2]);
		}
		else
		{
			printf("Can't open input file %s\n", argv[1]);
		}
	}
	else
	{
		printf("Usage: %s <inputSourceFile> <outputObjectFile>\n", argv[0]);
	}

	return EXIT_SUCCESS;
}

int ASMo_doJob(const char* inputFile, const char* outputFile)
{


	return EXIT_SUCCESS;
}
