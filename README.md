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
1. void blh2ecef(double *latitude, double *longitude, double *height, double *ecef);   
BLH(Latitude, Longitude, Height)からECEF(X, Y, Z)に変換する
[入力]  
** double latitude : 緯度
** double longitude : 経度
** double height : 高さ
** double ecef[3] : ECEF(X : ecef[0], Y : ecef[1], Z : ecef[2])が代入される

2. void ecef2enu(double *own, double *other, double *enu);  
2点のECEF(X, Y, Z)からENU(East, North, Up)に変換する
[入力]
** double own[3] : 始点のECEF
** double other[3] : 終点のECEF
** double enu[3] : 始点から終点へのENU(East : enu[0], North : enu[1], Up : enu[2])が代入される

3. double angle(double east, double north);
始点から終点への方位角を算出する
[入力]
** double east : enuのeast値
** double north : enuのnorth値
[出力]
北を0度とした方位角が出力される

4. double distance(double east, double north);
始点と終点の距離を算出する
[入力]
** double east : enuのeast値(通常enuは[m])
** double north : enuのnorth値(通常enuは[m])
[出力]
2点間の距離(入力値が[m]なら[m])が出力される

5. double height(double altitude, double geoid);  
楕円体高を算出する
[入力]
** double altitude : 標高[m]
** double geoid : ジオイド高[m]
[出力]
楕円体高[m]が出力される
一般にECEFの算出に用いるHeight値には楕円体高を用いる

## Install
*geo.hpp*と*geo.cpp*を同じフォルダに入れておき
実装したいプログラムに*geo.hpp*をインクルードしてください。

## Contribution

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[tcnksm](https://github.com/tcnksm)
