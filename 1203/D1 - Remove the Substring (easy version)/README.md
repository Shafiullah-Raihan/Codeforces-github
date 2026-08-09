<h2><a href="https://codeforces.com/contest/1203/problem/D1" target="_blank" rel="noopener noreferrer">1203D1 — Remove the Substring (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1203D1](https://codeforces.com/contest/1203/problem/D1) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D1. Remove the Substring (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">The only difference between easy and hard versions is the length of the string</span>.</p><p>You are given a string $$$s$$$ and a string $$$t$$$, both consisting only of lowercase Latin letters. It is guaranteed that $$$t$$$ can be obtained from $$$s$$$ by removing some (possibly, zero) number of characters (not necessary contiguous) from $$$s$$$ without changing order of remaining characters (in other words, it is guaranteed that $$$t$$$ is a subsequence of $$$s$$$).</p><p>For example, the strings "<span class="tex-font-style-tt">test</span>", "<span class="tex-font-style-tt">tst</span>", "<span class="tex-font-style-tt">tt</span>", "<span class="tex-font-style-tt">et</span>" and "" are subsequences of the string "<span class="tex-font-style-tt">test</span>". But the strings "<span class="tex-font-style-tt">tset</span>", "<span class="tex-font-style-tt">se</span>", "<span class="tex-font-style-tt">contest</span>" are not subsequences of the string "<span class="tex-font-style-tt">test</span>".</p><p>You want to remove some substring (contiguous subsequence) from $$$s$$$ of <span class="tex-font-style-bf">maximum possible length</span> such that after removing this substring $$$t$$$ will remain a subsequence of $$$s$$$.</p><p>If you want to remove the substring $$$s[l;r]$$$ then the string $$$s$$$ will be transformed to $$$s_1 s_2 \dots s_{l-1} s_{r+1} s_{r+2} \dots s_{|s|-1} s_{|s|}$$$ (where $$$|s|$$$ is the length of $$$s$$$).</p><p>Your task is to find the maximum possible length of the substring you can remove so that $$$t$$$ is still a subsequence of $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one string $$$s$$$ consisting of at least $$$1$$$ and at most $$$200$$$ lowercase Latin letters.</p><p>The second line of the input contains one string $$$t$$$ consisting of at least $$$1$$$ and at most $$$200$$$ lowercase Latin letters.</p><p>It is guaranteed that $$$t$$$ is a subsequence of $$$s$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the maximum possible length of the substring you can remove so that $$$t$$$ is still a subsequence of $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004334007512254133" id="id0022957788041906502" class="input-output-copier">Copy</div></div><pre id="id004334007512254133">bbaba
bb
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008051055110962333" id="id007323344367483228" class="input-output-copier">Copy</div></div><pre id="id008051055110962333">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0045845947278563903" id="id002407222901038698" class="input-output-copier">Copy</div></div><pre id="id0045845947278563903">baaba
ab
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005905485002984363" id="id0021672914630382323" class="input-output-copier">Copy</div></div><pre id="id005905485002984363">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002521822587950031" id="id006847790918919133" class="input-output-copier">Copy</div></div><pre id="id002521822587950031">abcde
abcde
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005669356274782322" id="id005045545634105324" class="input-output-copier">Copy</div></div><pre id="id005669356274782322">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020925611098873653" id="id0039779108106354255" class="input-output-copier">Copy</div></div><pre id="id0020925611098873653">asdfasdf
fasd
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048156159490111594" id="id006694492047764551" class="input-output-copier">Copy</div></div><pre id="id0048156159490111594">3
</pre></div></div></div>