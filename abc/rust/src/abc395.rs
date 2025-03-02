use std::io;

fn a() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();
    s.clear();

    io::stdin().read_line(&mut s).unwrap();
    let numbers = s
        .split_whitespace()
        .map(|x| x.parse::<i32>().unwrap())
        .collect::<Vec<i32>>();

    for pair in numbers.windows(2) {
        if let &[a, b] = pair {
            if a >= b {
                println!("No");
                return;
            }
        }
    }
    println!("Yes");
}

fn b() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();

    let n = s.trim().parse::<usize>().unwrap();

    for i in 0..n {
        for _ in 0..n {
            // j = n + 1 - i
            let j = n + 1 - i;
            if i <= j {
                if j % 2 == 0 {
                    print!(".");
                } else {
                    print!("#");
                }
            }
        }
        println!();
    }
}
