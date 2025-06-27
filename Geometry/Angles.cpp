//////////////////////////////////////////  ANGLES   //////////////////////////////////////////
 
//(AB X AC) --> relative to AB: if(C right) ret neg else if (C left) pos
T orient(pt a, pt b, pt c) {return cross(b-a,c-a);}
 
//check p in between angle(bac) counter clockwise
bool inAngle(pt a, pt b, pt c, pt p) {
    T abp = orient(a, b, p), acp = orient(a, c, p), abc = orient(a, b, c);
    if (abc < 0) swap(abp, acp);
    return (abp >= 0 && acp <= 0) ^ (abc < 0);
}
 
//Get angle between V, W
ld angle(pt v, pt w) {
    return acos(clamp(dot(v,w) / abs(v) / abs(w), (T)-1.0,(T)1.0));
}
 
//calc BAC angle
ld orientedAngle(pt a, pt b, pt c) {
    if (orient(a,b,c) >= 0)
        return angle(b-a, c-a);
    else
        return 2*M_PI - angle(b-a, c-a);
}
