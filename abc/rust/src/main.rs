use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
    }

    // 問題文どおりに
    let mut graph = vec![vec!['?'; n]; n];
    for i in 0..n {
        let j = n - i - 1; // 問題文では +1 だが配列の添字は０からなので調整
        for x in i..(j + 1) {
            for y in i..(j + 1) {
                if i % 2 == 2 {
                    graph[x][y] = '.';
                } else {
                    graph[x][y] = '#';
                }
            }
        }
    }

    for row in graph {
        println!("{}", row.iter().collect::<String>())
    }

    // 直接マスに塗られる色を求める
    // for i in 0..n {
    //     for j in 0..n {
    //         let depth = i.min(j).min(n - 1 - i).min(n - 1 - j);
    //         print!("{}", if depth % 2 == 0 { '#' } else { '.' });
    //     }
    //     println!();
    // }
}
