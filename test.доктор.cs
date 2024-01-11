
using System;

public class DoctorTests
{
    public void CreateDoctorInstance()
    {
        Doctor doctor = new Doctor();
        Assert.NotNull(doctor);
    }

    public void SetDoctorName()
    {
        Doctor doctor = new Doctor();
        doctor.Name = "Dr. Abdullayeva";
        Assert.Equal("Dr. Abdullayeva", doctor.Name);
    }
}
