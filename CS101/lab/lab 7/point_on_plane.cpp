/*Write a function that takes the coordinates of three non-collinear points p1, p2, p3 along with the coordinates of a query point q as input,
 and returns true if the query point lies on the plane formed by p1, p2, p3,
  else it returns false. The function should also calculate the distance of the query point q from this plane and store it in the last parameter dist.*/


#include <simplecpp>
bool point_on_plane(
    double *p1_x, double *p1_y, double *p1_z,
    double *p2_x, double *p2_y, double *p2_z,
    double *p3_x, double *p3_y, double *p3_z,
    double *q_x, double *q_y, double *q_z,

    double *dist)
{
    // vecor v1=(p1_x - p2_x,p1_y - p2_y,p1_z - p2_z)
    // vecor v2=(p3_x - p2_x,p3_y - p2_y,p3_z - p2_z)
    //vector n=v1*v2
    // dist = func/|n|


    double v1_x,v1_y,v1_z,v2_x,v2_y,v2_z,n_x,n_y,n_z;
    v1_x = *p1_x - *p2_x;
    v1_y = *p1_y - *p2_y;
    v1_z = *p1_z - *p2_z;
    v2_x = *p3_x - *p2_x;
    v2_y = *p3_y - *p2_y;
    v2_z = *p3_z - *p2_z;
    n_x = ((v1_y)*(v2_z)-(v2_y)*(v1_z));  // cout << n_x <<endl;
    n_y = ((v2_x)*(v1_z)-(v2_z)*(v1_x));  // cout << n_y <<endl;
    n_z = ((v1_x)*(v2_y)-(v2_x)*(v1_y));  // cout << n_z <<endl;
    // cout << *q_x-*p1_x << *q_y-*p1_y << *q_z-*p1_z;

    double func = (n_x)*(*q_x-*p1_x) + (n_y)*(*q_y-*p1_y)+(n_z)*(*q_z-*p1_z);  // cout << func <<endl;
    if(func==0)
    {
        dist =0;
        return true;
    }
    else
    {
        double temp = sqrt((n_x)*(n_x) + (n_y)*(n_y) + (n_z)*(n_z)); // cout << temp;
        *dist = abs(func/temp);
        return false;
    }





}
