// fizz buzz
// count to 100, if the number is divisable by 3 print fizz,
// if divisiable by 5 print buzz and if divisible by both print fizzbuzz
//
#include <stdio.h>

void fizzbuzz(const int n) {
  for (int i = 0; i < n; i++) {
    if (i % 15 == 0) {
      printf("fizzbuzz\n");
    } else if (i % 5 == 0) {
      printf("buzz\n");
    } else if (i % 3 == 0) {
      printf("fizz\n");
    }
  }
}

typedef struct {
  int x;
  int y;
} Point;

void count(const int n, const int stop) {
  if (n < stop) {
    count(n + 1, stop);
  }
  printf("%d", n);
}

void count_to_ten(){
    count(0, 10);
}

void foo(Point p) {
  // create a copy of p that is local to this function
  p.x = 10;
  p.y = 100;

  int x = 0;
  int y = 1000;
  // function returns, stack will unwind.
}

void bar(Point *p) {
  p->x = 100;
  p->y = 109;
}

//DO NOT DO THIS, BAD THINGS WILL HAPPEN
Point * create_point(const int x, const int y) {
    Point p = { .x = x, .y = y};
    return &p;
}

void print(const Point p) { printf("%d, %d", p.x, p.y); }

void test(int * myInts, const int length){
    for(int i = 0; i < length; i++) {
        printf("%d", myInts[i]);
    }
}


int main(int argc, char **argv) {
    int x[4] = {1, 2, 3, 4};
    //do a lot of work, ignore karl on funciton length
    size_t arrayLength = sizeof(x) / sizeof(x[0]);

    char* mystr = "hello world\0";
    return 0;
}
