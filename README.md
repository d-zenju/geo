geo
====

##Overview
このプログラムは以下のことができます。
* BLH(Latitude, Longitude, Height)からECEF(X, Y, Z)への変換
* ECEFからENU(East, North, Up)への変換
* ENUから2点間の方位と距離を算出

##Description
[GPSの測位計算プログラム入門 -その1-](http://www.enri.go.jp/~fks442/K_MUSEN/)を参考に
C++仕様に改変したものです。

## Usage
* void blh2ecef(double *latitude, double *longitude, double *height, double *ecef);
BLH(Latitude, Longitude, Height)からECEF(X, Y, Z)に変換する

* void ecef2enu(double *own, double *other, double *enu);
* double angle(double east, double north);
* double distance(double east, double north);
* double height(double altitude, double geoid);

## Install
*geo.hpp*と*geo.cpp*を同じフォルダに入れておき
実装したいプログラムに*geo.hpp*をインクルードしてください。

## Contribution

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[tcnksm](https://github.com/tcnksm)
