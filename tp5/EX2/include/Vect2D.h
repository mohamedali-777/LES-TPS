#ifndef VECT2D_H
#define VECT2D_H


class Vect2D
{
    public:
        Vect2D(float x,float y);
        ~Vect2D();
        float getX();
        float getY();
        void affiche();
        Vect2D operator+(Vect2D&other);
        float produitScalaire(Vect2D& other);
        bool coincide(Vect2D& other);
        float norme();
        void afficher();
    protected:

    private:
        float x;
        float y;
};

#endif // VECT2D_H
