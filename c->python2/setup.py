# -*- coding:utf-8 -*-
from distutils.core import setup
from setuptools import find_packages

setup(name = 'foo',
      version = '0.1',
      packages = find_packages(where='./src/'),  # 查找包的路径
      package_dir = {'':'src'}, # 包的root路径映射到的实际路径
      include_package_data = False,
      package_data = {'data':[]},
      description = 'A python lib for test',
      long_description = '',
      author = 'test',
      author_email = 'test@me.com',
      url = 'https://github.com/test/foo',  # homepage
      license = 'MIT',
      install_requires = [],
    )