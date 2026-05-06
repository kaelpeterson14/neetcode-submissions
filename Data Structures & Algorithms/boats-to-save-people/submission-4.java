class Solution {
    public int numRescueBoats(int[] people, int limit) {
        HashMap<Integer, LinkedList<Integer>> map = new HashMap<>();
        int boatCount = 0;

        for(int i = 0; i < people.length; i++)
        {
            map.putIfAbsent(people[i], new LinkedList<Integer>());
            map.get(people[i]).add(i);
        }

        for (int num : map.keySet()) {
                while (map.get(num).size() != 0) {
                    for (int target = limit - num; target >= 0; target --) 
                    {   
                        if (map.containsKey(target) && map.get(target).size() != 0) {
                            if(target == num && map.get(num).size() < 2){
                                 map.get(num).removeFirst();
                                boatCount++;
                                break;
                            }
                            map.get(target).removeFirst();
                            map.get(num).removeFirst();
                            boatCount++;
                            break;
                        }
                        else if (target == 0) {
                            map.get(num).removeFirst();
                            boatCount++;
                        }
                    }
                }
        }
        return boatCount;
        }

} 