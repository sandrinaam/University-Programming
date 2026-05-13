struct Point {
    float x;
    float y;
    float z;
};

float distance(struct Point a, struct Point b) {
    return sqrt(
        (a.x - b.x)*(a.x - b.x) +
        (a.y - b.y)*(a.y - b.y) +
        (a.z - b.z)*(a.z - b.z)
    );
}

int main() {
    struct Point points[3];

    for(int i = 0; i < 3; i++) {
        printf("Point %d:\n", i+1);
        scanf("%f %f %f", &points[i].x, &points[i].y, &points[i].z);
    }

    float a = distance(points[0], points[1]);
    float b = distance(points[1], points[2]);
    float c = distance(points[2], points[0]);

    printf("Strani na triagalnika:\n");
    printf("a = %.2f\nb = %.2f\nc = %.2f\n", a, b, c);

    return 0;
}
