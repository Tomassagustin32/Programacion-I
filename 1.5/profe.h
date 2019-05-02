#define TAM 10
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
    int id;
    char codigoDeBarra[13];
    char nombre[50];
    char fechaVencimiento[50];
    float precio;
    int estado;
    int idProveedor;
}eProducto;
// char proveedor[50];
typedef struct
{
    int id;
    char descripcion[50];
    char localidad[50];
    char cuit[50];
    char duenio[50];

}eProveedor;

eProducto pedirProducto();
void inicializarProductos(eProducto[], int);
void inicializarProveedor(eProveedor[], int);
void mostrarUnProducto(eProducto);
void mostrarUnProveedor(eProveedor);
void cargarArray(eProducto[], int);
void mostrarArray(eProducto[], int);
void mostrarArrayProveedores(eProveedor[], int);
void construirArray(eProducto[], int);
//void construirArrayProveedores(eProveedor[], int)
int insertProducto(eProducto[], int);
int dameLugarLibre(eProducto[], int);
int existeProducto(eProducto, eProducto[]);
void borrarProducto(eProducto[], int);
int editarProducto(eProducto[], int);
void inicializarProveedor(eProveedor[], int);
void mostrarProductosConProveedor(eProducto[], int, eProveedor [], int);
void mostrarProveedoresConProductos(eProveedor[], int, eProducto [], int);
void mostrarProductosConProveedorElMaximo(eProducto[], int, eProveedor [], int);
void mostrarProductosConProveedorOrdenado(eProducto[], int, eProveedor [], int, int decre);

