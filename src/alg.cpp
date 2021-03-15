// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
}

        int cnt = 0;
        for (int i = 0; i < size; i++) {
                if (arr[i] == value)
                        cnt += 1;
}

        if (cnt != 0)
                return cnt;
        else
                return 0; // если ничего не найдено
}
