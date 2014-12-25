#include <stdio.h>

int main(void) {
    int m, s, t, speedTimes, t_best_y, s_best_y, s_best_n;
    int t_needed, m_needed, s_new;
    while (scanf("%d%d%d", &m, &s, &t) != EOF) {
        t_best_y = t + 1;
        s_best_y = 0;
        s_best_n = 0;
        for (speedTimes = 0; speedTimes <= t; speedTimes++) {
            m_needed = speedTimes * 10 - m;
            t_needed = speedTimes;
            if (m_needed > 0)
                t_needed += m_needed / 4 + (m_needed % 4 == 0 ? 0 : 1);
            if (t_needed > t)
                break;
            s_new = speedTimes * 60;
            if (s_new >= s) {
                if (t_needed < t_best_y) {
                    t_best_y = t_needed;
                    s_best_y = s;
                }
            } else {
                if ((t - t_needed) * 17 + s_new >= s) {
                    t_needed += (s - s_new) / 17;
                    if ((s - s_new) % 17 != 0)
                        t_needed++;
                    if (t_needed < t_best_y) {
                        t_best_y = t_needed;
                        s_best_y = s;
                    }
                } else {
                    s_new += (t - t_needed) * 17;
                    if (s_new > s_best_n)
                        s_best_n = s_new;
                }
            }
        }
        if (s_best_y > 0)
            printf("Yes\n%d\n", t_best_y);
        else
            printf("No\n%d\n", s_best_n);
    }
    return 0;
}
