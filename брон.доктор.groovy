using System;
public class Doctor
{
    public string Name { get; set; }
    public string Specialization { get; set; }
    public int ExperienceYears { get; set; }
}

public class Clinic
{
    public string Name { get; set; }
    public string Address { get; set; }
    public Doctor[] Doctors { get; set; }
    // поиск клиник
}

public class DoctorSearchService
{
    public Clinic[] Clinics { get; set; }
    public Doctor FindDoctor(string nameOrSpecialization)
    {
        // поиск докторов
        return null; 
    }
}

public class AppointmentSystem
{
    public void ScheduleAppointment(Doctor doctor, DateTime date)
    {
        // запись на прием
    }
}

public class DoctorReviewSystem
{
    public void AddReview(Doctor doctor, string review)
    {
        // добавления отзыва
    }
    // для отображения отзывов и рейтинга врача 
}
