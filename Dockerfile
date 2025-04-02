FROM gcc:latest
WORKDIR /app
COPY . .
RUN apt-get update && apt-get install -y
RUN gcc -o test_program main.c test_main.c
CMD ["./test_program"]