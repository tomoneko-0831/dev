FROM ubuntu:24.04 AS base

RUN apt-get update && apt-get -y upgrade

RUN apt-get install -y make sudo git vim nkf

RUN ln -sf /usr/share/zoneinfo/Asia/Tokyo /etc/localtime

RUN apt-get update && apt-get -y upgrade


FROM base AS ex_c

WORKDIR /C/

RUN apt-get -y install build-essential


FROM base AS dev_win

WORKDIR /dev_win/

RUN apt-get install -y mingw-w64


FROM base AS ex_java

WORKDIR /Java/

RUN apt-get -y install openjdk-21-jdk


FROM base AS ex_python

WORKDIR /Python

RUN apt-get -y install python3.12 python3.12-venv
