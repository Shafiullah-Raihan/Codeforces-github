<h2><a href="https://codeforces.com/contest/1584/problem/C" target="_blank" rel="noopener noreferrer">1584C — Two Arrays</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1584C](https://codeforces.com/contest/1584/problem/C) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Two Arrays</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays of integers $$$a_1, a_2, \ldots, a_n$$$ and $$$b_1, b_2, \ldots, b_n$$$.</p><p>Let's define a transformation of the array $$$a$$$:</p><ol> <li> Choose any non-negative integer $$$k$$$ such that $$$0 \le k \le n$$$. </li><li> Choose $$$k$$$ distinct array indices $$$1 \le i_1  \lt  i_2  \lt  \ldots  \lt  i_k \le n$$$. </li><li> Add $$$1$$$ to each of $$$a_{i_1}, a_{i_2}, \ldots, a_{i_k}$$$, all other elements of array $$$a$$$ remain unchanged. </li><li> Permute the elements of array $$$a$$$ in any order. </li></ol><p>Is it possible to perform some transformation of the array $$$a$$$ <span class="tex-font-style-bf">exactly once</span>, so that the resulting array is equal to $$$b$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Descriptions of test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$) — the size of arrays $$$a$$$ and $$$b$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-100 \le a_i \le 100$$$).</p><p>The third line of each test case contains $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ ($$$-100 \le b_i \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" (without quotes) if it is possible to perform a transformation of the array $$$a$$$, so that the resulting array is equal to $$$b$$$. Print "<span class="tex-font-style-tt">NO</span>" (without quotes) otherwise.</p><p>You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008839027862497757" id="id00983022772772762" class="input-output-copier">Copy</div></div><pre id="id008839027862497757">3
3
-1 1 0
0 0 2
1
0
2
5
1 2 3 4 5
1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008292565709757371" id="id00906113040621522" class="input-output-copier">Copy</div></div><pre id="id0008292565709757371">YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we can make the following transformation:</p><ul> <li> Choose $$$k = 2$$$. </li><li> Choose $$$i_1 = 1$$$, $$$i_2 = 2$$$. </li><li> Add $$$1$$$ to $$$a_1$$$ and $$$a_2$$$. The resulting array is $$$[0, 2, 0]$$$. </li><li> Swap the elements on the second and third positions. </li></ul><p>In the second test case there is no suitable transformation.</p><p>In the third test case we choose $$$k = 0$$$ and do not change the order of elements.</p></div>