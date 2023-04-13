#include <stdio.h>
// these are the function definitions of the various area calculations
float squarearea(float x);
float circlearea(float x);
float rectanglearea(float x, float y);
float trianglearea(float x, float y);
float squarearea(float x){
int area = x*x; //calculates the area of the square
return area;
}
float circlearea(float x){
float area = 3.14*x*x;//calculates area of a circle
return area;
}
float rectanglearea(float x, float y){
    float area = x*y;
    return area;
}
float trianglearea(float x, float y){
float area = 1/2*(x*y); // calculates the area of a triangle
return area;
}

int main(){
float area;
printf("Shape 1\nIt contains a semi-circle and a rectangle.\n");
area = circlearea(4)/2 + rectanglearea(12,8);
printf("Area of shape 1 = %.2fft\n\n ", area);


printf("Shape 2\nIt contains a rectangle minus a triangle.\n");
area = rectanglearea(15,19) - trianglearea(19,7);
printf("Area of shape 2 = %.2fft\n\n ", area);


printf("Shape 3\nIt contains a circle and a triangle.\n");
area = circlearea(6) - trianglearea(12,6);
printf("Area of shape 3 = %.2fft\n\n ", area);

printf("Shape 4\nIt contains a square and a rehombus.\n");
area = squarearea(11)+ rectanglearea(11,7);
printf("Area of shape 1 = %.2fft\n\n ", area);

printf("Shape 5\nIt contains a semi-circle and a rectangle.\n");
area = circlearea(11)/2 + rectanglearea(22,13);
printf("Area of shape 1 = %.2fft\n\n ", area);

printf("Shape 6\nIt contains a rectangle - triangle.\n");
area = rectanglearea(17,26) - trianglearea(17,14);
printf("Area of shape 1 = %.2fft\n\n ", area);

return 0;

}