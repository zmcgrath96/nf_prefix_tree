from setuptools import setup, Extension
from Cython.Build import cythonize

import os
os.environ["CC"] = "g++"

with open("README.md", "r") as fh:
    long_description = fh.read()

with open('LICENSE', 'r') as l:
    lic = l.read()

setup(
    name="nf_prefix_tree",
    version="0.1.0", 
    url="https://github.com/zmcgrath96/nf_prefix_tree",
    author="Zachary McGrath", 
    author_email="zmcgrath96@gmail.com", 
    description="A datastructure for efficient storage of string data", 
    long_description=long_description,
    long_description_content_type="text/markdown",
    keywords="prefix bioinformatics substring string fast memory",
    license=lic,
    ext_modules=cythonize(Extension(
        "nf_prefix_tree", 
        ["nf_prefix_tree.pyx"], 
        language="c++", 
        extra_compile_args=["-std=c++11"]
    ))
)