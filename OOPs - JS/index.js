class Student {
    constructor(id, name, age, noOfSub, gf) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.noOfSub = noOfSub;
        this.gf = gf;
    }

    getAge(id) {
        if (this.id === id) {
            return this.age;
        }
        return -1;
    }

    setAge(id, age) {
        if (this.id === id && age < 100) {
            this.age = age;
            return true;
        }
        return false;
    }

    gfChat() {
        console.log(`Hello ${this.name} this time you are chatting with your gf..`);
    }

    isGFChating(id) {
        if (id === this.id) {
            this.gfChat();
        } else {
            console.log("I will not share my personal details with you.");
        }
    }

    getGfName(id) {
        if (this.id === id) {
            return this.gf;
        }
        return "";
    }

    setGfName(id, gf) {
        if (this.id === id && (gf.length > 1 && gf.length < 30)) {
            this.gf = gf;
            return true;
        }
        return false;
    }
}

function printStudentInfo(obj) {
    console.log(`Student_ID: ${obj.id}`);
    console.log(`Student_NAME: ${obj.name}`);
    console.log(`${obj.name} is learning ${obj.noOfSub} Subjects.`);
}

// Main
const s1 = new Student(101, "Rohit Kumar", 18, 5, "Nisha Baby");
printStudentInfo(s1);
console.log(`${s1.name} your age is ${s1.getAge(101)}`);
console.log(`${s1.name} your gf name is ${s1.getGfName(101)}`);

// Update age
if (s1.setAge(101, 20)) {
    console.log(`${s1.name} now your age is updated..`);
} else {
    console.log(`!sorry ${s1.name} your age not updated`);
}

s1.isGFChating(101);

// Update gf name
if (s1.setGfName(878, "Komal")) {
    console.log(`${s1.name} now your gf name updated...`);
} else {
    console.log(`!sorry ${s1.name} your gf name not updated`);
}
