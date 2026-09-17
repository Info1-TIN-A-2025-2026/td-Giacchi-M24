// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define H	4
// #define W	4

// display_matrix(unsigned char matrix[H][W]);
// fill_matrix(unsigned char matrix[H][W],unsigned char min_value, unsigned char max_value);
// compute_histo(unsigned char [H]);
// display_histo(unsigned char [H]);

// int main(int argc, const char *argv[])
// {
// 	unsigned char f[H][W] = {0};
// 	srand(0);
// 	fill_matrix(f, 0, 255);
// 	display_matrix(f);

// 	unsigned long h[NUM_GRAYS!=(0)]
// 	compute_histo(f, h);

// 	return 0;
// }

// display_matrix(unsigned char matrix[H][W]); 
// {
// 	for (unsigned long row = 0; row < H; row++)
// 	{
// 		for (unsigned long col = 0; col < W; col++)
// 		{
// 			printf("%d ", fill_matrix(f, H, W));
// 		}
		
// 	}
// }

// fill_matrix(int f, int h, int w){
// 	(rand() / RAND_MAX) * (max - min);
// }

// compute_histo(int f, int h){
// {
// 	for (unsigned long row = 0; row < H; row++)
// 	{
// 		for (unsigned long col = 0; col < W; col++)
// 		{
// 			histo[matrix[row][col]]++;
// 		}
		
// 	}
// }

// }

// display_histo(int h){

// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define H 4
#define W 4
#define NUM_GRAYS 256

/* Prototypes */
void display_matrix(unsigned char matrix[H][W]);
void fill_matrix(unsigned char matrix[H][W],
                 unsigned char min_value,
                 unsigned char max_value);
void compute_histo(unsigned char matrix[H][W],
                   unsigned long histo[NUM_GRAYS]);
void display_histo(unsigned long histo[NUM_GRAYS]);

int main(int argc, const char *argv[])
{
    unsigned char f[H][W] = {0};
    unsigned long histo[NUM_GRAYS] = {0};

    srand(0);

    fill_matrix(f, 0, 255);
    display_matrix(f);

    compute_histo(f, histo);
    display_histo(histo);

    return 0;
}

/* Affiche la matrice */
void display_matrix(unsigned char matrix[H][W])
{
    for (unsigned long row = 0; row < H; row++)
    {
        for (unsigned long col = 0; col < W; col++)
        {
            printf("%3u ", matrix[row][col]);
        }
        printf("\n");
    }
}

/* Remplit la matrice avec des valeurs aléatoires */
void fill_matrix(unsigned char matrix[H][W],
                 unsigned char min_value,
                 unsigned char max_value)
{
    for (unsigned long row = 0; row < H; row++)
    {
        for (unsigned long col = 0; col < W; col++)
        {
            matrix[row][col] =
                min_value + rand() % (max_value - min_value + 1);
        }
    }
}

/* Calcule l’histogramme */
void compute_histo(unsigned char matrix[H][W],
                   unsigned long histo[NUM_GRAYS])
{
    for (unsigned long row = 0; row < H; row++)
    {
        for (unsigned long col = 0; col < W; col++)
        {
            histo[matrix[row][col]]++;
        }
    }
}

/* Affiche l’histogramme */
void display_histo(unsigned long histo[NUM_GRAYS])
{
    for (int i = 0; i < NUM_GRAYS; i++)
    {
        if (histo[i] > 0)
        {
            printf("Gray %3d : %lu\n", i, histo[i]);
        }
    }
}
