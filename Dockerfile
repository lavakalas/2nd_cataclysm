FROM gcc:latest

COPY main.c /usr/src/prj/main.c
WORKDIR /usr/src/prj/
RUN gcc main.c -o out.bin

CMD ["./out.bin"]
