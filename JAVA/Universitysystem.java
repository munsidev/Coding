
import java.util.ArrayList;

class Department {
    private int deptid;

    Department(int deptid) {
        this.deptid = deptid; 
    }

    public void display() {
        System.out.println("DeptID = " + deptid);
    }
}

class Professor {
    private int id;

    Professor(int id) {
        this.id = id;
    }

    public void display() {
        System.out.println("Id = " + id);
    }
}

class Course {
    private int code;
    private double credit;

    Course(int code, double credit) {
        this.code = code;
        this.credit = credit;
    }

    public void display() {
        System.out.println("Code = " + code);
        System.out.println("Credit =" + credit);
    }
}

public class Universitysystem {
    public static void main(String[] args) {
        ArrayList<Department> departmentList = new ArrayList<>();
        departmentList.add(new Department(111));
        for (Department department : departmentList)
            department.display();

        ArrayList<Professor> professorList = new ArrayList<>();
        professorList.add(new Professor(711112));
        for (Professor professor : professorList)
            professor.display();

        ArrayList<Course> courseList = new ArrayList<Course>();
        courseList.add(new Course(221, 3.5));
        for (Course course : courseList)
            course.display();
    }
}