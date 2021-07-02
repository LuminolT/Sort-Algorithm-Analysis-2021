//
// Created by admin on 2021/6/24.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_STUDENT_H
#define SORT_ALGORITHM_ANALYSIS_2021_STUDENT_H

struct Score {
    std::string ID;
    int Chinese, Math, English, Physics, Chemistry, Total;
    bool operator<(const Score &x) const {
        return Total < x.Total;
    }
    bool operator==(const Score &x) const {
        return Total == x.Total;
    }
    bool operator>(const Score &x) const {
        return Total > x.Total;
    }
    bool operator<=(const Score &x) const {
        return Total <= x.Total;
    }
    bool operator>=(const Score &x) const {
        return Total >= x.Total;
    }
    bool operator!=(const Score &x) const {
        return Total != x.Total;
    }
    friend std::ostream &operator<<(std::ostream& os, const Score &s) {
        os << s.ID << ' ' << s.Total << '\n';
        return os;
    }
};

#endif //SORT_ALGORITHM_ANALYSIS_2021_STUDENT_H
