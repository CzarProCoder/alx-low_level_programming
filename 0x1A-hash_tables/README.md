<div class="project row">
<div class="col-xs-12 col-md-10 col-lg-8 contains-images">
<h1 class="gap">0x1A. C - Hash tables</h1>
<div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:17,&quot;value&quot;:&quot;Algorithm&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:18,&quot;value&quot;:&quot;Data structure&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}" data-react-cache-id="tags/Tags-0">
<div class="align-items-center d-flex flex-wrap gap-3 my-2"><span class="label label-primary">C</span><span class="label label-primary">Algorithm</span><span class="label label-primary">Data structure</span></div>
</div>
<div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2023-04-06T06:00:00.000+03:00&quot;,&quot;ends_at&quot;:&quot;2023-04-08T06:00:00.000+03:00&quot;,&quot;second_deadline_at&quot;:&quot;2023-04-13T06:00:00.000+03:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0">
<ul id="project-metadata" class="list-group metadata">
<li class="list-group-item">&nbsp;By:&nbsp;Julien Barbier</li>
<li class="list-group-item">&nbsp;Weight:&nbsp;1</li>
<li class="list-group-item">&nbsp;Project over - took place from&nbsp;<span title="" data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" data-original-title="2023-04-06 06:00 (GMT+03:00)"><span class="datetime">Apr 6, 2023 6:00 AM</span></span>&nbsp;to&nbsp;<span title="" data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" data-original-title="2023-04-08 06:00 (GMT+03:00)"><span class="datetime">Apr 8, 2023 6:00 AM</span></span></li>
<li class="list-group-item">&nbsp;An auto review will be launched at the deadline</li>
</ul>
</div>
<div class="sm-gap clean well">
<h4>In a nutshell&hellip;</h4>
<ul>
<li><strong>Auto QA review:</strong>&nbsp;0.0/47 mandatory &amp; 0.0/21 optional</li>
<li><strong>Altogether:</strong>&nbsp;&nbsp;<strong>0.0%</strong>
<ul>
<li>Mandatory: 0.0%</li>
<li>Optional: 0.0%</li>
<li>Calculation:&nbsp; 0.0% + (0.0% * 0.0%) &nbsp;==&nbsp;<strong>0.0%</strong></li>
</ul>
</li>
</ul>
</div>
<div id="project-description" class="panel panel-default">
<div class="panel-body">
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0" href="https://intranet.alxswe.com/rltoken/IQVfdxJlS6jhAgcuUoCseg" target="_blank">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a></li>
<li><a title="Hash function" href="https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew" target="_blank">Hash function</a></li>
<li><a title="Hash table" href="https://intranet.alxswe.com/rltoken/mxjKpEfAw3E5B8S3inPuHQ" target="_blank">Hash table</a></li>
<li><a title="All about hash tables" href="https://intranet.alxswe.com/rltoken/3RwwAqmpGJpMiBa7BE9fAQ" target="_blank">All about hash tables</a></li>
<li><a title="why hash tables and not arrays" href="https://intranet.alxswe.com/rltoken/OgO7uga3PIaCTMtTzYCY3g" target="_blank">why hash tables and not arrays</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a title="explain to anyone" href="https://intranet.alxswe.com/rltoken/fLjDjjaCL1oE-WJcDPpmFg" target="_blank">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
</ul>
<h3>Copyright - Plagiarism</h3>
<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work.</li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A&nbsp;<code>README.md</code>&nbsp;file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the&nbsp;<code>Betty</code>&nbsp;style. It will be checked using&nbsp;<a title="betty-style.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank">betty-style.pl</a>&nbsp;and&nbsp;<a title="betty-doc.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called&nbsp;<code>hash_tables.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2>More Info</h2>
<h3>Data Structures</h3>
<p>Please use these data structures for this project:</p>
<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
</code></pre>
<h3>Tests</h3>
<p>We strongly encourage you to work all together on a set of tests</p>
<h3>Python Dictionaries</h3>
<p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type&nbsp;<code>d = {'a': 1, 'b': 2}</code>, but everything looks so simple for the user. Python doesn&rsquo;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about&nbsp;<a title="how dictionaries are implemented in Python 2.7" href="https://intranet.alxswe.com/rltoken/hKhDFfKKcxdM9U8GZVPOHQ" target="_blank">how dictionaries are implemented in Python 2.7</a>&nbsp;(not mandatory).</p>
<p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table.&nbsp;<a title="Read more here" href="https://intranet.alxswe.com/rltoken/6wE80OFPwL-As1zGh2iMFg" target="_blank">Read more here</a>&nbsp;(not mandatory).</p>
</div>
</div>
<h2 class="gap">Tasks</h2>
<div id="task-num-0" data-role="task1233" data-position="1">
<div id="task-1233" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">0. &gt;&gt;&gt; ht = {}</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1233" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>Write a function that creates a hash table.</p>
<ul>
<li>Prototype:&nbsp;<code>hash_table_t *hash_table_create(unsigned long int size);</code>
<ul>
<li>where&nbsp;<code>size</code>&nbsp;is the size of the array</li>
</ul>
</li>
<li>Returns a pointer to the newly created hash table</li>
<li>If something went wrong, your function should return&nbsp;<code>NULL</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
julien@ubuntu:~/0x1A. Hash tables$ ./a 
0x238a010
julien@ubuntu:~/0x1A. Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x1A. Hash tables$
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>0-hash_table_create.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1233">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1233" data-batch-id="62" data-toggle="modal" data-target="#task-1233-users-done-modal">Help</button>&nbsp;<button id="task-num-0-check-code-btn" class="btn btn-default btn-sm check-your-task-1233-modal-button" data-task-id="1233" data-toggle="modal" data-target="#task-test-correction-1233-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1233}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1233" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1233}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1233" data-toggle="modal" data-target="#task-qa-review-1233-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1233}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-1" data-role="task1234" data-position="2">
<div id="task-1234" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">1. djb2</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1234" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>Write a hash function implementing the djb2 algorithm.</p>
<ul>
<li>Prototype:&nbsp;<code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
<li>You are allowed to copy and paste the function from&nbsp;<a title="this page" href="https://intranet.alxswe.com/rltoken/3B7lCUBD4yZh66Pbl2KcEQ" target="_blank">this page</a></li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 1-djb2.c 
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash &lt;&lt; 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
julien@ubuntu:~/0x1A. Hash tables$ 
julien@ubuntu:~/0x1A. Hash tables$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
julien@ubuntu:~/0x1A. Hash tables$ ./b 
6953392314605
3749890792216096085
5861846
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>1-djb2.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1234">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1234" data-batch-id="62" data-toggle="modal" data-target="#task-1234-users-done-modal">Help</button>&nbsp;<button id="task-num-1-check-code-btn" class="btn btn-default btn-sm check-your-task-1234-modal-button" data-task-id="1234" data-toggle="modal" data-target="#task-test-correction-1234-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1234}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1234" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1234}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1234" data-toggle="modal" data-target="#task-qa-review-1234-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1234}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-2" data-role="task1235" data-position="3">
<div id="task-1235" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">2. key -&gt; index</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1235" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>Write a function that gives you the index of a key.</p>
<ul>
<li>Prototype:&nbsp;<code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>
<ul>
<li>where&nbsp;<code>key</code>&nbsp;is the key</li>
<li>and&nbsp;<code>size</code>&nbsp;is the size of the array of the hash table</li>
</ul>
</li>
<li>This function should use the&nbsp;<code>hash_djb2</code>&nbsp;function that you wrote earlier</li>
<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
<li>You will have to use this hash function for all the next tasks</li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
julien@ubuntu:~/0x1A. Hash tables$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>2-key_index.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1235">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1235" data-batch-id="62" data-toggle="modal" data-target="#task-1235-users-done-modal">Help</button>&nbsp;<button id="task-num-2-check-code-btn" class="btn btn-default btn-sm check-your-task-1235-modal-button" data-task-id="1235" data-toggle="modal" data-target="#task-test-correction-1235-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1235}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1235" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1235}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1235" data-toggle="modal" data-target="#task-qa-review-1235-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1235}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-3" data-role="task1236" data-position="4">
<div id="task-1236" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">3. &gt;&gt;&gt; ht['betty'] = 'cool'</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1236" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>Write a function that adds an element to the hash table.</p>
<ul>
<li>Prototype:&nbsp;<code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>
<ul>
<li>Where&nbsp;<code>ht</code>&nbsp;is the hash table you want to add or update the key/value to</li>
<li><code>key</code>&nbsp;is the key.&nbsp;<code>key</code>&nbsp;can not be an empty string</li>
<li>and&nbsp;<code>value</code>&nbsp;is the value associated with the key.&nbsp;<code>value</code>&nbsp;must be duplicated.&nbsp;<code>value</code>&nbsp;can be an empty string</li>
</ul>
</li>
<li>Returns:&nbsp;<code>1</code>&nbsp;if it succeeded,&nbsp;<code>0</code>&nbsp;otherwise</li>
<li>In case of collision, add the new node at the beginning of the list</li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
julien@ubuntu:~/0x1A. Hash tables$
</code></pre>
<p>If you want to test for collisions, here are some strings that collide using the djb2 algorithm:</p>
<ul>
<li><strong>hetairas</strong>&nbsp;collides with&nbsp;<strong>mentioner</strong></li>
<li><strong>heliotropes</strong>&nbsp;collides with&nbsp;<strong>neurospora</strong></li>
<li><strong>depravement</strong>&nbsp;collides with&nbsp;<strong>serafins</strong></li>
<li><strong>stylist</strong>&nbsp;collides with&nbsp;<strong>subgenera</strong></li>
<li><strong>joyful</strong>&nbsp;collides with&nbsp;<strong>synaphea</strong></li>
<li><strong>redescribed</strong>&nbsp;collides with&nbsp;<strong>urites</strong></li>
<li><strong>dram</strong>&nbsp;collides with&nbsp;<strong>vivency</strong></li>
</ul>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>3-hash_table_set.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1236">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1236" data-batch-id="62" data-toggle="modal" data-target="#task-1236-users-done-modal">Help</button>&nbsp;<button id="task-num-3-check-code-btn" class="btn btn-default btn-sm check-your-task-1236-modal-button" data-task-id="1236" data-toggle="modal" data-target="#task-test-correction-1236-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1236}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1236" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1236}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1236" data-toggle="modal" data-target="#task-qa-review-1236-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1236}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-4" data-role="task1251" data-position="5">
<div id="task-1251" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">4. &gt;&gt;&gt; ht['betty']</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1251" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>Write a function that retrieves a value associated with a key.</p>
<ul>
<li>Prototype:&nbsp;<code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>
<ul>
<li>where&nbsp;<code>ht</code>&nbsp;is the hash table you want to look into</li>
<li>and&nbsp;<code>key</code>&nbsp;is the key you are looking for</li>
</ul>
</li>
<li>Returns the value associated with the element, or&nbsp;<code>NULL</code>&nbsp;if&nbsp;<code>key</code>&nbsp;couldn&rsquo;t be found</li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 4-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
julien@ubuntu:~/0x1A. Hash tables$ ./e 
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>4-hash_table_get.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1251">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1251" data-batch-id="62" data-toggle="modal" data-target="#task-1251-users-done-modal">Help</button>&nbsp;<button id="task-num-4-check-code-btn" class="btn btn-default btn-sm check-your-task-1251-modal-button" data-task-id="1251" data-toggle="modal" data-target="#task-test-correction-1251-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1251}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1251" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1251}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1251" data-toggle="modal" data-target="#task-qa-review-1251-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1251}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-5" data-role="task1252" data-position="6">
<div id="task-1252" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">5. &gt;&gt;&gt; print(ht)</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1252" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>Write a function that prints a hash table.</p>
<ul>
<li>Prototype:&nbsp;<code>void hash_table_print(const hash_table_t *ht);</code>
<ul>
<li>where&nbsp;<code>ht</code>&nbsp;is the hash table</li>
</ul>
</li>
<li>You should print the key/value in the order that they appear in the array of hash table
<ul>
<li>Order: array, list</li>
</ul>
</li>
<li>Format: see example</li>
<li>If&nbsp;<code>ht</code>&nbsp;is NULL, don&rsquo;t print anything</li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 5-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
julien@ubuntu:~/0x1A. Hash tables$ ./f 
{}
{'Betty': 'Cool', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Asterix': 'Obelix'}
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>5-hash_table_print.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1252">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1252" data-batch-id="62" data-toggle="modal" data-target="#task-1252-users-done-modal">Help</button>&nbsp;<button id="task-num-5-check-code-btn" class="btn btn-default btn-sm check-your-task-1252-modal-button" data-task-id="1252" data-toggle="modal" data-target="#task-test-correction-1252-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1252}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1252" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1252}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1252" data-toggle="modal" data-target="#task-qa-review-1252-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1252}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-6" data-role="task1388" data-position="7">
<div id="task-1388" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">6. &gt;&gt;&gt; del ht</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1388" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>Write a function that deletes a hash table.</p>
<ul>
<li>Prototype:&nbsp;<code>void hash_table_delete(hash_table_t *ht);</code>
<ul>
<li>where&nbsp;<code>ht</code>&nbsp;is the hash table</li>
</ul>
</li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
julien@ubuntu:~/0x1A. Hash tables$ valgrind ./g
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621== 
{'Betty': 'Cool', 'mentioner': 'Bob', 'hetairas': 'Bob Z Chu', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Tim': 'Britton', 'Asterix': 'Obelix'}
==6621== 
==6621== HEAP SUMMARY:
==6621==     in use at exit: 0 bytes in 0 blocks
==6621==   total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621== 
==6621== All heap blocks were freed -- no leaks are possible
==6621== 
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>6-hash_table_delete.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1388">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1388" data-batch-id="62" data-toggle="modal" data-target="#task-1388-users-done-modal">Help</button>&nbsp;<button id="task-num-6-check-code-btn" class="btn btn-default btn-sm check-your-task-1388-modal-button" data-task-id="1388" data-toggle="modal" data-target="#task-test-correction-1388-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1388}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1388" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1388}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1388" data-toggle="modal" data-target="#task-qa-review-1388-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1388}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-7" data-role="task1253" data-position="8">
<div id="task-1253" class="panel panel-default task-card "><span id="user_id" data-id="196617"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">7. $ht['Betty'] = 'Cool'</h3>
<div><span class="label label-info">#advanced</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="196617"></span>
<div class="task_progress_score_bar" data-task-id="1253" data-correction-id="14150910">
<div class="task_progress_bar">&nbsp;</div>
<div class="task_progress_score_text">Score:&nbsp;<span class="task_score_value">0.0%</span>&nbsp;(<span class="task_progress_value">Checks completed: 0.0%</span>)</div>
</div>
<p>In&nbsp;<a title="PHP" href="https://intranet.alxswe.com/rltoken/UoWjDMSf7CR02W8bnn1geg" target="_blank">PHP</a>, hash tables are&nbsp;<strong>ordered</strong>. Wait&hellip; WAT? How is this even possible?</p>
<p><img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230413%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20230413T161459Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=1ead3014ab917c22ebfef2ca949ae647b158eb454258872aa544735929ebd540" alt="" /></p>
<p><strong>Before you continue</strong>, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?</p>
<p>For this task, please:</p>
<ul>
<li>Read&nbsp;<a title="PHP Internals Book: HashTable" href="https://intranet.alxswe.com/rltoken/SIdpN9PE_9aYBCHUGPX-fw" target="_blank">PHP Internals Book: HashTable</a></li>
<li>Use the same hash function</li>
<li>Use these data structures:</li>
</ul>
<pre><code>/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
</code></pre>
<p>Rewrite the previous functions using these data structures:</p>
<ul>
<li><code>shash_table_t *shash_table_create(unsigned long int size);</code></li>
<li><code>int shash_table_set(shash_table_t *ht, const char *key, const char *value);</code>
<ul>
<li>The key/value pair should be inserted in the sorted list at the right place</li>
<li>Note that here we do not want to do exactly like&nbsp;<code>PHP</code>: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.</li>
</ul>
</li>
<li><code>char *shash_table_get(const shash_table_t *ht, const char *key);</code></li>
<li><code>void shash_table_print(const shash_table_t *ht);</code>
<ul>
<li>Should print the hash table using the sorted linked list</li>
</ul>
</li>
<li><code>void shash_table_print_rev(const shash_table_t *ht);</code>
<ul>
<li>Should print the hash tables key/value pairs in reverse order using the sorted linked list</li>
</ul>
</li>
<li><code>void shash_table_delete(shash_table_t *ht);</code></li>
<li>You are allowed to have more than 5 functions in your file</li>
</ul>
<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 100-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
        shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht  
julien@ubuntu:~/0x1A. Hash tables$ ./sht 
{'y': '0'}
{'j': '1', 'y': '0'}
{'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
{'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
{'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>
<p><br /><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/253/php.png" alt="" width="50%" /></p>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1A-hash_tables</code></li>
<li>File:&nbsp;<code>100-sorted_hash_table.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="1253">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1253" data-batch-id="62" data-toggle="modal" data-target="#task-1253-users-done-modal">Help</button>&nbsp;<button id="task-num-7-check-code-btn" class="btn btn-default btn-sm check-your-task-1253-modal-button" data-task-id="1253" data-toggle="modal" data-target="#task-test-correction-1253-correction-modal" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1253}">Check your code</button>&nbsp;<button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="1253" data-correction-id="14150910">Ask for a new correction</button>&nbsp;<button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1253}"><span>Get a sandbox</span></button>&nbsp;<button class="btn btn-default btn-sm" data-task-id="1253" data-toggle="modal" data-target="#task-qa-review-1253-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1253}">QA Review</button></div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
</div>
</div>
<div class="copyright">Copyright&nbsp;</div>