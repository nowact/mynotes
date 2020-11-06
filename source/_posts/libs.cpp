typedef int64_t t_price; //L13(4)
typedef int64_t t_quantity; //L15(2)


//购买200股，每股3元, 则
//200 * 3 = 600元
//qty   = 20000
//price = 30000
//val = qty * price = 600000000
//val = val / 10000 = 60000
//val = val * 100   = 6000000
int64_t calc_amount(t_quantity qty, t_price price) {
    __int128_t val = qty;
    val *= price;
    if ((qty < 0) && price > 0) || (qty > 0 && price < 0) {
        return (val - 5000) / 10000 * 100;
    }

    return (val + 5000) / 10000 * 100;
}

int64_t round_amount(int64_t val) {
    if (val < 0) {
        return (val - 50) / 100 * 100;
    }

    return (val + 50) / 100 * 100;
}
