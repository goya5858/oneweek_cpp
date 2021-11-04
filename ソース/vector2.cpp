#include "../ヘッダ/vector2.h"

Vector2 operator+(const Vector2& v1, const Vector2& v2){
    Vector2 v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

Vector2 operator-(const Vector2& v1, const Vector2& v2){
    Vector2 v;
    v.x = v1.x - v2.x;
    v.y = v1.y - v2.y;
    return v;
}

Vector2 operator*(const double n, const Vector2& v1){
    Vector2 v;
    v.x = n*v1.x;
    v.y = n*v1.y;
    return v;
}

Vector2& Vector2::operator=(const Vector2& v){
    x = v.x;
    y = v.y;
    return *this;
}

Vector2& Vector2::operator+=(const Vector2& v){
    x += v.x;
    y += v.y;
    return *this;
}

Vector2& Vector2::operator-=(const Vector2& v){
    x -= v.x;
    y -= v.y;
    return *this;
}