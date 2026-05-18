#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) == 3) {
        float s = (a + b + c) / 2.0;
        float triangle_area = sqrt(s * (s - a) * (s - b) * (s - c));
        float radius_inscribed = triangle_area / s;
        float radius_circumscribed = (a * b * c) / (4.0 * triangle_area);

        float area_inscribed = M_PI * radius_inscribed * radius_inscribed;
        float area_circumscribed = M_PI * radius_circumscribed * radius_circumscribed;

        float area_sunflowers = area_circumscribed - triangle_area;
        float area_violets = triangle_area - area_inscribed;
        float area_roses = area_inscribed;

        printf("%.4f %.4f %.4f\n", area_sunflowers, area_violets, area_roses);
    }
    return 0;
}
