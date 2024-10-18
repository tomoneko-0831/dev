FROM ubuntu:24.04 AS ex_c

WORKDIR /C/

RUN apt-get update && apt-get -y upgrade

RUN apt-get -y install build-essential

RUN apt-get -y install mingw-w64


FROM ubuntu:24.04 AS ex_java

WORKDIR /Java/

RUN ln -sf /usr/share/zoneinfo/Asia/Tokyo /etc/localtime

RUN apt-get update && apt-get -y upgrade

RUN apt-get -y install openjdk-21-jdk


FROM ubuntu:20.04 AS ex_python

WORKDIR /Python

RUN apt-get update && apt-get -y upgrade

RUN apt-get -y install python3.9

RUN apt-get -y install python3-pip
