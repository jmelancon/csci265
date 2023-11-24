import java.util.HashMap;
import java.util.ArrayList;
public class Prog6 { 
    public static int totalCredits(HashMap<String, Integer> students){
        /*
         * Counts the number of credits in the students dict
         */
        int sum = 0;
        for (int i : students.values()){
            sum += i;
        }
        return sum;
    }

    public static ArrayList<String> classesByDept(HashMap<String, Integer> students, String department){
        /*
         * Search for courses offered by a given department in a student dict
         */
        ArrayList<String> outList = new ArrayList<String>();
        for (String course : students.keySet()){
            if (course.split(" ")[0].equals(department)){
                outList.add(course);
            }
        }
        return outList;
    }

    public static ArrayList<String> classesByCredits(HashMap<String, Integer> students, int credits){
        ArrayList<String> outList = new ArrayList<String>();
        for(String course : students.keySet()){
            if(students.get(course) == credits){
                outList.add(course);
            }
        }
        return outList;
    }

    public static boolean isPartTime(HashMap<String, Integer> students){
        return totalCredits(students) < 12;
    }

    public static int numOfClasses(HashMap<String, Integer> students){
        return students.keySet().toArray().length;
    }

    public static int lowerLevelCredits(HashMap<String, Integer> students){
        int count = 0;
        for(String course : students.keySet()){
            if (Integer.parseInt(course.split(" ")[1]) > 299){
                count += students.get(course);
            }
        }
        return count;
    }

    public static ArrayList<String> sortClasses(String[] courses){
        // Get list with each department
        ArrayList<String> depts = new ArrayList<String>();
        int count = 0;
        for (String s : courses){
            if (!(depts.contains(s.split(" ")[0]))){
                depts.add(s.split(" ")[0]);
                count++;
            }
        }

        // Sort department list
        String[] arrDepts = depts.toArray(new String[count]);
        for(int i = 1; i < arrDepts.length; i++){
            while (i > 0){
                if (arrDepts[i].compareTo(arrDepts[i - 1]) < 0){
                    String tmp = arrDepts[i];
                    arrDepts[i] = arrDepts[i - 1];
                    arrDepts[i - 1] = tmp;
                }
                else{
                    break;
                }
            }
        }
        
        // Sort each course for each department
        ArrayList<String> outList = new ArrayList<String>();
        for(int i = 0; i < arrDepts.length; i++){
            int countTwo = 0;
            ArrayList<String> myCourses = new ArrayList<String>();
            for(String s : courses){
                if (arrDepts[i].compareTo(s.split(" ")[0]) == 0){
                    myCourses.add(s);
                    count++;
                }
            }
            String[] selCourses = myCourses.toArray(new String[countTwo]);
            for(int j = 1; j < selCourses.length; j++){
                while (j > 0){
                    int high = Integer.parseInt(selCourses[j].split(" ")[1]);
                    int low = Integer.parseInt(selCourses[j - 1].split(" ")[1]);
                    if (high < low){
                        String tmp = selCourses[j];
                        selCourses[j] = selCourses[j - 1];
                        selCourses[j - 1] = tmp;
                    }
                    else{
                        break;
                    }
                }
            }
            for(String s : selCourses){
                outList.add(s);
            }
        }
        return outList;
    }



    public static void printClasses(String title, HashMap<String, Integer> students){
        System.out.println(title);

        String[] colHeads = new String[] {"Course", "Credits"};
        int[] colLen = new int[] {colHeads[0].length(), colHeads[1].length()};
        
        // Find longest course string
        for (String course : students.keySet()){
            if (course.length() > colLen[0]){
                colLen[0] = course.length();
            }
        }

        // Find longest credit string
        for (int i : students.values()){
            int stringLen = ("" + i).length();
            if (stringLen > colLen[1]){
                colLen[1] = stringLen;
            }
        }

        // Insertion sort the keys
        String[] keyList = students.keySet().toArray(new String[numOfClasses(students)]);
        String[] sortedKeys = sortClasses(keyList).toArray(new String[keyList.length]);
        
        System.out.println(String.format("%-" + colLen[0] + "s %" + colLen[1] + "s", colHeads[0], colHeads[1]));

        for(String s : sortedKeys){
            System.out.println(String.format("%-" + colLen[0] + "s %" + colLen[1] + "s", s, students.get(s)));
        }

    }

    public static void main(String[] args) {
        System.out.println("Hello Java ☕");
        HashMap<String, Integer> students = new HashMap<String, Integer>();
        students.put("CSCI 242", 3);
        students.put("CSCI 265", 3);
        students.put("CSCI 327", 3);
        students.put("MATH 207", 2);
        students.put("MUSC 101", 3);
        students.put("PHYS 252", 4);
        System.out.println(students);
        System.out.println("Number of credits: " + totalCredits(students));
        System.out.println("CSCI courses: " + classesByDept(students, "CSCI"));
        System.out.println("Courses with 3 credits: " + classesByCredits(students, 3));
        System.out.println("Student part time? " + isPartTime(students));
        System.out.println("Number of courses: " + numOfClasses(students));
        System.out.println("Number of upper-level credits: " + lowerLevelCredits(students));
        printClasses("Course list", students);
    }
}

