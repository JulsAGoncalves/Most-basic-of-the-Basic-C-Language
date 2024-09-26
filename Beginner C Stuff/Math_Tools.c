#include <stdio.h>
#define PI 3.1416
#include <math.h>

int main(void){
	
	/* to pre define a variable, you can do the above using
	 * #define PI 3.1416 and to include your math tools use
	 * #include <math.h> math tools include:
	 * sqrt()
	 * others which I don't know
	 * Example:
	 * int num = 4;
	 * int num2 = 3;
	 * double pythagorean;
	 * pythagorean = sqrt((4*4)+(4*4));
	 * printf("If a = 4 and b = 3, then c = %lf", pythagorean);
	 */
	
	int num = 4;
	int num2 = 3;
	double pythagorean;
	pythagorean = sqrt((num*num)+(num2*num2));
	printf("If a = 4 and b = 3, then c = %.0lf", pythagorean);
	
	return (0);
}
