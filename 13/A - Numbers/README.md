<h2><a href="https://codeforces.com/contest/13/problem/A" target="_blank" rel="noopener noreferrer">13A — Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 13A](https://codeforces.com/contest/13/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>64 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Little Petya likes numbers a lot. He found that number 123 in base 16 consists of two digits: the first is 7 and the second is 11. So the sum of digits of 123 in base 16 is equal to 18.</p><p>Now he wonders what is an average value of sum of digits of the number <span class="tex-span"><i>A</i></span> written in all bases from <span class="tex-span">2</span> to <span class="tex-span"><i>A</i> - 1</span>.</p><p>Note that all computations should be done in base 10. You should find the result as an irreducible fraction, written in base 10.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Input contains one integer number <span class="tex-span"><i>A</i></span> (<span class="tex-span">3 ≤ <i>A</i> ≤ 1000</span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output should contain required average value in format «<span class="tex-font-style-tt">X/Y</span>», where <span class="tex-font-style-tt">X</span> is the numerator and <span class="tex-font-style-tt">Y</span> is the denominator.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0040817430264598076" id="id006083735343722431" class="input-output-copier">Copy</div></div><pre id="id0040817430264598076">5<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048327246952045355" id="id007850375627909839" class="input-output-copier">Copy</div></div><pre id="id0048327246952045355">7/3<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004350207654781727" id="id002712007920999857" class="input-output-copier">Copy</div></div><pre id="id004350207654781727">3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005380156544113638" id="id009001813050625657" class="input-output-copier">Copy</div></div><pre id="id005380156544113638">2/1<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample number 5 written in all bases from 2 to 4 looks so: 101, 12, 11. Sums of digits are 2, 3 and 2, respectively.</p></div>