<h2><a href="https://codeforces.com/contest/1398/problem/A" target="_blank" rel="noopener noreferrer">1398A — Bad Triangle</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1398A](https://codeforces.com/contest/1398/problem/A) |

## Topics
`geometry` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Bad Triangle</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \dots , a_n$$$, which is sorted in non-decreasing order ($$$a_i \le a_{i + 1})$$$. </p><p>Find three indices $$$i$$$, $$$j$$$, $$$k$$$ such that $$$1 \le i  \lt  j  \lt  k \le n$$$ and it is <span class="tex-font-style-bf">impossible</span> to construct a non-degenerate triangle (a triangle with nonzero area) having sides equal to $$$a_i$$$, $$$a_j$$$ and $$$a_k$$$ (for example it is possible to construct a non-degenerate triangle with sides $$$3$$$, $$$4$$$ and $$$5$$$ but impossible with sides $$$3$$$, $$$4$$$ and $$$7$$$). If it is impossible to find such triple, report it.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$3 \le n \le 5 \cdot 10^4$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots , a_n$$$ ($$$1 \le a_i \le 10^9$$$; $$$a_{i - 1} \le a_i$$$) — the array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the answer to it in one line.</p><p>If there is a triple of indices $$$i$$$, $$$j$$$, $$$k$$$ ($$$i  \lt  j  \lt  k$$$) such that it is <span class="tex-font-style-bf">impossible</span> to construct a non-degenerate triangle having sides equal to $$$a_i$$$, $$$a_j$$$ and $$$a_k$$$, print that three indices in ascending order. If there are multiple answers, print any of them.</p><p>Otherwise, print <span class="tex-font-style-tt">-1</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005608106728516785" id="id009960318301047284" class="input-output-copier">Copy</div></div><pre id="id005608106728516785">3
7
4 6 11 11 15 18 20
4
10 10 10 11
3
1 1 1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005150228312150944" id="id00847997686826737" class="input-output-copier">Copy</div></div><pre id="id005150228312150944">2 3 6
-1
1 2 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case it is impossible with sides $$$6$$$, $$$11$$$ and $$$18$$$. Note, that this is not the only correct answer.</p><p>In the second test case you always can construct a non-degenerate triangle.</p></div>