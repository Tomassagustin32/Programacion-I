#define TAM 3
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
    char codigoDeBarra[13];
    char nombre[50];
    char fechaVencimiento[50];
    char proveedor[50];
    float precio;
    int estado;

}eProducto;

eProducto pedirProducto();
void inicializarProductos(eProducto[], int);
void mostrarUnProducto(eProducto);
void cargarArray(eProducto[], int);
void mostrarArray(eProducto[], int);
void construirArray(eProducto[], int);
int insertProducto(eProducto[], int);
int dameLugarLibre(eProducto[], int);
int existeProducto(eProducto, eProducto[]);
int borrarProducto(eProducto[], int);
int editarProducto(eProducto[], int);



