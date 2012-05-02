#include <stdio.h>
#include <string.h>

void qsort(char* str, int l, int r);

int main() {
    
    char buf[128];
    scanf("%s", buf);

    int len = strlen(buf);
    qsort(buf, 0, len - 1);
    printf("%s\n", buf);

    return 0;
}

void qsort(char* str, int l, int r) {
    int s = l;
    int e = r;
    char pivot = str[(s + e) / 2];
    char tmp;
    
    while (s <= e) {

	while (str[s] < pivot)
	    s++;
	while (pivot < str[e])
	    e--;
	if (s <= e) {
	    tmp = str[s];
	    str[s] = str[e];
	    str[e] = tmp;
	    s++;
	    e--;
	}
    }
    
    if (l < e)
	qsort(str, l, e);
    if (s < r)
	qsort(str, s, r);
}
