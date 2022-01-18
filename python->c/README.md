# python-c-tutorial
c 调用 python 

# python 2.7
gcc -fPIC -shared great_module.c -o great_module.so -I/usr/include/python2.7/ -lpython2.7  
python test.py  