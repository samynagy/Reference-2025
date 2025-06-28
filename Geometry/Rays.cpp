////////////////////// Rays ////////////////////////////
bool pointRay(pt p, pt a, pt b) // a is ray's origin, b defines direction
{
  pt dir = b - a; // ray direction vector
  pt v = p - a;   // vector from origin to point
 
  T u = dot(v, dir);
 
  if (u <= 0) // Point is behind the ray origin
  {
    return (abs(v) <= EPS); // distance from p to a
  }
  else // Point is in front of the ray
  {
    // Compute closest point on the ray: a + (u / ||dir||²) * dir
    pt closest = a + (u / norm(dir)) * dir;
    return (abs(p - closest) <= EPS); // distance from p to closest point
  }
}
