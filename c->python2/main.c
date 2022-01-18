#include <Python.h>

int great_function_from_python(int a); 

int main(int argc, char *argv[]) {
    Py_Initialize();
    printf("%d",great_function_from_python(2));
    Py_Finalize();
}

int great_function_from_python(int a) {
    int res;
    PyObject *pModule,*pFunc;
    PyObject *pArgs, *pValue;
    
    /* import */
    pModule = PyImport_Import(PyString_FromString("foo.great_module"));

    /* great_module.great_function */
    pFunc = PyObject_GetAttrString(pModule, "great_function"); 
    
    /* build args */
    pArgs = PyTuple_New(1);
    PyTuple_SetItem(pArgs,0, PyInt_FromLong(a));
      
    /* call */
    pValue = PyObject_CallObject(pFunc, pArgs);
    
    res = PyInt_AsLong(pValue);
    printf("result:%i \n",res);
    return res;
}