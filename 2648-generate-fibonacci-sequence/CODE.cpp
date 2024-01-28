//QUESTION: https://leetcode.com/problems/generate-fibonacci-sequence/description/
//REFERENCE: https://leetcode.com/problems/generate-fibonacci-sequence/solutions/3587908/easy-solution-2648-generate-fibonacci-sequence-level-up-your-js-skills-day-29/
//T.C = O(1)
//S.C = O(1)

var fibGenerator = function*() 
{
    let current = 0; 
    let next = 1;

    while (true) 
    {
        yield current; 
        [current, next] = [next, current + next];
    }
};