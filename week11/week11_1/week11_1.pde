//week11-1 好玩的程式設計 地鼠出現
void setup() {
  size(300, 300);
}
int [][] a = {{0, 0, 0},{0, 0, 0}, {0, 0, 0}}; // 2D陣列
void mousePressed() {
  int i = mouseY / 100, j = mouseX / 100;
  if (a[i][j] > 0) {
    a[i][j] = -120;
  }
}

void draw() {
  background(#67EA5C);
  if (frameCount % 60 == 0) {
    int i = int(random(3)), j = int(random(3));
    a[i][j] = 60;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      int x = j * 100 + 50, y = i * 100 + 50;

      if (a[i][j] < 0) {
        fill(255, 0, 0);
        a[i][j]++;
      }
      else if (a[i][j] > 0) {
        fill(#F5B857, a[i][j] * 4); //會變色 半透明
        a[i][j]--;
      }else fill(#67EA5C);
       ellipse(x, y, 80, 80);
    }
  }
}
