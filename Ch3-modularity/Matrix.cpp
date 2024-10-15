#include <iostream>

class Matrix{
public:
    Matrix(int rr, int cc): r{rr}, c{cc}{
        // Allocate rows
        elem = new double*[r];
        // Allocate cols for each rows
        for(int i=0; i<r; ++i){
            elem[i] = new double[c];
        }
        // Initialize the Matrix
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                elem[i][j] = j;
            }
        }
    }

    ~Matrix(){
        // Free cols for each row
        for (int i = 0; i < r; ++i) {
            delete[] elem[i];
        }
        // Free rows
        delete[] elem;
    }
    
    // Use pointer here, since elem[i] is a pointer which point to elem[i][0]
    // The return value here is a pointer to a double
    double* operator[](int i){
        return elem[i];
    }

    friend Matrix operator+(Matrix& a, Matrix& b){
        if(a.r!=b.r || a.c!=b.c)
            throw "please make sure 2 matrice with same size";
        
        Matrix res(a.r, a.c);
        for(int i=0; i<a.r; ++i){
            for(int j=0; j<a.c; ++j){
                res[i][j] = a[i][j]+b[i][j];
            }
        }
        return res;
    }
    
    friend std::ostream& operator<<(std::ostream& out, Matrix& m){
        for(int i=0; i<m.r; ++i){
            for(int j=0; j<m.c; ++j){
                out<< m[i][j]<< " ";
            }
            out<< "\n";
        }
        return out;
    }

    int row(){ return r;}
    int col(){ return c;}


private:
    double **elem;
    int r;
    int c;
};


int main(){
    Matrix mat(3, 5);
    Matrix mat2(3, 5);
    std::cout<< mat;
    std::cout<< mat.row()<< "\n";
    std::cout<< mat.col()<< "\n";
    Matrix mat3 = mat+ mat2;
    std::cout<< mat3;    
}
