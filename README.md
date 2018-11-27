
This mdule contains frequency divider blocks for GNU Radio. The operation of the block is similar to operation of hardware digital frequency dividers.

Input signal can be either Float, Integer, Byte or Bool.

- Frequency Divider block generates square wave with 50% duty cycle and a period equal to Count cycles of input signal.

### Dependencies

- GNU Radio v3.7.X or later. <br> See the [GNU Radio Wiki](http://gnuradio.org/redmine/projects/gnuradio/wiki/InstallingGR) for installation instructions.

- Software used to build GNU Radio modules. This may include gcc-c++, swig, doxygen, boost and cppunit libraries. Usually the software can be installed with the distribution package manager.

### Installation

```
mkdir build
cd build
cmake ..
make
sudo make install
sudo ldconfig

